#ifndef FORMARCHIVES_H
#define FORMARCHIVES_H

#include <QWidget>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlTableModel>
namespace Ui {
class FormArchives;
}

class FormArchives : public QWidget
{
    Q_OBJECT

public:
    explicit FormArchives(QWidget *parent = nullptr);
    void QueryStuId(const QString& number);
    ~FormArchives();

private:
    Ui::FormArchives *ui;
    QSqlDatabase db;
    std::vector<QString> str_vec;
};

#endif // FORMARCHIVES_H
