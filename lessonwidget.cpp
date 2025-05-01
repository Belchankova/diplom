#include "lessonwidget.h"
#include "ui_lessonwidget.h"

#include <QFile>


LessonWidget::LessonWidget(const QString& filePath, QWidget *parent) : QWidget(parent), ui(new Ui::LessonWidget) {
    ui->setupUi(this);

    connect(ui->backPushButton, &QPushButton::clicked, this, &LessonWidget::onBackButtonClicked);

    loadData(filePath);
}

void LessonWidget::loadData(const QString& filePath) {
    QFile file(filePath);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        QString content = in.readAll();
        ui->textBrowser->setHtml(content);
        file.close();
    } else {
        ui->textBrowser->setText("Не удалось загрузить файл: " + filePath);
    }
}

void LessonWidget::onBackButtonClicked() {
    emit backButtonClicked();
}

LessonWidget::~LessonWidget() {
    delete ui;
}
