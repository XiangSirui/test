#include "dialog.h"
#include "ui_dialog.h"
#include "addnew.h"
#include "about.h"
#include "history.h"
//主界面窗口设置
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

void Dialog::on_pushButton_3_toggled(bool checked)
{

    if(checked)
    {
         ui->pushButton_3->setText(tr("显示"));
         ui->frame->hide();
    }
    else
    {
        ui->pushButton_3->setText(tr("最小化"));
        ui->frame->show();
    }
}


void Dialog::on_radioButton_clicked()
{
    ui->radioButton->close();
    ui->label_2->close();
}

void Dialog::on_pushButton_4_clicked()
{
    history *a =new history;
    a->show();
}
