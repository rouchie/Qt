#ifndef MYTIMER_H
#define MYTIMER_H

#include <QTimer>

class MyTimer : public QObject
{
    Q_OBJECT

public:
    MyTimer();
    QTimer *m_timer;

public slots:
    void Myslot();
};

#endif // MYTIMER_H
