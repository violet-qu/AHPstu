#include "customtoolbox.h"
#include <QStyleOption>
#include <QApplication>

CustomToolBox::CustomToolBox(QWidget *parent)
    : QToolBox(parent)
{
    setupStylesheet();
}

void CustomToolBox::setupStylesheet()
{
    setStyleSheet(
        "QToolBox {"
        "    border: none;"
        "    background-color: #ffffff;"
        "}"
        "QToolBox::tab {"
        "    background: #ffffff;"
        "    border: 1px solid #eaeaea;"
        "    border-radius: 4px;"
        "    padding: 12px 15px;"
        "    margin: 0;"
        "    color: #333333;"
        "    font-family: 'Microsoft YaHei';"
        "    font-size: 14px;"
        "    min-height: 40px;"
        "}"
        "QToolBox::tab:selected {"
        "    background: #e6f7ff;"
        "    color: #1890ff;"
        "    font-weight: bold;"
        "    border-color: #1890ff;"
        "}"
        "QToolBox::tab:hover {"
        "    background: #f0f5ff;"
        "    color: #1890ff;"
        "}"
        "QToolBox::arrow {"
        "    width: 16px;"
        "    height: 16px;"
        "    background: none;"
        "}"
        "QToolBox::arrow:down {"
        "    image: url(:/icons/arrow-down.png);"
        "}"
        "QToolBox::arrow:up {"
        "    image: url(:/icons/arrow-right.png);"
        "}"
        );
}
