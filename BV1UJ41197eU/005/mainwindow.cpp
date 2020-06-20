#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->plainTextEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionNew_Window_triggered()
{
    qDebug() << "new window";

#if 0
    Dialog dialog;
    dialog.exec();
#else
    m_pDialog = new Dialog(this);
    m_pDialog->show();
#endif
}
