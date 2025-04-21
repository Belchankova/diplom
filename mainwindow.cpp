#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "Diary.h"
#include "History.h"
#include "Theory.h"
#include "Profile.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // add page 1
    auto p1 = new Diary();
    ui->stackedWidget->addWidget(p1);
    appPages.insert(ui->openDiaryButton, appPages.size());

    auto p2 = new History();
    ui->stackedWidget->addWidget(p2);
    appPages.insert(ui->openHistoryButton, appPages.size());

    auto p3 = new Theory();
    ui->stackedWidget->addWidget(p3);
    appPages.insert(ui->openTheoryButton, appPages.size());

    auto p4 = new Profile();
    ui->stackedWidget->addWidget(p4);
    appPages.insert(ui->openProfileButton, appPages.size());

    connect(ui->openDiaryButton, &QPushButton::clicked, this, &MainWindow::onOpenPage);
    connect(ui->openHistoryButton, &QPushButton::clicked, this, &MainWindow::onOpenPage);
     connect(ui->openTheoryButton, &QPushButton::clicked, this, &MainWindow::onOpenPage);
     connect(ui->openProfileButton, &QPushButton::clicked, this, &MainWindow::onOpenPage);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onOpenPage() {
    auto btn = reinterpret_cast<QPushButton*>(sender());

    for (auto [key, value] : appPages.asKeyValueRange()) {
        if (btn == key) {
            ui->stackedWidget->setCurrentIndex(value);
            break;
        }
    }
}

