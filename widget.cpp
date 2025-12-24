#include "widget.h"
#include "ui_widget.h"
#include "leftmenubutton.h"
#include "sidebarwidget.h"

#include "UniversityPushButton.h"
#include <qlabel.h>

Widget::Widget(QWidget *parent): QWidget(parent), ui(new Ui::Widget)
{
    ui->setupUi(this);
    //setWindowFlag(Qt::FramelessWindowHint); // 无标题栏, 拖动功能会被ban掉, 需手写mouseXXXEvent
    //Database_Init();
    // 创建主布局
    QVBoxLayout *mainLayout = new QVBoxLayout(ui->leftwidget);
    SidebarWidget*  _toolBox = new SidebarWidget();
    mainLayout->addWidget(_toolBox);
}
Widget::~Widget()
{

    delete ui;
}

void Widget::Database_Init()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("E://graduation_project//Archivesdata.db"); // 数据库文件名（或完整路径）
    if (!db.open()) {
        qDebug() << "Error: Failed to open database:" << db.lastError().text();
        return;
    }
}
