#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_toggled(bool checked);

    void on_frame_customContextMenuRequested(const QPoint &pos);

    void on_radioButton_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Dialog *ui;
};
#endif // DIALOG_H
