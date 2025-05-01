#ifndef THEORY_H
#define THEORY_H

#include <QMap>
#include <QPushButton>
#include <QWidget>


namespace Ui {
class Theory;
}

class Theory : public QWidget {
    Q_OBJECT

    QMap<QPushButton*, int> lessons{};

public:
    explicit Theory(QWidget *parent = nullptr);
    ~Theory();

private:
    void loadLessons();

private slots:
    void handleButtonClicked();
    void openMenu();

private:
    Ui::Theory *ui;
};

#endif // THEORY_H
