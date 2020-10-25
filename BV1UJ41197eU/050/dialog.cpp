#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    model = new QStandardItemModel(4, 2, this);

    for (int row = 0; row < 4; row++) {
        for (int col = 0; col < 2; col++) {
            QModelIndex id = model->index(row, col, QModelIndex());
            if (row == 3)
                model->setData(id, 0);
            else
                model->setData(id, QString("Hello"));
        }
    }

    ui->tableView->setModel(model);
}

Dialog::~Dialog()
{
    delete ui;
}

