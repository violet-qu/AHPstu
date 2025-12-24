/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QFrame *frame;
    QWidget *leftwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(1360, 722);
        frame = new QFrame(Widget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 1361, 121));
        frame->setStyleSheet(QString::fromUtf8("background-image: url(:/images/bk1.jpg);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        leftwidget = new QWidget(Widget);
        leftwidget->setObjectName("leftwidget");
        leftwidget->setGeometry(QRect(0, 119, 291, 601));
        leftwidget->setStyleSheet(QString::fromUtf8("background-image: url(:/images/bk1.jpg);"));
        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(290, 120, 1071, 601));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page = new QWidget();
        page->setObjectName("page");
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);

        retranslateUi(Widget);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
