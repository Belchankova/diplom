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

    // Получение user_id по username
    QString username = LoginWindow::currentUsername();
    QSqlQuery userQuery;
    userQuery.prepare("SELECT id FROM users WHERE username = :username");
    userQuery.bindValue(":username", username);
    if (!userQuery.exec() || !userQuery.next()) {
        QMessageBox::critical(this, "Ошибка", "Не удалось получить ID пользователя.");
        return;
    }
    int userId = userQuery.value(0).toInt();

    QDateTime timestamp = QDateTime::currentDateTime();

    QSqlQuery query;
    query.prepare("INSERT INTO diary_entries (created_at, sugar, he, insulin, food, user_id) "
                  "VALUES (:created_at, :sugar, :he, :insulin, :food, :user_id)");
    query.bindValue(":created_at", timestamp.toString(Qt::ISODate));
    query.bindValue(":sugar", sugar);
    query.bindValue(":he", he);
    query.bindValue(":insulin", insulin);
    query.bindValue(":food", food);
    query.bindValue(":user_id", userId);

    if (!query.exec()) {
        QMessageBox::critical(this, "Ошибка", "Не удалось сохранить запись.");
        qDebug() << "SQL Error:" << query.lastError().text();
    } else {
        QMessageBox::information(this, "Успех", "Запись сохранена.");
        ui->sugar->clear();
        ui->he->clear();
        ui->insulin->clear();
        ui->food->clear();
        emit entrySaved();
    }
}

