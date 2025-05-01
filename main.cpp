#include <QApplication>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QStandardPaths>
#include <QDir>
#include <QSqlError>
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
    qDebug() << "Ошибка создания базе данных:" << db.lastError().text();
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    connectToDatabase();
    MainWindow w;
    w.setMinimumSize(480, 640);
    w.show();
    return a.exec();
}
