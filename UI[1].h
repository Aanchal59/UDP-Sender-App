#ifndef UI_H
#define UI_H

#include <QDialog>
#include <QWidget>
#include <QtWidgets/qdialog.h>
#include <qerrormessage.h>
#include <QtXml/QDomDocument>
#include <QtNetwork>
#include <QUdpSocket>


#include "ui_UI.h"


namespace Ui {
class UDPSender;
}

class UDPSender : public QWidget
{
    Q_OBJECT

public:
    explicit UDPSender(QWidget *parent = nullptr);
    QString filename;

    ~UDPSender();

     QString ip_address;
     int send_udp_port;

    QString msg_name;
    int len;
    float lat;
    float longi;
    int alt;
    int msg_id;
    QUdpSocket     *send_udpSocket;


private:
    Ui::UDPSender *ui;
    QErrorMessage *errorMessageDialog;

private slots:
   void on_close_button_clicked();

   void on_XML_upload_button_clicked();
   void on_Send_button_clicked();
};

#endif // UI_H
