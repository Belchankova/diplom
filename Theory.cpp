#include "Theory.h"
#include "ui_Theory.h"

Theory::Theory(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Theory)
{
    ui->setupUi(this);
}

Theory::~Theory()
{
    delete ui;
}
