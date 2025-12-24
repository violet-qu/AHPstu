/********************************************************************************
** Form generated from reading UI file 'sidebarwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIDEBARWIDGET_H
#define UI_SIDEBARWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLayout>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DrawerSidebar
{
public:
    QToolBox *m_toolBox;
    QWidget *page;

    void setupUi(QWidget *DrawerSidebar)
    {
        if (DrawerSidebar->objectName().isEmpty())
            DrawerSidebar->setObjectName("DrawerSidebar");
        DrawerSidebar->resize(883, 605);
        m_toolBox = new QToolBox(DrawerSidebar);
        m_toolBox->setObjectName("m_toolBox");
        m_toolBox->setGeometry(QRect(20, 120, 251, 371));
        page = new QWidget();
        page->setObjectName("page");
        page->setGeometry(QRect(0, 0, 251, 337));
        m_toolBox->addItem(page, QString::fromUtf8("Page 1"));

        retranslateUi(DrawerSidebar);

        m_toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DrawerSidebar);
    } // setupUi

    void retranslateUi(QWidget *DrawerSidebar)
    {
        DrawerSidebar->setWindowTitle(QCoreApplication::translate("DrawerSidebar", "Form", nullptr));
        m_toolBox->setItemText(m_toolBox->indexOf(page), QCoreApplication::translate("DrawerSidebar", "Page 1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DrawerSidebar: public Ui_DrawerSidebar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIDEBARWIDGET_H
