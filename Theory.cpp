#include "Theory.h"
#include "ui_Theory.h"

#include <QFile>
#include <QIODevice>

#include "lessonwidget.h"


Theory::Theory(QWidget *parent) : QWidget(parent), ui(new Ui::Theory) {
    ui->setupUi(this);

    loadLessons();
}

Theory::~Theory() {
    delete ui;
}

void Theory::loadLessons() {
    auto histPage = new LessonWidget(":/new/prefix2/TextHist.html");
    connect(histPage, &LessonWidget::backButtonClicked, this, &Theory::openMenu); // обработка нажатия кнопки назад в окне урока
    ui->stackedWidget->addWidget(histPage);
    lessons.insert(ui->TheoryHistButton, ui->stackedWidget->count() - 1);
    connect(ui->TheoryHistButton, &QPushButton::clicked, this, &Theory::handleButtonClicked);

    auto gipoPage = new LessonWidget(":/new/prefix2/TextGipo.html");
    connect(gipoPage, &LessonWidget::backButtonClicked, this, &Theory::openMenu); // обработка нажатия кнопки назад в окне урока
    ui->stackedWidget->addWidget(gipoPage);
    lessons.insert(ui->TheoryGipoButton, ui->stackedWidget->count() - 1);
    connect(ui->TheoryGipoButton, &QPushButton::clicked, this, &Theory::handleButtonClicked);

    auto giperPage = new LessonWidget(":/new/prefix2/TextGiper.html");
    connect(giperPage, &LessonWidget::backButtonClicked, this, &Theory::openMenu); // обработка нажатия кнопки назад в окне урока
    ui->stackedWidget->addWidget(giperPage);
    lessons.insert(ui->TheoryGiperButton, ui->stackedWidget->count() - 1);
    connect(ui->TheoryGiperButton, &QPushButton::clicked, this, &Theory::handleButtonClicked);

    auto xePage = new LessonWidget(":/new/prefix2/TextXE.html");
    connect(xePage, &LessonWidget::backButtonClicked, this, &Theory::openMenu); // обработка нажатия кнопки назад в окне урока
    ui->stackedWidget->addWidget(xePage);
    lessons.insert(ui->TheoryXEButton, ui->stackedWidget->count() - 1);
    connect(ui->TheoryXEButton, &QPushButton::clicked, this, &Theory::handleButtonClicked);

    auto glazaPage = new LessonWidget(":/new/prefix2/TextGlaza.html");
    connect(glazaPage, &LessonWidget::backButtonClicked, this, &Theory::openMenu); // обработка нажатия кнопки назад в окне урока
    ui->stackedWidget->addWidget(glazaPage);
    lessons.insert(ui->TheoryGlazaButton, ui->stackedWidget->count() - 1);
    connect(ui->TheoryGlazaButton, &QPushButton::clicked, this, &Theory::handleButtonClicked);

    auto sportPage = new LessonWidget(":/new/prefix2/TextSport.html");
    connect(sportPage, &LessonWidget::backButtonClicked, this, &Theory::openMenu); // обработка нажатия кнопки назад в окне урока
    ui->stackedWidget->addWidget(sportPage);
    lessons.insert(ui->TheorySportButton, ui->stackedWidget->count() - 1);
    connect(ui->TheorySportButton, &QPushButton::clicked, this, &Theory::handleButtonClicked);
}

void Theory::handleButtonClicked() {
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if (!button) return;

    for (auto [key, value] : lessons.asKeyValueRange()) {
        if (button == key) {
            ui->stackedWidget->setCurrentIndex(value);
            break;
        }
    }
}

void Theory::openMenu() {
    ui->stackedWidget->setCurrentIndex(0);
}
