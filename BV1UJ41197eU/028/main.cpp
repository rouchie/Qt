#include <QCoreApplication>

#include "mythread.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyThread t1("thread one"), t2("thread two");
    t1.start();
    t2.start();

    return a.exec();
}
