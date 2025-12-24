#include "leftmenubutton.h"
#include "ui_leftmenubutton.h"

LeftMenuButton::LeftMenuButton(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LeftMenuButton)
{
    ui->setupUi(this);
}

LeftMenuButton::~LeftMenuButton()
{
    delete ui;
}
