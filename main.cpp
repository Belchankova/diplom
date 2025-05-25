#include <QApplication>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QStandardPaths>
#include <QDir>
#include <QSqlError>
#include "LoginWindow.h"
#include "mainwindow.h"

void connectToDatabase() {

    QString appDirPath = QCoreApplication::applicationDirPath();
    QDir dir(appDirPath);
    if (!dir.exists()) {
        dir.mkpath(appDirPath);
    }

    QString dbPath = appDirPath + "/diary.db";
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(dbPath);

    if (!db.open()) {
        qDebug() << "Ошибка подключения к базе данных:" << db.lastError().text();
        return;
    }

    QSqlQuery query;
    query.exec("CREATE TABLE IF NOT EXISTS diary_entries ("
               "id INTEGER PRIMARY KEY AUTOINCREMENT, "
               "sugar INTEGER, "
               "he INTEGER, "
               "insulin INTEGER, "
               "food TEXT, "
               "created_at DATETIME DEFAULT CURRENT_TIMESTAMP)");
    qDebug() << "Ошибка создания базы данных:" << db.lastError().text();
}
void connectUserDatabase() {
    QSqlDatabase userDb = QSqlDatabase::addDatabase("QSQLITE", "UserConnection");
    QString userDbPath = QCoreApplication::applicationDirPath() + "/users.db";
    userDb.setDatabaseName(userDbPath);

    if (!userDb.open()) {
        qDebug() << "Ошибка открытия БД пользователей:" << userDb.lastError().text();
        return;
    }

    QSqlQuery query(userDb);
    query.exec("CREATE TABLE IF NOT EXISTS users ("
               "id INTEGER PRIMARY KEY AUTOINCREMENT, "
               "username TEXT UNIQUE, "
               "password_hash TEXT)");
}


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    connectToDatabase();
     connectUserDatabase();
    LoginWindow login;
    login.show();
    return a.exec();
}
