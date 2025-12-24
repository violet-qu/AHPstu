#ifndef FORMARCHIVES_H
#define FORMARCHIVES_H

#include <QWidget>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlTableModel>
#include <QSqlDatabase>
namespace Ui {
class FormArchives;
}
class Widget;
class FormArchives : public QWidget
{
    Q_OBJECT

public:
    explicit FormArchives(QWidget *parent = nullptr);
    void QueryStuId(const QString& number);
    ~FormArchives();
    QSqlDatabase db;
    void Database_Init();
private:
    Ui::FormArchives *ui;


};

#endif // FORMARCHIVES_H
