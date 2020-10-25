#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->pushButton->setToolTip("hello, tooltip");
    ui->pushButton_2->setWhatsThis("hello, what this");
}

Dialog::~Dialog()
{
    delete ui;
}

