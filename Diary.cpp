#include "Diary.h"
#include "ui_Diary.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>

    Diary::Diary(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Diary)
{
    ui->setupUi(this);

    connect(ui->save, &QPushButton::clicked, this, &Diary::saveEntry);

    QSqlQuery query("SELECT sugar, he, insulin, food FROM diary_entries ORDER BY created_at DESC LIMIT 1");
    if (query.next()) {
        ui->sugar->setPlainText(query.value(0).toString());
        ui->he->setPlainText(query.value(1).toString());
        ui->insulin->setPlainText(query.value(2).toString());
        ui->food->setPlainText(query.value(3).toString());
    }
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

    QSqlQuery query;
    query.prepare("INSERT INTO diary_entries (sugar, he, insulin, food) "
                  "VALUES (:sugar, :he, :insulin, :food)");
    query.bindValue(":sugar", sugar);
    query.bindValue(":he", he);
    query.bindValue(":insulin", insulin);
    query.bindValue(":food", food);

    if (!query.exec()) {
        QMessageBox::critical(this, "Ошибка", "Не удалось сохранить запись.");
        qDebug() << "SQL Error:" << query.lastError().text();
    } else {
        QMessageBox::information(this, "Успех", "Запись сохранена.");
        ui->sugar->clear();
        ui->he->clear();
        ui->insulin->clear();
        ui->food->clear();
    }
}
