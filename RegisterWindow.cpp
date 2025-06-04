#include "RegisterWindow.h"
#include "ui_RegisterWindow.h"
#include <QCryptographicHash>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>
#include <QRegularExpression>
#include <QRandomGenerator>

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
    QString username = ui->loginRegister->text().trimmed();
    QString password = ui->passwordRegister->text().trimmed();
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

    QString salt = generateSalt();
    QString hash = hashPasswordWithSalt(password, salt);
    QString fullHash = salt + ":" + hash;



    QSqlDatabase db = QSqlDatabase::database();
    if (!db.isOpen()) {
        QMessageBox::critical(this, "Ошибка", "Не удалось подключиться к базе данных.");
        return;
    }

    QSqlQuery query(db);
    query.prepare("INSERT INTO users (username, password_hash) VALUES (:username, :password_hash)");
    query.bindValue(":username", username);
    query.bindValue(":password_hash", fullHash);



    if (!query.exec()) {
        QMessageBox::critical(this, "Ошибка", "Имя пользователя уже занято.");
        qDebug() << query.lastError().text();
        return;
    }

    QMessageBox::information(this, "Успех", "Регистрация прошла успешно.");
    emit registrationSuccessful();
    close();
}

QString RegisterWindow::generateSalt(int length) {
    const QString possibleCharacters("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789");
    QString salt;
    for (int i = 0; i < length; ++i) {
        int index = QRandomGenerator::global()->bounded(possibleCharacters.length());
        salt.append(possibleCharacters.at(index));
    }
    return salt;
}

QString RegisterWindow::hashPasswordWithSalt(const QString &password, const QString &salt) {
    QByteArray salted = (salt + password).toUtf8();
    QByteArray hash = QCryptographicHash::hash(salted, QCryptographicHash::Sha256);
    return QString(hash.toHex());
}
