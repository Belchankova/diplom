#include "Diary.h"
#include "ui_Diary.h"

Diary::Diary(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Diary)
{
    ui->setupUi(this);
}

Diary::~Diary()
{
    delete ui;
}
