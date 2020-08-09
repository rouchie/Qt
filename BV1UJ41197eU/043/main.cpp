#include <QCoreApplication>
#include <QDebug>
#include <QList>
#include <QStringList>
#include <QVector>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

#if 0    //043
    QList<int> l;

    l << 1 << 0 << 10086 << 10;

    for(int i : l) {
        qDebug() << i;
    }

    //qSort(l);
    //std::sort(l.begin(), l.end());
    //qSort(l.begin(), l.end());
    std::sort(l.begin()+1, l.end()-1);

    for (int i : l) {
        qDebug() << "Now: " << i;
    }
#endif

#if 0   //044
    QStringList l;
    l << "a" << "b" << "c";

    QVector<QString> v(3);
    //qCopy(l.begin(), l.end(), v.begin());
    //std::copy(l.begin(), l.end(), v.begin());
    std::copy(l.begin()+1, l.end(), v.begin());

    for (QString i : v) {
        qDebug() << "Now: " << i;
    }

#endif

#if 0   //045
    QVector<QString> v(5);

    for (QString i : v) {
        qDebug() << "Now: " << i;
    }

    //qFill(v.begin() + 1, v.end(), "hello world");
    std::fill(v.begin(), v.begin()+2, "no hello");

    for (QString i : v) {
        qDebug() << "Now: " << i;
    }

#endif

#if 1   //046
    QList<int> l;

    l << 1 << 3  << 7;

    //auto iter = qFind(l.begin(), l.end(), 8);
    auto iter = std::find(l.begin(), l.end(), 8);
    if (l.end() != iter)
        qDebug() << "iter: " << *iter;
    else
        qDebug() << "not found";
#endif


    return a.exec();
}
