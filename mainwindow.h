#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMap>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


class MainWindow : public QMainWindow
{
    Q_OBJECT

    QMap<QPushButton*, int> appPages{};

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    explicit MainWindow(const QString &username, QWidget *parent = nullptr);


private:
    Ui::MainWindow *ui;

private slots:
    void onOpenPage();
};
#endif // MAINWINDOW_H
