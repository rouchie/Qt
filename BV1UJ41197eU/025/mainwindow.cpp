#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_pStatusMsg = new QLabel(tr("www.rouchie.com"));
    m_pStatusProgress = new QProgressBar;

    ui->statusbar->addPermanentWidget(m_pStatusMsg);
    ui->statusbar->addPermanentWidget(m_pStatusProgress, 1);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actiondo_something_triggered()
{
    ui->statusbar->showMessage("hello");
    m_pStatusMsg->setText("hello, bilibili");
}
