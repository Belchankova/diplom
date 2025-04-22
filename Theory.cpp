#include "Theory.h"
#include "ui_Theory.h"
#include <QFile>
#include <QIODevice>

Theory::Theory(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Theory)
{ui->setupUi(this);
    connect(ui->TheoryHistButton, &QPushButton::clicked, this, &Theory::handleButtonClicked);
    connect(ui->TheoryGipoButton, &QPushButton::clicked, this, &Theory::handleButtonClicked);
    connect(ui->TheoryGiperButton, &QPushButton::clicked, this, &Theory::handleButtonClicked);

}

Theory::~Theory()
{
    delete ui;
}
void Theory::loadTheory(const QString &filePath)
{
    QFile file(filePath);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        QString content = in.readAll();
        ui->textBrowser->setHtml(content);  // <<< Вот здесь используется textBrowser
        file.close();
    } else {
        ui->textBrowser->setText("Не удалось загрузить файл: " + filePath);
    }
}
void Theory::handleButtonClicked()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if (!button) return;

    QString filePath;
    if (button == ui->TheoryHistButton)
        filePath = ":/new/prefix2/TextHist.html";
    else if (button == ui->TheoryGipoButton)
        filePath = ":/new/prefix2/TextGipo.html";
    else if (button == ui->TheoryGiperButton)
        filePath = ":/new/prefix2/TextGiper.html";

    loadTheory(filePath);
}
