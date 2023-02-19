#include "note.h"
#include "ui_note.h"
#include "vector_.h"
#include <windows.h>
#include <QFile>
#include <iostream>
#include <QTextStream>
Note::Note(QWidget *parent) :
        QWidget(parent),
        ui(new Ui::Note)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
}

Note::Note(std::vector<Note*> *note_vector,int num,QString str1,QString str2,QString str3,QString str4,QString str5) :
        finish(num),Thing(str1),Time(str2),Date(str3),ddl(str4),note(str5),ui(new Ui::Note)
{
    index=note_vector->size();
    // index是全局变量，用于存储，有记录的条数
    ui->setupUi(this);
    this->note_vector=note_vector;
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
    ui->label->setText(Thing);
    ui->label_2->setText(Time);
    ui->label_3->setText(Date);
    ui->label_4->setText(ddl);
    ui->label_5->setText(note);
}

Note::~Note()
{
    delete ui;
}

void Note::on_checkBox_clicked()
{
    finish=1;
    note_vector->at(index)->finish=1;
    note_vector->at(index)->ui->checkBox->setChecked(false);    //取消选中
    Vector_ vector;
    vector.vector_for_file(*note_vector);   //写入文件
    this->close();
}
