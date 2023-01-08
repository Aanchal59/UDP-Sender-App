#include <QApplication>
#include "UI.h"

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    qDebug("======================================================================");
    qDebug("==UDP_sender===");


    UDPSender *ui;
    ui=new UDPSender;
    ui->setWindowTitle("UDP_sender Interface");
    ui->show();

    return a.exec();
}

