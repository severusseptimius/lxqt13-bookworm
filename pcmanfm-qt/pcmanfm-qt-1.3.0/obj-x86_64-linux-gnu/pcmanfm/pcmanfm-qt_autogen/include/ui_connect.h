/********************************************************************************
** Form generated from reading UI file 'connect.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECT_H
#define UI_CONNECT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_ConnectServerDialog
{
public:
    QGridLayout *gridLayout;
    QRadioButton *ananymousLogin;
    QLineEdit *path;
    QRadioButton *loginAsUser;
    QLineEdit *userName;
    QComboBox *serverType;
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *host;
    QLabel *label_3;
    QSpinBox *port;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *ConnectServerDialog)
    {
        if (ConnectServerDialog->objectName().isEmpty())
            ConnectServerDialog->setObjectName(QString::fromUtf8("ConnectServerDialog"));
        ConnectServerDialog->resize(450, 256);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("folder-remote")));
        ConnectServerDialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(ConnectServerDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        ananymousLogin = new QRadioButton(ConnectServerDialog);
        ananymousLogin->setObjectName(QString::fromUtf8("ananymousLogin"));
        ananymousLogin->setChecked(true);

        gridLayout->addWidget(ananymousLogin, 5, 0, 1, 4);

        path = new QLineEdit(ConnectServerDialog);
        path->setObjectName(QString::fromUtf8("path"));

        gridLayout->addWidget(path, 4, 1, 1, 3);

        loginAsUser = new QRadioButton(ConnectServerDialog);
        loginAsUser->setObjectName(QString::fromUtf8("loginAsUser"));

        gridLayout->addWidget(loginAsUser, 6, 0, 1, 1);

        userName = new QLineEdit(ConnectServerDialog);
        userName->setObjectName(QString::fromUtf8("userName"));

        gridLayout->addWidget(userName, 6, 1, 1, 3);

        serverType = new QComboBox(ConnectServerDialog);
        serverType->setObjectName(QString::fromUtf8("serverType"));

        gridLayout->addWidget(serverType, 1, 1, 1, 3);

        buttonBox = new QDialogButtonBox(ConnectServerDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 8, 0, 1, 4);

        label = new QLabel(ConnectServerDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 0, 0, 1, 4);

        label_2 = new QLabel(ConnectServerDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_4 = new QLabel(ConnectServerDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 2, 1, 1);

        label_5 = new QLabel(ConnectServerDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        host = new QLineEdit(ConnectServerDialog);
        host->setObjectName(QString::fromUtf8("host"));

        gridLayout->addWidget(host, 2, 1, 1, 1);

        label_3 = new QLabel(ConnectServerDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        port = new QSpinBox(ConnectServerDialog);
        port->setObjectName(QString::fromUtf8("port"));
        port->setMaximum(65535);

        gridLayout->addWidget(port, 2, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 7, 0, 1, 1);


        retranslateUi(ConnectServerDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ConnectServerDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ConnectServerDialog, SLOT(reject()));
        QObject::connect(loginAsUser, SIGNAL(toggled(bool)), userName, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(ConnectServerDialog);
    } // setupUi

    void retranslateUi(QDialog *ConnectServerDialog)
    {
        ConnectServerDialog->setWindowTitle(QCoreApplication::translate("ConnectServerDialog", "Connect to remote server", nullptr));
        ananymousLogin->setText(QCoreApplication::translate("ConnectServerDialog", "Anonymous &login", nullptr));
        loginAsUser->setText(QCoreApplication::translate("ConnectServerDialog", "Login as &user:", nullptr));
        label->setText(QCoreApplication::translate("ConnectServerDialog", "Specify remote folder to connect", nullptr));
        label_2->setText(QCoreApplication::translate("ConnectServerDialog", "Type:", nullptr));
        label_4->setText(QCoreApplication::translate("ConnectServerDialog", "Port:", nullptr));
        label_5->setText(QCoreApplication::translate("ConnectServerDialog", "Path:", nullptr));
        label_3->setText(QCoreApplication::translate("ConnectServerDialog", "Host:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConnectServerDialog: public Ui_ConnectServerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECT_H
