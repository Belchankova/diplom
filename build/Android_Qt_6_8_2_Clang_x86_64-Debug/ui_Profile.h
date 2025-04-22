/********************************************************************************
** Form generated from reading UI file 'Profile.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILE_H
#define UI_PROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Profile
{
public:
    QLabel *label;

    void setupUi(QWidget *Profile)
    {
        if (Profile->objectName().isEmpty())
            Profile->setObjectName("Profile");
        Profile->resize(400, 300);
        label = new QLabel(Profile);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 160, 66, 18));

        retranslateUi(Profile);

        QMetaObject::connectSlotsByName(Profile);
    } // setupUi

    void retranslateUi(QWidget *Profile)
    {
        Profile->setWindowTitle(QCoreApplication::translate("Profile", "Form", nullptr));
        label->setText(QCoreApplication::translate("Profile", "\320\237\321\200\320\276\321\204\320\270\320\273\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Profile: public Ui_Profile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILE_H
