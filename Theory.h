#ifndef THEORY_H
#define THEORY_H


#include <QWidget>

namespace Ui {
class Theory;
}

class Theory : public QWidget
{
    Q_OBJECT

public:
    explicit Theory(QWidget *parent = nullptr);
    ~Theory();

private:
    Ui::Theory *ui;
};

#endif // THEORY_H
