#include "calcclass.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CalcClass * w = new CalcClass;
    w->show();

    return a.exec();
}
