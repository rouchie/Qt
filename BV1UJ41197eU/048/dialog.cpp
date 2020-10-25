#include "dialog.h"
#include "ui_dialog.h"
#include <QInputDialog>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    m_pDirModel = new QDirModel(this);

    m_pDirModel->setReadOnly(false);
    m_pDirModel->setSorting(QDir::DirsFirst | QDir::IgnoreCase | QDir::Name);
    ui->treeView->setModel(m_pDirModel);

    QModelIndex id = m_pDirModel->index("F:/");

    ui->treeView->expand(id);
    ui->treeView->scrollTo(id);
    ui->treeView->setCurrentIndex(id);
    ui->treeView->resizeColumnToContents(0);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    QModelIndex id = ui->treeView->currentIndex();
    if (id.isValid() == false) return;

    QString name = QInputDialog::getText(this, "Name", "Enter");
    if (name.isEmpty()) return;
    m_pDirModel->mkdir(id, name);
}

void Dialog::on_pushButton_2_clicked()
{
    QModelIndex id = ui->treeView->currentIndex();
    if (id.isValid() == false) return;

    if (m_pDirModel->fileInfo(id).isDir()) {
        m_pDirModel->rmdir(id);
    } else {
        m_pDirModel->remove(id);
    }
}
