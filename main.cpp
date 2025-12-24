#include "sidebarwidget.h"
#include "widget.h"

#include <FormAddArchives.h>
#include <QApplication>
#include <formarchives.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //FormAddArchives w;
    //FormArchives w;
    //SidebarWidget w;
    Widget w;
    w.show();
    return a.exec();
}
