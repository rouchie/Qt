#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString mStr = "hello bilibili";
    qDebug() << mStr;

    return a.exec();
}
