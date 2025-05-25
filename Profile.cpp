#include "Profile.h"
#include "ui_Profile.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QCryptographicHash>

Profile::Profile(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Profile)
{
    ui->setupUi(this);
    ui->passwordLineEdit->setEchoMode(QLineEdit::Password);
}

Profile::~Profile()
{
    delete ui;
}

void Profile::setUsername(const QString &username)
{
    currentUsername = username;
    ui->usernameLabel->setText("Логин: " + username);
    ui->passwordLineEdit->setText("********");
}

void Profile::on_changePasswordButton_clicked()
{
    QString newPassword = ui->passwordLineEdit->text().trimmed();

    if (newPassword.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Введите новый пароль.");
        return;
    }

    QSqlDatabase db = QSqlDatabase::database("UserConnection");
    QSqlQuery query(db);
    query.prepare("UPDATE users SET password_hash = :hash WHERE username = :username");
    query.bindValue(":hash", hashPassword(newPassword));
    query.bindValue(":username", currentUsername);

    if (query.exec()) {
        QMessageBox::information(this, "Успех", "Пароль успешно изменён.");
        ui->passwordLineEdit->setText("********");
    } else {
        QMessageBox::critical(this, "Ошибка", "Не удалось изменить пароль.");
    }
}

QString Profile::hashPassword(const QString &password)
{
    QByteArray hash = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256);
    return QString(hash.toHex());
}
