#include <QCoreApplication>
#include <QList>
#include <QLinkedList>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

#if 0 //036
    QList<int> list;

    for (int i=0; i<10; i++) {
        list.append(i);
    }

    foreach(int i, list) {
        qDebug() << "Now: " << i;
    }
#endif

#if 0 //037
    QList<int> list;

    for (int i=0; i<10; i++) {
        list.append(i);
    }

    QListIterator<int> iter(list);

    while(iter.hasNext()) {
        qDebug() << "Now: " << iter.next();
    }

    iter.toBack();
    while(iter.hasPrevious()) {
        qDebug() << "Now: " << iter.previous();
        if (iter.hasPrevious()) {
            qDebug() << "next: " << iter.peekPrevious();
        }
    }
#endif

#if 0 //038
    QList<int> list;

    for (int i=0; i<10; i++) {
        list.append(i);
    }

    QMutableListIterator<int> iter(list);

    while(iter.hasNext()) {

        int i = iter.next();
        if (5 == i) {
            iter.remove();
            continue;
        }
        qDebug() << "Now: " << iter.value();
    }

    iter.toFront();
    while(iter.hasNext()) {
        qDebug() << "Now: " << iter.next();
    }

#endif

#if 1 //039
    QLinkedList<int> list;

    for (int i=0; i<10; i++) {
        list.append(i);
    }

    foreach (int i, list) {
        qDebug() << "Now: " << i;
    }

#endif

    return a.exec();
}
