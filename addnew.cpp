#include "addnew.h"
#include "ui_addnew.h"
#include <QDebug>
#include <QFile>
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
int count = 1;
void Addnew::on_pushButton_clicked()
{

    QString str[5];   //提取提醒事项名、备注、时间等的
    str[0]=ui->nameLineEdit->text();      //内容
    str[1]=ui->timeTimeEdit->text();      //时间
    str[2]=ui->dateDateEdit->text();      //日期
    str[3]=ui->LineEdit->text();          //备注
    str[4]=ui->comboBox->currentText();   //ddl情况
    for(int i=0;i<5;i++)
    qDebug()<<str[i]<<endl;               //在Qt界面输出以上五点（类似调试输出
    //以下用于写入文件
    QFile file;
    file.setFileName("C:/Users/11846/Desktop/Noname/log/log.txt");   //保存到本地地址
    if(file.open(QIODevice::Append| QIODevice::Text))
    {
        QTextStream stream(&file);
        stream<<count<<" "<<"note"<<count<<" ";     //用于写入文件的实现
        for(int i=0;i<5;i++)
        {
             stream<<str[i]<<" ";
        }
        stream<<"#\n";
        count++;
        file.close();
    }
    close();
}
