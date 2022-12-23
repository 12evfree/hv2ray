#include "hv2ray.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HV2ray w;
    w.show();
    return a.exec();
}
