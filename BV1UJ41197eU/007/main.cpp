#include <QApplication>
#include <QLabel>

int main(int ac, char **av)
{
    QApplication app(ac, av);
    QLabel *label = new QLabel("<h2><b>Hello</b> <font color=red><i>world</i></font></h2>");

    label->show();

    return app.exec();
}
