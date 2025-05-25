#include "Diary.h"
#include "ui_Diary.h"
#include "LoginWindow.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>
#include <QDateTime>

    Diary::Diary(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Diary)
{
    ui->setupUi(this);

    connect(ui->save, &QPushButton::clicked, this, &Diary::saveEntry);


}

Diary::~Diary()
{
    delete ui;
}

void Diary::saveEntry()
{
    double sugar = ui->sugar->toPlainText().toDouble();
    double he = ui->he->toPlainText().toDouble();
    double insulin = ui->insulin->toPlainText().toDouble();
    QString food = ui->food->toPlainText();
    QString timestamp = QDateTime::currentDateTime().toString(Qt::ISODate);

    QSqlQuery query;
    query.prepare("INSERT INTO diary_entries (created_at, sugar, he, insulin, food, username) "
                  "VALUES (:created_at, :sugar, :he, :insulin, :food, :username)");
    query.bindValue(":created_at", timestamp);
    query.bindValue(":sugar", sugar);
    query.bindValue(":he", he);
    query.bindValue(":insulin", insulin);
    query.bindValue(":food", food);
    query.bindValue(":username", LoginWindow::currentUsername());

    bool success = query.exec();

    if (!success) {
        QMessageBox::critical(this, "Упс...", "Не удалось сохранить запись.");
        qDebug() << "SQL Error:" << query.lastError().text();
    } else {
        QMessageBox::information(this, "Классно!", "Запись сохранена.");
        ui->sugar->clear();
        ui->he->clear();
        ui->insulin->clear();
        ui->food->clear();
        emit entrySaved();
    }
}

