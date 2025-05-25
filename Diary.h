#ifndef DIARY_H
#define DIARY_H

#include <QWidget>

namespace Ui {
class Diary;
}

class Diary : public QWidget
{
    Q_OBJECT

public:
    explicit Diary(QWidget *parent = nullptr);
    ~Diary();

private slots:
    void saveEntry();

signals:
    void entrySaved();


private:
    Ui::Diary *ui;
};

#endif // DIARY_H
