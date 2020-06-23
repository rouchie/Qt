#include <QCoreApplication>
#include <QFile>
#include <QTextStream>
#include <QDebug>

void Write(QString Filename)
{
    QFile mFile(Filename);

    if (!mFile.open(QFile::WriteOnly | QFile::Text)) {
        qDebug() << "could not open file for write";
        return ;
    }

    QTextStream out(&mFile);
    out << "Hello, bilibili";

    mFile.flush();
    mFile.close();
}

void Read(QString Filename)
{
    QFile mFile(Filename);

    if (!mFile.open(QFile::ReadOnly | QFile::Text)) {
        qDebug() << "could not open file for read";
        return ;
    }

    QTextStream in(&mFile);
    QString  s = in.readAll();

    qDebug() << s;

    mFile.close();
}

int main(int ac, char **av)
{
    QCoreApplication app(ac, av);

    Write("a.bd");
    Read("a.bd");

    return app.exec();
}
