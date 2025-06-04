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
    QString hashPassword(const QString &password);
};

#endif // REGISTERWINDOW_H
