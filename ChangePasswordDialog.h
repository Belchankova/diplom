#ifndef CHANGEPASSWORDDIALOG_H
#define CHANGEPASSWORDDIALOG_H

#include <QDialog>

namespace Ui {
class ChangePasswordDialog;
}

class ChangePasswordDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ChangePasswordDialog(const QString &username, QWidget *parent = nullptr);
    ~ChangePasswordDialog();

private slots:
    void on_changeButton_clicked();

private:
    Ui::ChangePasswordDialog *ui;
    QString currentUsername;

    QString hashPasswordWithSalt(const QString &password, const QString &salt);
    bool verifyPassword(const QString &password, const QString &storedHash);
    bool isPasswordStrong(const QString &password);
};

#endif // CHANGEPASSWORDDIALOG_H

