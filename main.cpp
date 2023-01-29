#include "dialog.h"
#include <QDebug>
#include <QApplication>
#include "about.h"
#include "history.h"
#include "addnew.h"
#include "note.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog *w = new Dialog;
    w->show();
    w->AddNew();
    //w->AddNew("name2",2);
    return a.exec();
}
