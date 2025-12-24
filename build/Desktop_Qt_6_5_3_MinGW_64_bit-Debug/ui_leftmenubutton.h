/********************************************************************************
** Form generated from reading UI file 'leftmenubutton.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEFTMENUBUTTON_H
#define UI_LEFTMENUBUTTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "universitypushbutton.h"

QT_BEGIN_NAMESPACE

class Ui_LeftMenuButton
{
public:
    QPushButton *pushButton;
    UniversityPushButton *pushButton_2;
    UniversityPushButton *pushButton_3;
    UniversityPushButton *pushButton_4;

    void setupUi(QWidget *LeftMenuButton)
    {
        if (LeftMenuButton->objectName().isEmpty())
            LeftMenuButton->setObjectName("LeftMenuButton");
        LeftMenuButton->resize(201, 280);
        LeftMenuButton->setStyleSheet(QString::fromUtf8("background-color: rgb(254, 254, 254);"));
        pushButton = new QPushButton(LeftMenuButton);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 0, 201, 71));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: white;\n"
"    color: #333333;\n"
"    border-radius: 0px;\n"
"    padding: 8px 24px;\n"
"    font-family: \"Microsoft YaHei\", sans-serif;\n"
"    font-size: 16px;\n"
"    font-weight: 500;\n"
"    border: none;\n"
"    cursor: pointer;\n"
"}\n"
"\n"
"QPushButton:hover, QPushButton:pressed {\n"
"    background-color: #1890ff;\n"
"    color: white;\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"    border: none;\n"
"    outline: none;\n"
"}"));
        pushButton_2 = new UniversityPushButton(LeftMenuButton);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(0, 70, 201, 71));
        pushButton_3 = new UniversityPushButton(LeftMenuButton);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(0, 140, 201, 71));
        pushButton_4 = new UniversityPushButton(LeftMenuButton);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(0, 210, 201, 71));

        retranslateUi(LeftMenuButton);

        QMetaObject::connectSlotsByName(LeftMenuButton);
    } // setupUi

    void retranslateUi(QWidget *LeftMenuButton)
    {
        LeftMenuButton->setWindowTitle(QCoreApplication::translate("LeftMenuButton", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("LeftMenuButton", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("LeftMenuButton", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("LeftMenuButton", "3", nullptr));
        pushButton_4->setText(QCoreApplication::translate("LeftMenuButton", "4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LeftMenuButton: public Ui_LeftMenuButton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEFTMENUBUTTON_H
