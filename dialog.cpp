#include "dialog.h"
#include "ui_dialog.h"
#include "addnew.h"
#include "about.h"
#include "history.h"
#include "windows.h"
#include <QGridLayout>
#include <QDebug>
#include "note.h"
#include <QFile>

#pragma execution_character_set("utf-8")     //显示中文，需要log.txt文件也调整。

//主界面窗口设置
Dialog::Dialog(QWidget *parent)
        : QDialog(parent), ui(new Ui::Dialog) {
    ui->setupUi(this);

}

Dialog::~Dialog() {
    delete ui;
}  //析构函数


void Dialog::on_pushButton_clicked() {
    Addnew *add = new Addnew();
    add->show();
    //qDebug()<<str_name[0];
}   //打开新增面板

void Dialog::on_pushButton_2_clicked() {
    About *about = new About;
    about->show();

}  //打开关于面板

void Dialog::on_pushButton_3_toggled(bool checked) {

    if (checked) {
        ui->pushButton_3->setText(tr("显示"));
        ui->frame->hide();
    } else {
        ui->pushButton_3->setText(tr("最小化"));
        ui->frame->show();
    }
}

void Dialog::on_pushButton_4_clicked() {
    history *a = new history;
    a->show();
}

void Dialog::AddNew() {
    QFile file;
    QString str_read[7];
    QString strline;
    //int num;    //每个事项前的数字
    file.setFileName("C:/Users/11846/Desktop/Noname/log/log.txt");    //设置要处理的文件的路径
    if (file.open(QIODevice::ReadOnly))                           //只读
    {
        if(ui->frame_2->widget()->layout()!= nullptr){//删除原有布局
            QLayoutItem *item;
            while((item=ui->frame_2->widget()->layout()->takeAt(0))!= nullptr){
                delete item->widget();
                delete item;
            }
            delete ui->frame_2->widget()->layout();
        }
        QGridLayout *gridLayout=new QGridLayout();//网格布局
        while (!file.atEnd())                                        //当没有读到文件末尾时
        {
            strline = file.readLine();                               //读取一行
            QStringList list = strline.split(" ");                   //以一个空格为分隔符
            for (int i = 0; i < 7; i++) {
                str_read[i] = list[i];
            }
            // num = str_read[0].toInt();//将第一个数据转化为int类

            Note *n1 = new Note(ui->frame_2, str_read[2], str_read[3], str_read[4], str_read[5], str_read[6]);
            note_vector.push_back(n1);
            gridLayout->addWidget(n1);
//        n1.move(2,2+70*(num-1));  //提醒事项的移动
//        n1.exec();
        }
        ui->frame_2->widget()->setLayout(gridLayout);
        repaint();
    }
}
