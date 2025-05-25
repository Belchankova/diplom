#include "LoginWindow.h"
#include "ui_LoginWindow.h"
#include "mainwindow.h"
#include "RegisterWindow.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QCryptographicHash>
#include <QMessageBox>


QString LoginWindow::currentUsername() {
    return m_currentUsername;
}
QString LoginWindow::m_currentUsername;


LoginWindow::LoginWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);

    connect(ui->vhod, &QPushButton::clicked, this, &LoginWindow::on_vhod_clicked);
    connect(ui->registerButton, &QPushButton::clicked, this, &LoginWindow::on_registerButton_clicked);


}

LoginWindow::~LoginWindow()
{
    delete ui;
}

// SHA-256 хэширование пароля
QString LoginWindow::hashPassword(const QString &password)
{
    QByteArray hash = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256);
    return QString(hash.toHex());
}

// Войти
void LoginWindow::on_vhod_clicked()
{
    QString username = ui->login->toPlainText().trimmed();
    QString password = ui->password->text().trimmed();

    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Введите логин и пароль.");
        return;
    }

    QSqlDatabase db = QSqlDatabase::database("UserConnection");
    QSqlQuery query(db);
    query.prepare("SELECT password_hash FROM users WHERE username = :username");
    query.bindValue(":username", username);

    if (!query.exec()) {
        QMessageBox::critical(this, "Ошибка", "Ошибка подключения к базе данных.");
        return;
    }

    if (query.next()) {
        QString storedHash = query.value(0).toString();

        if (storedHash == hashPassword(password)) {
            m_currentUsername = username;

            if (!mainWin) {
                mainWin = new MainWindow(username);
                mainWin->setAttribute(Qt::WA_DeleteOnClose);
                connect(mainWin, &QObject::destroyed, this, [=]() {
                    mainWin = nullptr;
                });
                mainWin->setMinimumSize(480, 640);
                mainWin->show();
                this->close();
            }
        } else {
            QMessageBox::warning(this, "Ошибка", "Неверный пароль.");
        }
    } else {
        QMessageBox::warning(this, "Ошибка", "Пользователь не найден.");
    }
}


void LoginWindow::on_registerButton_clicked()
{
    if (regWin && regWin->isVisible()) {
        regWin->raise();
        regWin->activateWindow();
        return;
    }

    regWin = new RegisterWindow();
    regWin->setAttribute(Qt::WA_DeleteOnClose);
    regWin->show();

    this->hide();

    connect(regWin, &RegisterWindow::registrationSuccessful, this, [=]() {
        this->show();
        regWin->close();
    });

    connect(regWin, &QObject::destroyed, this, [=]() {
        regWin = nullptr;
    });
}



