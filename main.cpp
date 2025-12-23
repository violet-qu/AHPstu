#include "widget.h"

#include <QApplication>
#include <formarchives.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FormArchives w;
    w.show();
    return a.exec();
}
