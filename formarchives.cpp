#include "formarchives.h"
#include "ui_formarchives.h"
#include <QSqlDatabase>

FormArchives::FormArchives(QWidget *parent): QWidget(parent) , ui(new Ui::FormArchives)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("E://graduation_project//Archivesdata.db"); // 数据库文件名（或完整路径）
    if (!db.open()) {
        qDebug() << "Error: Failed to open database:" << db.lastError().text();
        return;
    }
    QueryStuId("22041325");
}
FormArchives::~FormArchives()
{
    delete ui;
}

void FormArchives::QueryStuId(const QString& number)
{
    QSqlQuery query;
    QString num_str = "'" + number + "'";
    if (query.exec("SELECT * FROM stu WHERE 学号=" + num_str)) {
        if(query.next()) {
            qDebug() << "yes";
            for(int i=1;i<=18;i++)
            {
                // 构造对象名
                QString sourceName = QString("label_%1").arg(i);
                QString targetName = QString("label_%1").arg(i + 18);
                //qDebug() << sourceName;
                //qDebug() <<targetName;
                // 查找源标签和目标标签
                QLabel *sourceLabel = this->findChild<QLabel*>(sourceName);
                QLabel *targetLabel = this->findChild<QLabel*>(targetName);
                QString query_str = sourceLabel->text();
                while(query_str[0]==' ') query_str=query_str.right(query_str.length() - 1);
                query_str=query_str.left(query_str.length() - 1);
                QString query_ans = query.value(query_str).toString();
                targetLabel->setText(query_ans);
                qDebug() <<query_str<<":";
                qDebug() <<query_ans;
            }
        }
    } else {
        qDebug() << "Query error:" << query.lastError().text();
    }
}
