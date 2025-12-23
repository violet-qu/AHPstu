#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent): QWidget(parent), ui(new Ui::Widget)
{
    ui->setupUi(this);
    //setWindowFlag(Qt::FramelessWindowHint); // 无标题栏, 拖动功能会被ban掉, 需手写mouseXXXEvent

}
Widget::~Widget()
{
    delete ui;
}
