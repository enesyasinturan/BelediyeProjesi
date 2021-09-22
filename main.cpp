#include "anasayfa.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AnaSayfa w;
    w.show();
    return a.exec();
}
