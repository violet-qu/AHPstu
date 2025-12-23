#include "formaddarchives.h"
#include "ui_formaddarchives.h"

FormAddArchives::FormAddArchives(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormAddArchives)
{
    ui->setupUi(this);
}

FormAddArchives::~FormAddArchives()
{
    delete ui;
}
