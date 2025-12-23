#ifndef FORMADDARCHIVES_H
#define FORMADDARCHIVES_H

#include <QWidget>

namespace Ui {
class FormAddArchives;
}

class FormAddArchives : public QWidget
{
    Q_OBJECT

public:
    explicit FormAddArchives(QWidget *parent = nullptr);
    ~FormAddArchives();

private:
    Ui::FormAddArchives *ui;
};

#endif // FORMADDARCHIVES_H
