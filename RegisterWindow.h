#ifndef REGISTERWINDOW_H
#define REGISTERWINDOW_H

#include <QWidget>

namespace Ui {
class RegisterWindow;
}

class RegisterWindow : public QWidget
{
    Q_OBJECT

public:
    explicit RegisterWindow(QWidget *parent = nullptr);
    ~RegisterWindow();

signals:
    void registrationSuccessful();

private slots:
    void on_registerButton_clicked();

private:
    Ui::RegisterWindow *ui;

    QString generateSalt(int length = 16); // Добавь объявление
    QString hashPasswordWithSalt(const QString &password, const QString &salt); // Добавь объявление

};

#endif // REGISTERWINDOW_H
