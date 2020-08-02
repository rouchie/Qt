#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>

class MyThread : public QThread
{
    Q_OBJECT

public:
    MyThread();
    MyThread(QString name);

    virtual void run() override;
private:
    QString m_strName;
};

#endif // MYTHREAD_H
