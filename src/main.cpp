#include "MainWindow.h"

#include <QApplication>

#include "src/Widgets/StyleWidget.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
