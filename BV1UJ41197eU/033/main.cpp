#include <QCoreApplication>
#include <QDebug>

#include "mythread.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyThread t1("thread one"), t2("thread two"), t3("thread thr");
    t1.start();
    t1.wait();
    t2.start();
    t2.wait();
    t3.start();
    t3.wait();

    qDebug() << "Done..";

    return a.exec();
}
