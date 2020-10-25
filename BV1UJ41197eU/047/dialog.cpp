#include "dialog.h"
#include "ui_dialog.h"
#include <QDebug>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    m_pModel = new QStringListModel(this);

    QStringList l;
    l << "cats" << "dogs" << "birds";

    m_pModel->setStringList(l);
    qDebug() << m_pModel->stringList();
    qDebug() << "www.rouchie.com";

    ui->listView->setModel(m_pModel);
    ui->comboBox->setModel(m_pModel);

    ui->listView->setEditTriggers(QAbstractItemView::AnyKeyPressed | QAbstractItemView::DoubleClicked);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    int s32Row = m_pModel->rowCount();

    m_pModel->insertRows(s32Row, 1);
    QModelIndex index = m_pModel->index(s32Row);
    ui->listView->setCurrentIndex(index);
    ui->listView->edit(index);
}

void Dialog::on_pushButton_2_clicked()
{
    int s32Row = ui->listView->currentIndex().row();

    m_pModel->insertRows(s32Row, 1);
    QModelIndex index = m_pModel->index(s32Row);
    ui->listView->setCurrentIndex(index);
    ui->listView->edit(index);
}

void Dialog::on_pushButton_3_clicked()
{
    m_pModel->removeRows(ui->listView->currentIndex().row(), 1);
}
