#include "RegisterWindow.h"
#include "ui_RegisterWindow.h"
#include <QCryptographicHash>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>
#include <QRegularExpression>

RegisterWindow::RegisterWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RegisterWindow)
{
    ui->setupUi(this);
}

RegisterWindow::~RegisterWindow()
{
    delete ui;
}

void RegisterWindow::on_registerButton_clicked()
{
    QString username = ui->loginRegister->toPlainText().trimmed();
    QString password = ui->passwordRegister->toPlainText().trimmed();
    QString confirmPassword = ui->confirmPasswordRegister->text().trimmed();

    if (username.isEmpty() || password.isEmpty() || confirmPassword.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Заполните все поля.");
        return;
    }

    if (password != confirmPassword) {
        QMessageBox::warning(this, "Ошибка", "Пароли не совпадают.");
        return;
    }

    // Проверка надёжности пароля
    if (password.length() < 8 ||
        !password.contains(QRegularExpression("[a-z]")) ||
        !password.contains(QRegularExpression("[A-Z]"))) {
        QMessageBox::warning(this, "Слабый пароль", "Пароль должен быть не менее 8 символов, содержать строчные и заглавные буквы.");
        return;
    }

    QString hash = hashPassword(password);

    QSqlDatabase db = QSqlDatabase::database("UserConnection");
    if (!db.isOpen()) {
        QMessageBox::critical(this, "Ошибка", "Не удалось подключиться к базе данных.");
        return;
    }

    QSqlQuery query(db);
    query.prepare("INSERT INTO users (username, password_hash) VALUES (:username, :password_hash)");
    query.bindValue(":username", username);
    query.bindValue(":password_hash", hash);

    if (!query.exec()) {
        QMessageBox::critical(this, "Ошибка", "Имя пользователя уже занято.");
        qDebug() << query.lastError().text();
        return;
    }

    QMessageBox::information(this, "Успех", "Регистрация прошла успешно.");
    emit registrationSuccessful();
    close();
}


QString RegisterWindow::hashPassword(const QString &password)
{
    QByteArray hash = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256);
    return QString(hash.toHex());
}
