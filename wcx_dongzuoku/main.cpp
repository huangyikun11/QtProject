#include "mainwindow.h"
#include <QApplication>
#include "dongzuoku.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    dongzuoku d;
    d.show();

    return a.exec();
}
