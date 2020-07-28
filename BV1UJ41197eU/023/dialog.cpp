#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    connect(ui->horizontalSlider, &QSlider::valueChanged, ui->horizontalScrollBar, &QScrollBar::setValue);
    connect(ui->horizontalSlider, &QSlider::valueChanged, ui->progressBar, &QProgressBar::setValue);
    ui->horizontalSlider->setValue(0);
}

Dialog::~Dialog()
{
    delete ui;
}

