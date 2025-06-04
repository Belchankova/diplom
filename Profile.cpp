#include "Profile.h"
#include "ui_Profile.h"
#include "ChangePasswordDialog.h"

Profile::Profile(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Profile)
{
    ui->setupUi(this);
}

Profile::~Profile()
{
    delete ui;
}

void Profile::setUsername(const QString &username)
{
    currentUsername = username;
    ui->usernameLabel->setText("Логин: " + username);
}

void Profile::on_changePasswordButton_clicked()
{
    ChangePasswordDialog dlg(currentUsername, this);
    dlg.exec();  // Открываем отдельное окно смены пароля
}

