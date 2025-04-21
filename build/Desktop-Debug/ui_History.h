/********************************************************************************
** Form generated from reading UI file 'History.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORY_H
#define UI_HISTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_History
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;

    void setupUi(QWidget *History)
    {
        if (History->objectName().isEmpty())
            History->setObjectName("History");
        History->resize(400, 300);
        verticalLayout = new QVBoxLayout(History);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(History);
        label->setObjectName("label");

        verticalLayout->addWidget(label);


        retranslateUi(History);

        QMetaObject::connectSlotsByName(History);
    } // setupUi

    void retranslateUi(QWidget *History)
    {
        History->setWindowTitle(QCoreApplication::translate("History", "Form", nullptr));
        label->setText(QCoreApplication::translate("History", "\320\241\320\242\320\240\320\220\320\235\320\230\320\246\320\220 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class History: public Ui_History {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORY_H
