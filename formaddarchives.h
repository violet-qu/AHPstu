#ifndef FORMADDARCHIVES_H
#define FORMADDARCHIVES_H

#include <QWidget>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlTableModel>
#include <QSqlDatabase>
namespace Ui {
class FormAddArchives;
}
class Widget;
class FormAddArchives : public QWidget
{
    Q_OBJECT

public:
    explicit FormAddArchives(QWidget *parent = nullptr);
    ~FormAddArchives();

    QSqlDatabase db;
    void Database_Init();

private slots:
    void InsertStuId();
    void ClearAll();
private:
    Ui::FormAddArchives *ui;
};

#endif // FORMADDARCHIVES_H
