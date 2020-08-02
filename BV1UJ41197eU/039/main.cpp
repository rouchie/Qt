#include <QCoreApplication>
#include <QMap>
#include <QHash>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

#if 0 //040
    QMap<int, QString> employees;
    employees.insert(1, "You");
    employees.insert(2, "His");
    employees.insert(3, "She");
    employees.insert(4, "Me");

    foreach (int i, employees.keys()) {
        qDebug() << "Now: " << employees[i];
    }

    QMapIterator<int, QString> iter(employees);

    while (iter.hasNext()) {
        iter.next();
        qDebug() << "Now: " << iter.key() << " | " << iter.value();
    }
#endif

#if 0 //041
    QHash<int, QString> employees;
    employees.insert(1, "You");
    employees.insert(2, "His");
    employees.insert(3, "She");
    employees.insert(4, "Me");

    foreach (int i, employees.keys()) {
        qDebug() << "Now: " << employees[i];
    }

    QHashIterator<int, QString> iter(employees);

    while (iter.hasNext()) {
        iter.next();
        qDebug() << "Now: " << iter.key() << " | " << iter.value();
    }
#endif

#if 1 //042
    QStringList list;

    QString str = "a, b, c, d, e";

    list = str.split(",");
    list.replaceInStrings("b", "bababa");
    qDebug() << list.join(",");

#endif

    return a.exec();
}
