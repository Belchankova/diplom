
#include "ChangePasswordDialog.h"
#include "ui_ChangePasswordDialog.h"
#include <QSqlQuery>
#include <QMessageBox>
#include <QCryptographicHash>
#include <QRegularExpression>
#include <QRandomGenerator>

ChangePasswordDialog::ChangePasswordDialog(const QString &username, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChangePasswordDialog),
    currentUsername(username)
{
    ui->setupUi(this);

    ui->oldPasswordLineEdit->setEchoMode(QLineEdit::Password);
    ui->newPasswordLineEdit->setEchoMode(QLineEdit::Password);
    ui->confirmPasswordLineEdit->setEchoMode(QLineEdit::Password);
}

ChangePasswordDialog::~ChangePasswordDialog()
{
    delete ui;
}

bool ChangePasswordDialog::isPasswordStrong(const QString &password)
{
    if (password.length() < 8)
        return false;
    if (!password.contains(QRegularExpression("[a-z]")))
        return false;
    if (!password.contains(QRegularExpression("[A-Z]")))
        return false;
    return true;
}

QString ChangePasswordDialog::hashPasswordWithSalt(const QString &password, const QString &salt)
{
    QByteArray salted = (salt + password).toUtf8();
    QByteArray hash = QCryptographicHash::hash(salted, QCryptographicHash::Sha256);
    return QString(hash.toHex());
}

bool ChangePasswordDialog::verifyPassword(const QString &password, const QString &storedHash)
{
    QStringList parts = storedHash.split(':');
    if (parts.size() != 2)
        return false;
    QString salt = parts[0];
    QString hash = parts[1];
    QString hashedInput = hashPasswordWithSalt(password, salt);
    return (hashedInput == hash);
}

void ChangePasswordDialog::on_changeButton_clicked()
{
    QString oldPassword = ui->oldPasswordLineEdit->text().trimmed();
    QString newPassword = ui->newPasswordLineEdit->text().trimmed();
    QString confirmPassword = ui->confirmPasswordLineEdit->text().trimmed();

    if (oldPassword.isEmpty() || newPassword.isEmpty() || confirmPassword.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Заполните все поля.");
        return;
    }

    if (newPassword != confirmPassword) {
        QMessageBox::warning(this, "Ошибка", "Новый пароль и подтверждение не совпадают.");
        return;
    }

    if (!isPasswordStrong(newPassword)) {
        QMessageBox::warning(this, "Слабый пароль", "Пароль должен быть не менее 8 символов, содержать строчные и заглавные буквы.");
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT password_hash FROM users WHERE username = :username");
    query.bindValue(":username", currentUsername);

    if (!query.exec() || !query.next()) {
        QMessageBox::critical(this, "Ошибка", "Пользователь не найден.");
        return;
    }

    QString storedHash = query.value(0).toString();

    if (!verifyPassword(oldPassword, storedHash)) {
        QMessageBox::warning(this, "Ошибка", "Старый пароль неверен.");
        return;
    }

    QString salt;
    const QString possibleCharacters("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789");
    for (int i = 0; i < 16; ++i) {
        int index = QRandomGenerator::global()->bounded(possibleCharacters.length());
        salt.append(possibleCharacters.at(index));
    }
    QString newHash = hashPasswordWithSalt(newPassword, salt);
    QString fullHash = salt + ":" + newHash;

    query.prepare("UPDATE users SET password_hash = :hash WHERE username = :username");
    query.bindValue(":hash", fullHash);
    query.bindValue(":username", currentUsername);

    if (!query.exec()) {
        QMessageBox::critical(this, "Ошибка", "Не удалось изменить пароль.");
        return;
    }

    QMessageBox::information(this, "Успех", "Пароль успешно изменён.");
    accept(); // Закрыть диалог с успехом
}
