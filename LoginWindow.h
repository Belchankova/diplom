#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H


#include <QWidget>
#include "RegisterWindow.h"
#include "mainwindow.h"
namespace Ui {
class LoginWindow;
}

class LoginWindow : public QWidget
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();
    static QString currentUsername();



private slots:
    void on_vhod_clicked();            // Войти
    void on_registerButton_clicked();  // Перейти к регистрации
    void on_pokazatButton_clicked();




private:
    Ui::LoginWindow *ui;
    QString hashPassword(const QString &password);
    RegisterWindow *regWin = nullptr;
    MainWindow *mainWin = nullptr;
    static QString m_currentUsername;
    bool passwordVisible = false;


};

#endif // LOGINWINDOW_H
