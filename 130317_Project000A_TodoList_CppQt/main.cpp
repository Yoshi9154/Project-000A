#include <QApplication>

#include "userdisplay.h"

int main(int argc, char *argv[])
{
    cout << "timer" << endl;
    QApplication a(argc, argv);
    UserDisplay w;
    w.DisplayListItems();
    w.show();
    return a.exec();
}
