#include "dialog.h"
#include "ui_dialog.h"
#include <QMessageBox>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->checkBox->setChecked(true);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    if (ui->checkBox->isChecked()) {
        QMessageBox::information(this, "Women", "You like women");
    } else {
        QMessageBox::information(this, "Women", "You don't like women");
    }
}
