#include "addnew.h"
#include "ui_addnew.h"
#include <QDebug>
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
//以下为按钮的函数
void Addnew::on_pushButton_clicked()
{
    close();
    QString str[5];   //提取m提醒事项名

    //str_name=(QString *)malloc(sizeof (QString)*6);
    str[0]=ui->nameLineEdit->text();
    str[1]=ui->timeTimeEdit->text();
    str[2]=ui->dateDateEdit->text();
    str[3]=ui->LineEdit->text();
    str[4]=ui->comboBox->currentText();
    str_name=&str[0];
    for(int i=0;i<5;i++)
    qDebug()<<str_name[i]<<endl;
}
