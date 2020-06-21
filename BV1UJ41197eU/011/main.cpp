#include <QCoreApplication>
#include <QDir>
#include <QDebug>
#include <QFileInfo>

int main(int ac, char **av)
{
    QCoreApplication app(ac, av);

    QDir mDir("E:/abc");

    qDebug() << mDir.exists();

    foreach (QFileInfo mItm, mDir.drives()) {
        qDebug() << mItm.absoluteFilePath();
    }

    QString mPath = "E:/abc/def/higklllm";
    if (!mDir.exists(mPath)) {
        mDir.mkpath(mPath);
        qDebug() << "Created";
    } else {
        qDebug() << "Aleardy exists";
    }

    foreach (QFileInfo mItm, mDir.entryInfoList()) {
        if (mItm.isDir()) {
            qDebug() << "Dir: " <<mItm.absoluteFilePath();
        } else if (mItm.isFile()) {
            qDebug() << "File: " <<mItm.absoluteFilePath();
        }
    }

    return app.exec();
}
