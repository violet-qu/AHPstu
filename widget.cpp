#include "widget.h"
#include "ui_widget.h"
#include "sidebarwidget.h"
#include "UniversityPushButton.h"
#include "formaddarchives.h"
#include "formarchives.h"
#include <qlabel.h>

Widget::Widget(QWidget *parent): QWidget(parent), ui(new Ui::Widget)
{
    ui->setupUi(this);
    //setWindowFlag(Qt::FramelessWindowHint); // 无标题栏, 拖动功能会被ban掉, 需手写mouseXXXEvent
    //Database_Init();
    QVBoxLayout *mainLayout = new QVBoxLayout(ui->leftwidget);
    SidebarWidget*  _toolBox = new SidebarWidget();
    mainLayout->addWidget(_toolBox);
    /*
    while (ui->stackedWidget->count() > 0) {
        ui->stackedWidget->removeWidget(ui->stackedWidget->widget(0));
    }
    */
    FormAddArchives* formaddarchives = new FormAddArchives();
    FormArchives* formarchives = new FormArchives();
    ui->stackedWidget->addWidget(formaddarchives);
    ui->stackedWidget->addWidget(formarchives);
    connect(_toolBox->m_btnQuery, &QPushButton::clicked, this, &Widget::onArchiveQueryClicked);
    //connect(_toolBox->m_btnDelete, &QPushButton::clicked, this, &Widget::onArchiveDeleteClicked);
    //connect(_toolBox->m_btnModify, &QPushButton::clicked, this, &Widget::onArchiveModifyClicked);
    connect(_toolBox->m_btnAdd, &QPushButton::clicked, this, &Widget::onArchiveAddClicked);
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

void Widget::onArchiveQueryClicked()
{
     ui->stackedWidget->setCurrentIndex(3);
}

void Widget::onArchiveDeleteClicked()
{

}

void Widget::onArchiveModifyClicked()
{

}

void Widget::onArchiveAddClicked()
{
   ui->stackedWidget->setCurrentIndex(2);
}
