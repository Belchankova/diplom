/********************************************************************************
** Form generated from reading UI file 'ChangePasswordDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASSWORDDIALOG_H
#define UI_CHANGEPASSWORDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChangePasswordDialog
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *oldPasswordLineEdit;
    QLineEdit *newPasswordLineEdit;
    QLineEdit *confirmPasswordLineEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *changeButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *ChangePasswordDialog)
    {
        if (ChangePasswordDialog->objectName().isEmpty())
            ChangePasswordDialog->setObjectName("ChangePasswordDialog");
        ChangePasswordDialog->resize(391, 400);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ChangePasswordDialog->sizePolicy().hasHeightForWidth());
        ChangePasswordDialog->setSizePolicy(sizePolicy);
        ChangePasswordDialog->setMinimumSize(QSize(300, 0));
        ChangePasswordDialog->setMaximumSize(QSize(16777215, 400));
        ChangePasswordDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(113, 121, 171);"));
        widget = new QWidget(ChangePasswordDialog);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(41, 81, 302, 168));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        oldPasswordLineEdit = new QLineEdit(widget);
        oldPasswordLineEdit->setObjectName("oldPasswordLineEdit");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(oldPasswordLineEdit->sizePolicy().hasHeightForWidth());
        oldPasswordLineEdit->setSizePolicy(sizePolicy1);
        oldPasswordLineEdit->setMinimumSize(QSize(300, 40));
        oldPasswordLineEdit->setMaximumSize(QSize(16777215, 40));
        oldPasswordLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 10px;"));

        verticalLayout->addWidget(oldPasswordLineEdit);

        newPasswordLineEdit = new QLineEdit(widget);
        newPasswordLineEdit->setObjectName("newPasswordLineEdit");
        sizePolicy1.setHeightForWidth(newPasswordLineEdit->sizePolicy().hasHeightForWidth());
        newPasswordLineEdit->setSizePolicy(sizePolicy1);
        newPasswordLineEdit->setMinimumSize(QSize(300, 40));
        newPasswordLineEdit->setMaximumSize(QSize(16777215, 40));
        newPasswordLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 10px;"));

        verticalLayout->addWidget(newPasswordLineEdit);

        confirmPasswordLineEdit = new QLineEdit(widget);
        confirmPasswordLineEdit->setObjectName("confirmPasswordLineEdit");
        sizePolicy1.setHeightForWidth(confirmPasswordLineEdit->sizePolicy().hasHeightForWidth());
        confirmPasswordLineEdit->setSizePolicy(sizePolicy1);
        confirmPasswordLineEdit->setMinimumSize(QSize(300, 40));
        confirmPasswordLineEdit->setMaximumSize(QSize(16777215, 40));
        confirmPasswordLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 10px;"));

        verticalLayout->addWidget(confirmPasswordLineEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        changeButton = new QPushButton(widget);
        changeButton->setObjectName("changeButton");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(changeButton->sizePolicy().hasHeightForWidth());
        changeButton->setSizePolicy(sizePolicy2);
        changeButton->setStyleSheet(QString::fromUtf8("QPushButton{ background-color: rgb(230, 226, 254);\n"
"color: black;}"));

        horizontalLayout->addWidget(changeButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ChangePasswordDialog);

        QMetaObject::connectSlotsByName(ChangePasswordDialog);
    } // setupUi

    void retranslateUi(QWidget *ChangePasswordDialog)
    {
        ChangePasswordDialog->setWindowTitle(QCoreApplication::translate("ChangePasswordDialog", "\320\241\320\274\320\265\320\275\320\270\321\202\321\214 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        oldPasswordLineEdit->setPlaceholderText(QCoreApplication::translate("ChangePasswordDialog", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\201\321\202\320\260\321\200\321\213\320\271 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        newPasswordLineEdit->setPlaceholderText(QCoreApplication::translate("ChangePasswordDialog", "\320\237\321\200\320\270\320\264\321\203\320\274\320\260\320\271\321\202\320\265 \320\275\320\276\320\262\321\213\320\271 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        confirmPasswordLineEdit->setPlaceholderText(QCoreApplication::translate("ChangePasswordDialog", "\320\237\320\276\320\262\321\202\320\276\321\200\320\270\321\202\320\265 \320\275\320\276\320\262\321\213\320\271 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        changeButton->setText(QCoreApplication::translate("ChangePasswordDialog", "\320\241\320\274\320\265\320\275\320\270\321\202\321\214 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangePasswordDialog: public Ui_ChangePasswordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASSWORDDIALOG_H
