#include "mytimer.h"
#include <QDebug>

MyTimer::MyTimer()
{
    m_timer = new QTimer(this);
    connect(m_timer, &QTimer::timeout, this, &MyTimer::Myslot);

    m_timer->start(1000);
}

void MyTimer::Myslot()
{
    qDebug() << "Timer executed";
}
