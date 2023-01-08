#include "UI.h"

#include <QtCore/QDebug>
#include <QDir>
#include <QFileDialog>
#include <QFile>
#include <QtXml/QDomDocument>


QDir browse;

UDPSender::UDPSender(QWidget *parent ) :
    QWidget(parent),
    ui(new Ui::UDPSender)
{

    ui->setupUi(this);
    send_udpSocket = new QUdpSocket();

}

UDPSender::~UDPSender()
{
    delete ui;
}

void UDPSender::on_XML_upload_button_clicked()
{

    QString path=browse.currentPath()+"/";

    filename = QDir::toNativeSeparators(QFileDialog::getOpenFileName (this, tr("XML File"), path, tr("XML files(*.xml)")));

    if (!filename.isEmpty())
    {
        ui->xml_file->setText(filename);

        QFileInfo file_path(filename);
        browse.setCurrent (file_path.path ());

    }

}


void UDPSender::on_close_button_clicked()
{
    this->close ();
}

void UDPSender::on_Send_button_clicked()
{

    QDomDocument xml;

    QFile file(filename);

    if(!file.open (QIODevice::ReadOnly|QIODevice::Text ))
    {
        qDebug()<<"Error reading data from file";  // try to end UDPSendering with an error
        errorMessageDialog = new QErrorMessage(this);
        errorMessageDialog->showMessage(
                    tr("Please select the appropriate XML file" ));
        return;
    }

    if (!xml.setContent(&file))
        file.close();
    else
    {
        file.close();
    }

    QDomNodeList config_list = xml.elementsByTagName("MSG_DETAILS");

    qWarning("-------------------------------------------------------------------");

    for(int i = 0; i < config_list.count(); i++)
    {

        QDomNode msg_node = config_list.at(i);


        QDomNode t_domNode = msg_node.firstChild().nextSibling();
        msg_name = msg_node.firstChild().toElement().text();
        qWarning("msg_name = %s", qPrintable(msg_name));


        msg_id = t_domNode.toElement().text().toInt();
        t_domNode = t_domNode.nextSibling();
        qWarning("msg_name = %d", msg_id);

        lat = t_domNode.toElement().text().toFloat();
        t_domNode = t_domNode.nextSibling();
        qWarning("latitude = %f", lat);

        longi = t_domNode.toElement().text().toFloat();
        t_domNode = t_domNode.nextSibling();
        qWarning("longitude = %f", longi);

        alt = t_domNode.toElement().text().toInt();
        t_domNode = t_domNode.nextSibling();
        qWarning("Altitude = %d", alt);



     char buffer[1500];
     memset(buffer, 0, 1500);
     int size = 0;

     memcpy(buffer,&msg_name,sizeof (msg_name));
     size+=sizeof (msg_name);

     memcpy(&buffer[sizeof (msg_name)],&msg_id,sizeof (msg_id));
     size+=sizeof (msg_id);

     unsigned long c = QDateTime::currentMSecsSinceEpoch();
     memcpy(&buffer[sizeof (c)], &c, sizeof(c));
     size += sizeof(c);


     memcpy(&buffer[sizeof (lat)],&msg_id,sizeof (lat));
     size+=sizeof (lat);

     memcpy(&buffer[sizeof (longi)],&msg_id,sizeof (longi));
     size+=sizeof (longi);

     memcpy(&buffer[sizeof (alt)],&msg_id,sizeof (alt));
     size+=sizeof (alt);

     ip_address = ui->IP->text();
     send_udp_port = ui->Port->text().toInt();


     QByteArray datagram(buffer, size);

     QHostAddress send_ip;
     send_ip.setAddress(ip_address);



     int sent_bytes = send_udpSocket->writeDatagram(datagram.data(), datagram.size(), send_ip, send_udp_port);
    qWarning("*******************************************************************");
    qWarning("%d Bytes Sent...to %s, on port %d", sent_bytes, qPrintable(ip_address), send_udp_port);
    qWarning("*******************************************************************");



  }
}
