/********************************************************************************
** Form generated from reading UI file 'lxqtnetworkmonitorconfiguration.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LXQTNETWORKMONITORCONFIGURATION_H
#define UI_LXQTNETWORKMONITORCONFIGURATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LXQtNetworkMonitorConfiguration
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *generalGB;
    QGridLayout *gridLayout;
    QLabel *interfaceLabel;
    QComboBox *interfaceCB;
    QComboBox *iconCB;
    QLabel *iconLabel;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttons;

    void setupUi(QDialog *LXQtNetworkMonitorConfiguration)
    {
        if (LXQtNetworkMonitorConfiguration->objectName().isEmpty())
            LXQtNetworkMonitorConfiguration->setObjectName(QString::fromUtf8("LXQtNetworkMonitorConfiguration"));
        LXQtNetworkMonitorConfiguration->resize(285, 191);
        verticalLayout = new QVBoxLayout(LXQtNetworkMonitorConfiguration);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        generalGB = new QGroupBox(LXQtNetworkMonitorConfiguration);
        generalGB->setObjectName(QString::fromUtf8("generalGB"));
        generalGB->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        generalGB->setFlat(false);
        generalGB->setCheckable(false);
        gridLayout = new QGridLayout(generalGB);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        interfaceLabel = new QLabel(generalGB);
        interfaceLabel->setObjectName(QString::fromUtf8("interfaceLabel"));

        gridLayout->addWidget(interfaceLabel, 1, 0, 1, 1);

        interfaceCB = new QComboBox(generalGB);
        interfaceCB->setObjectName(QString::fromUtf8("interfaceCB"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(interfaceCB->sizePolicy().hasHeightForWidth());
        interfaceCB->setSizePolicy(sizePolicy);
        interfaceCB->setEditable(true);

        gridLayout->addWidget(interfaceCB, 1, 1, 1, 1);

        iconCB = new QComboBox(generalGB);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/knemo-modem-idle.png"), QSize(), QIcon::Normal, QIcon::Off);
        iconCB->addItem(icon, QString());
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/knemo-monitor-idle.png"), QSize(), QIcon::Normal, QIcon::Off);
        iconCB->addItem(icon1, QString());
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/knemo-network-idle.png"), QSize(), QIcon::Normal, QIcon::Off);
        iconCB->addItem(icon2, QString());
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/knemo-wireless-idle.png"), QSize(), QIcon::Normal, QIcon::Off);
        iconCB->addItem(icon3, QString());
        iconCB->setObjectName(QString::fromUtf8("iconCB"));

        gridLayout->addWidget(iconCB, 0, 1, 1, 1);

        iconLabel = new QLabel(generalGB);
        iconLabel->setObjectName(QString::fromUtf8("iconLabel"));

        gridLayout->addWidget(iconLabel, 0, 0, 1, 1);


        verticalLayout->addWidget(generalGB);

        verticalSpacer = new QSpacerItem(20, 41, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttons = new QDialogButtonBox(LXQtNetworkMonitorConfiguration);
        buttons->setObjectName(QString::fromUtf8("buttons"));
        buttons->setOrientation(Qt::Horizontal);
        buttons->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Reset);

        verticalLayout->addWidget(buttons);


        retranslateUi(LXQtNetworkMonitorConfiguration);

        QMetaObject::connectSlotsByName(LXQtNetworkMonitorConfiguration);
    } // setupUi

    void retranslateUi(QDialog *LXQtNetworkMonitorConfiguration)
    {
        LXQtNetworkMonitorConfiguration->setWindowTitle(QCoreApplication::translate("LXQtNetworkMonitorConfiguration", "Network Monitor settings", nullptr));
        generalGB->setTitle(QCoreApplication::translate("LXQtNetworkMonitorConfiguration", "General", nullptr));
        interfaceLabel->setText(QCoreApplication::translate("LXQtNetworkMonitorConfiguration", "Interface", nullptr));
        iconCB->setItemText(0, QCoreApplication::translate("LXQtNetworkMonitorConfiguration", "Modem", nullptr));
        iconCB->setItemText(1, QCoreApplication::translate("LXQtNetworkMonitorConfiguration", "Monitor", nullptr));
        iconCB->setItemText(2, QCoreApplication::translate("LXQtNetworkMonitorConfiguration", "Network", nullptr));
        iconCB->setItemText(3, QCoreApplication::translate("LXQtNetworkMonitorConfiguration", "Wireless", nullptr));

        iconLabel->setText(QCoreApplication::translate("LXQtNetworkMonitorConfiguration", "Icon", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LXQtNetworkMonitorConfiguration: public Ui_LXQtNetworkMonitorConfiguration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LXQTNETWORKMONITORCONFIGURATION_H
