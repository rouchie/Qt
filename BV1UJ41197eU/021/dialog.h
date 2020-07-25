#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QTreeWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

    void addRoot(QString strName, QString strDesc);
    void addChild(QTreeWidgetItem *parent, QString strName, QString strDesc);

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialog *ui;
};
#endif // DIALOG_H
