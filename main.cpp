#include "mainwindow.h"
#include "menu.h"
#include "seleccion.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Menu w;
    w.show();

    return a.exec();
}
