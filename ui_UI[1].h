/********************************************************************************
** Form generated from reading UI file 'UI.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_H
#define UI_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UDPSender
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *Heading_label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *IP;
    QLabel *label;
    QLineEdit *Port;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *Send_button;
    QPushButton *close_button;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_4;
    QPushButton *XML_upload_button;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *xml_file;

    void setupUi(QWidget *UDPSender)
    {
        if (UDPSender->objectName().isEmpty())
            UDPSender->setObjectName(QString::fromUtf8("UDPSender"));
        UDPSender->resize(655, 325);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(UDPSender->sizePolicy().hasHeightForWidth());
        UDPSender->setSizePolicy(sizePolicy);
        UDPSender->setMaximumSize(QSize(655, 326));
        horizontalLayoutWidget = new QWidget(UDPSender);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 0, 641, 81));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Heading_label = new QLabel(horizontalLayoutWidget);
        Heading_label->setObjectName(QString::fromUtf8("Heading_label"));

        horizontalLayout->addWidget(Heading_label);

        verticalLayoutWidget = new QWidget(UDPSender);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 80, 207, 150));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMaximumSize(QSize(150, 20));

        verticalLayout->addWidget(label_2);

        IP = new QLineEdit(verticalLayoutWidget);
        IP->setObjectName(QString::fromUtf8("IP"));
        IP->setMaximumSize(QSize(150, 16777215));

        verticalLayout->addWidget(IP);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMaximumSize(QSize(150, 20));

        verticalLayout->addWidget(label);

        Port = new QLineEdit(verticalLayoutWidget);
        Port->setObjectName(QString::fromUtf8("Port"));
        Port->setMaximumSize(QSize(150, 16777215));

        verticalLayout->addWidget(Port);

        horizontalLayoutWidget_2 = new QWidget(UDPSender);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 250, 641, 71));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        Send_button = new QPushButton(horizontalLayoutWidget_2);
        Send_button->setObjectName(QString::fromUtf8("Send_button"));

        horizontalLayout_2->addWidget(Send_button);

        close_button = new QPushButton(horizontalLayoutWidget_2);
        close_button->setObjectName(QString::fromUtf8("close_button"));

        horizontalLayout_2->addWidget(close_button);

        horizontalLayoutWidget_3 = new QWidget(UDPSender);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(170, 80, 481, 110));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        XML_upload_button = new QPushButton(horizontalLayoutWidget_3);
        XML_upload_button->setObjectName(QString::fromUtf8("XML_upload_button"));

        verticalLayout_4->addWidget(XML_upload_button);


        horizontalLayout_4->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        xml_file = new QLineEdit(horizontalLayoutWidget_3);
        xml_file->setObjectName(QString::fromUtf8("xml_file"));

        verticalLayout_5->addWidget(xml_file);


        horizontalLayout_4->addLayout(verticalLayout_5);


        retranslateUi(UDPSender);

        QMetaObject::connectSlotsByName(UDPSender);
    } // setupUi

    void retranslateUi(QWidget *UDPSender)
    {
        UDPSender->setWindowTitle(QApplication::translate("UDPSender", "Form", nullptr));
        Heading_label->setText(QApplication::translate("UDPSender", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600;\">UDP Message Sender</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("UDPSender", "IPv4 Address", nullptr));
        IP->setText(QApplication::translate("UDPSender", "192.0.0.1", nullptr));
        label->setText(QApplication::translate("UDPSender", "Port", nullptr));
        Port->setText(QApplication::translate("UDPSender", "8080", nullptr));
        Send_button->setText(QApplication::translate("UDPSender", "Send Message", nullptr));
        close_button->setText(QApplication::translate("UDPSender", "Close", nullptr));
        XML_upload_button->setText(QApplication::translate("UDPSender", "XML Input File", nullptr));
        xml_file->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UDPSender: public Ui_UDPSender {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_H
