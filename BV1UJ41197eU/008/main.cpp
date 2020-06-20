#include <QApplication>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>

int main(int ac, char **av)
{
    QApplication app(ac, av);

    QWidget *window = new QWidget;
    window->setWindowTitle("My App");

    QPushButton *button1 = new QPushButton("one");
    QPushButton *button2 = new QPushButton("two");
    QPushButton *button3 = new QPushButton("three");

//    QHBoxLayout *hLayout = new QHBoxLayout;
    QVBoxLayout *vLayout = new QVBoxLayout;

    vLayout->addWidget(button1);
    vLayout->addWidget(button2);
    vLayout->addWidget(button3);

    window->setLayout(vLayout);
    window->show();

    return app.exec();
}
