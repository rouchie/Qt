#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QLabel>
#include <QProgressBar>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actiondo_something_triggered();

private:
    Ui::MainWindow *ui;

    QLabel *m_pStatusMsg;
    QProgressBar *m_pStatusProgress;
};
#endif // MAINWINDOW_H
