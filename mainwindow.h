#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTabWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_diaryButton_clicked();

    void on_historyButton_clicked();

    void on_teoryButton_clicked();

    void on_profileButton_clicked();



    void on_teoryHistButton_clicked();

    void on_teoryHEButton_clicked();

    void on_teoryGipoButton_clicked();

    void on_teoryGiperButton_clicked();

    void on_teoryZrenieButton_clicked();

    void on_teorySportButton_clicked();

    void on_histBackButton_clicked();

    void on_heBackButton_clicked();

    void on_gipoBackButton_clicked();

    void on_giperBackButton_clicked();

    void on_zrenieBackButton_clicked();

    void on_sportBackButton_clicked();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
