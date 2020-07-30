#include "dialog.h"
#include "ui_dialog.h"
#include <QMessageBox>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    QMessageBox::information(this, "Title here", "Text here");
}

void Dialog::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Title here", "Do you like cats?", QMessageBox::Yes|QMessageBox::No);

    if (QMessageBox::Yes == reply) {
        QMessageBox::information(this, "Title here", "You like cats.");
    } else if (QMessageBox::No == reply) {
        QMessageBox::information(this, "Title here", "You don't like cats.");
    }
}

void Dialog::on_pushButton_3_clicked()
{
    QMessageBox::warning(this, "Title here", "Text here");
}

void Dialog::on_pushButton_4_clicked()
{
    QMessageBox::question(this, "Title here", "Text here", QMessageBox::YesToAll | QMessageBox::Yes | QMessageBox::No | QMessageBox::NoToAll);
}
