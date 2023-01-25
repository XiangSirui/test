#include "dialog.h"
#include "ui_dialog.h"
#include "addnew.h"
#include "about.h"
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
    Addnew *a= new Addnew;
    a->show();
}

void Dialog::on_pushButton_2_clicked()
{
    About *about= new About;
    about->show();
}
