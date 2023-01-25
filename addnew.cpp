#include "addnew.h"
#include "ui_addnew.h"

Addnew::Addnew(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Addnew)
{
    ui->setupUi(this);
}

Addnew::~Addnew()
{
    delete ui;
}

void Addnew::on_pushButton_clicked()
{
    close();
}
