#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QTabBar>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tabWidget->tabBar()->hide();
    ui->tabWidget_2->tabBar()->hide();
    ui->tabWidget->setCurrentIndex(0);
    ui->tabWidget_2->setCurrentIndex(0);
    //connect(ui->teoryButton,&QPushButton::clicked,this,&MainWindow::on_pushButton_clicked);

}

 MainWindow::~MainWindow()
{
    delete ui;
}

//кнопочки перехода по разделам

void MainWindow::on_diaryButton_clicked()
{
    ui->tabWidget->setCurrentIndex(0);
}


void MainWindow::on_historyButton_clicked()
{
    ui->tabWidget->setCurrentIndex(1);
}


void MainWindow::on_teoryButton_clicked()
{
    ui->tabWidget->setCurrentIndex(2);
}


void MainWindow::on_profileButton_clicked()
{
    ui->tabWidget->setCurrentIndex(3);
}


//кнопки перехода к теории
void MainWindow::on_teoryHistButton_clicked()
{
   ui->tabWidget_2->setCurrentIndex(1);
}


void MainWindow::on_teoryHEButton_clicked()
{
  ui->tabWidget_2->setCurrentIndex(2);
}


void MainWindow::on_teoryGipoButton_clicked()
{
    ui->tabWidget_2->setCurrentIndex(3);
}


void MainWindow::on_teoryGiperButton_clicked()
{
    ui->tabWidget_2->setCurrentIndex(4);
}


void MainWindow::on_teoryZrenieButton_clicked()
{
    ui->tabWidget_2->setCurrentIndex(5);
}


void MainWindow::on_teorySportButton_clicked()
{
    ui->tabWidget_2->setCurrentIndex(6);
}

//кнопки назад
void MainWindow::on_histBackButton_clicked()
{
    ui->tabWidget_2->setCurrentIndex(0);
}


void MainWindow::on_heBackButton_clicked()
{
    ui->tabWidget_2->setCurrentIndex(0);
}


void MainWindow::on_gipoBackButton_clicked()
{
    ui->tabWidget_2->setCurrentIndex(0);
}


void MainWindow::on_giperBackButton_clicked()
{
    ui->tabWidget_2->setCurrentIndex(0);
}


void MainWindow::on_zrenieBackButton_clicked()
{
    ui->tabWidget_2->setCurrentIndex(0);
}


void MainWindow::on_sportBackButton_clicked()
{
    ui->tabWidget_2->setCurrentIndex(0);
}

