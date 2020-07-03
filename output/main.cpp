#include "pw_output.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PW_output w;
    w.show();
    return a.exec();
}
