#include "mythread.h"
#include <QDebug>

MyThread::MyThread()
{

}

MyThread::MyThread(QString name)
{
    m_strName = name;
}

void MyThread::run()
{
    qDebug() << this->m_strName;

    for (int i=0; i<10086; i++) {
        qDebug() << this->m_strName << ": " << i;
    }
}
