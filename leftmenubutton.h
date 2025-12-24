#ifndef LEFTMENUBUTTON_H
#define LEFTMENUBUTTON_H

#include <QWidget>

namespace Ui {
class LeftMenuButton;
}

class LeftMenuButton : public QWidget
{
    Q_OBJECT

public:
    explicit LeftMenuButton(QWidget *parent = nullptr);
    ~LeftMenuButton();

private:
    Ui::LeftMenuButton *ui;
};

#endif // LEFTMENUBUTTON_H
