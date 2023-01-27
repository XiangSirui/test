#include "dialog.h"
#include "ui_dialog.h"
#include "addnew.h"
#include "about.h"
#include "history.h"
#include "windows.h"
#include <QDebug>
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
}  //析构函数


void Dialog::on_pushButton_clicked()
{
    Addnew *add= new Addnew();
    add->exec();
    //qDebug()<<str_name[0];
}   //打开新增面板

void Dialog::on_pushButton_2_clicked()
{
    About *about= new About;
    about->show();

}  //打开关于面板

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
    Sleep(1000);
    ui->radioButton->close();
    ui->label_2->close();
}

void Dialog::on_pushButton_4_clicked()
{
    history *a =new history;
    a->show();
}
