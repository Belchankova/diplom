/********************************************************************************
** Form generated from reading UI file 'page1.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE1_H
#define UI_PAGE1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Page1
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QWidget *Page1)
    {
        if (Page1->objectName().isEmpty())
            Page1->setObjectName("Page1");
        Page1->resize(400, 300);
        verticalLayout = new QVBoxLayout(Page1);
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(Page1);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        label = new QLabel(Page1);
        label->setObjectName("label");

        verticalLayout->addWidget(label);


        retranslateUi(Page1);

        QMetaObject::connectSlotsByName(Page1);
    } // setupUi

    void retranslateUi(QWidget *Page1)
    {
        Page1->setWindowTitle(QCoreApplication::translate("Page1", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("Page1", "\320\241\320\242\320\240\320\220\320\235\320\230\320\246\320\220 1", nullptr));
        label->setText(QCoreApplication::translate("Page1", "\320\255\321\202\320\276 \321\201\321\202\321\200\320\260\320\275\320\270\321\206\320\260 1 \320\275\320\260 \320\272\320\276\321\202\320\276\321\200\320\276\320\271 \320\261\321\203\320\264\321\203\321\202 \321\200\320\260\320\267\320\274\320\265\321\211\320\260\321\202\321\214\321\201\321\217 \320\262\321\201\320\265 \320\265\321\221 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Page1: public Ui_Page1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE1_H
