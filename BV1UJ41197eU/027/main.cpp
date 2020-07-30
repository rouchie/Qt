#include <QCoreApplication>

#include "mytimer.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyTimer t;

    return a.exec();
}
