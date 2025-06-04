#include <QApplication>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QStandardPaths>
#include <QDir>
#include <QSqlError>
#include "LoginWindow.h"

void connectToDatabase() {
    QString dbPath = QCoreApplication::applicationDirPath() + "/app.db";

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(dbPath);

    if (!db.open()) {
        qDebug() << "Ошибка подключения к базе данных:" << db.lastError().text();
        return;
    }

    QSqlQuery query;

    // Создание таблицы пользователей
    if (!query.exec(
            "CREATE TABLE IF NOT EXISTS users ("
            "id INTEGER PRIMARY KEY AUTOINCREMENT, "
            "username TEXT UNIQUE, "
            "password_hash TEXT)")) {
        qDebug() << "Ошибка создания таблицы users:" << query.lastError().text();
    }



    // Создание таблицы записей
    if (!query.exec(
            "CREATE TABLE IF NOT EXISTS diary_entries ("
            "id INTEGER PRIMARY KEY AUTOINCREMENT, "
            "sugar REAL, "
            "he REAL, "
            "insulin REAL, "
            "food TEXT, "
            "created_at DATETIME DEFAULT CURRENT_TIMESTAMP, "
            "user_id INTEGER, "
            "FOREIGN KEY(user_id) REFERENCES users(id))")) {
        qDebug() << "Ошибка создания таблицы diary_entries:" << query.lastError().text();
    }
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    connectToDatabase();

    LoginWindow login;
    login.show();

    return a.exec();
}
