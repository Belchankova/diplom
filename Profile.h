#ifndef PROFILE_H
#define PROFILE_H

#include <QWidget>

namespace Ui {
class Profile;
}

class Profile : public QWidget
{
    Q_OBJECT

public:
    explicit Profile(QWidget *parent = nullptr);
    ~Profile();

    void setUsername(const QString &username); // Устанавливаем логин

private slots:
    void on_changePasswordButton_clicked(); // Обработка смены пароля

private:
    Ui::Profile *ui;
    QString currentUsername;
};

#endif // PROFILE_H


