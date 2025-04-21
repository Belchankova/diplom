/********************************************************************************
** Form generated from reading UI file 'page2.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE2_H
#define UI_PAGE2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Page2
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;

    void setupUi(QWidget *Page2)
    {
        if (Page2->objectName().isEmpty())
            Page2->setObjectName("Page2");
        Page2->resize(400, 300);
        verticalLayout = new QVBoxLayout(Page2);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(Page2);
        label->setObjectName("label");

        verticalLayout->addWidget(label);


        retranslateUi(Page2);

        QMetaObject::connectSlotsByName(Page2);
    } // setupUi

    void retranslateUi(QWidget *Page2)
    {
        Page2->setWindowTitle(QCoreApplication::translate("Page2", "Form", nullptr));
        label->setText(QCoreApplication::translate("Page2", "\320\241\320\242\320\240\320\220\320\235\320\230\320\246\320\220 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Page2: public Ui_Page2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE2_H
