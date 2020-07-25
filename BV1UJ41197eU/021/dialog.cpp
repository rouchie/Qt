#include "dialog.h"
#include "ui_dialog.h"

void Dialog::addRoot(QString strName, QString strDesc)
{
    QTreeWidgetItem *pItm = new QTreeWidgetItem(ui->treeWidget);
    pItm->setText(0, strName);
    pItm->setText(1, strDesc);
    //ui->treeWidget->addTopLevelItem(pItm);
    addChild(pItm, "one", "bibi");
    addChild(pItm, "two", "lili");
}

void Dialog::addChild(QTreeWidgetItem *parent, QString strName, QString strDesc)
{
    QTreeWidgetItem *pItm = new QTreeWidgetItem(parent);
    pItm->setText(0, strName);
    pItm->setText(1, strDesc);
}

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    ui->treeWidget->setColumnCount(2);
    ui->treeWidget->setHeaderLabels(QStringList() << "i" << "like" << "you" << "maybe.");
    addRoot("hello1", "bilibili");
    addRoot("hello2", "bilibili");
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    ui->treeWidget->currentItem()->setBackgroundColor(0, Qt::red);
    ui->treeWidget->currentItem()->setBackgroundColor(1, Qt::blue);
}
