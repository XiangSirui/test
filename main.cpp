#include "dialog.h"
#include <QDebug>
#include <QApplication>
#include "about.h"
#include "history.h"
#include "addnew.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.show();
    return a.exec();
}
