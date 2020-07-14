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
    if (ui->radioButton->isChecked()) {
        QMessageBox::information(this, "Title", ui->radioButton->text(), QMessageBox::Ok);
    }

    if (ui->radioButton_2->isChecked()) {
        QMessageBox::information(this, "Title", ui->radioButton_2->text(), QMessageBox::Ok);
    }
}
