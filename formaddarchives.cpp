#include "formaddarchives.h"
#include "ui_formaddarchives.h"
#include <QMessageBox>
class Widget;
FormAddArchives::FormAddArchives(QWidget *parent): QWidget(parent), ui(new Ui::FormAddArchives)
{
    ui->setupUi(this);
    connect(ui->addbutton,&QPushButton::clicked,this,&FormAddArchives::InsertStuId);
    connect(ui->clearbutton,&QPushButton::clicked,this,&FormAddArchives::ClearAll);
    Database_Init();
}
FormAddArchives::~FormAddArchives()
{
    delete ui;
}
void FormAddArchives::InsertStuId()
{
    QSqlQuery query;
    QString Query_String = "INSERT INTO stu ";
    QString String_pre = "(";
    for(int i=1;i<=18;i++)
    {
        // 构造对象名
        QString sourceName = QString("label_%1").arg(i);
        // 查找源标签和目标标签
        QLabel *sourceLabel = this->findChild<QLabel*>(sourceName);
        QString query_str = sourceLabel->text();
        while(query_str[0]==' ') query_str=query_str.right(query_str.length() - 1);
        query_str=query_str.left(query_str.length() - 1);
        if(i<18) String_pre += query_str+",";
        else String_pre += query_str + ")";
        QString targetName = QString("lineEdit_%1").arg(i);
        QLineEdit *targetEdit = this->findChild<QLineEdit*>(targetName);
        QString insert_str = targetEdit->text();
        if(insert_str=="")  //如果存在没有填的数据,就不能插入完成
        {
            QMessageBox::warning(this, "失败", "插入失败:存在未输入的信息");
            return ;
        }
        qDebug() << insert_str;
    }
    Query_String = Query_String + String_pre + "VALUES (?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?)";
    qDebug() << Query_String;
    query.prepare(Query_String);
    for(int i=1;i<=18;i++)
    {
        QString targetName = QString("lineEdit_%1").arg(i);
        QLineEdit *targetEdit = this->findChild<QLineEdit*>(targetName);
        query.bindValue(i-1, targetEdit->text().trimmed());
        qDebug()<<targetEdit->text();
    }
    if (!query.exec()) {
        QMessageBox::warning(this, "失败", "插入失败:\n" + query.lastError().text());
    } else {
        QMessageBox::information(this, "成功", "数据已保存！");
        // 可选：清空输入框
    }
}

void FormAddArchives::ClearAll()
{
    for(int i=1;i<=18;i++)
    {
        QString targetName = QString("lineEdit_%1").arg(i);
        QLineEdit *targetEdit = this->findChild<QLineEdit*>(targetName);
        targetEdit->clear();
    }
}
void FormAddArchives::Database_Init()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("E://graduation_project//Archivesdata.db"); // 数据库文件名（或完整路径）
    if (!db.open()) {
        qDebug() << "Error: Failed to open database:" << db.lastError().text();
        return;
    }
    qDebug() <<"hello ";
}
