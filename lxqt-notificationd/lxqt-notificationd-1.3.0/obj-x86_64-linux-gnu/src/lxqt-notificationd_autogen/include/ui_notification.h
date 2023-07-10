/********************************************************************************
** Form generated from reading UI file 'notification.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTIFICATION_H
#define UI_NOTIFICATION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Notification
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *iconLabel;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *actionsLayout;
    QLabel *appLabel;
    QLabel *summaryLabel;
    QLabel *bodyLabel;
    QVBoxLayout *verticalLayout_3;
    QToolButton *closeButton;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *Notification)
    {
        if (Notification->objectName().isEmpty())
            Notification->setObjectName(QString::fromUtf8("Notification"));
        Notification->resize(209, 77);
        Notification->setAutoFillBackground(true);
        gridLayout = new QGridLayout(Notification);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(9);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 4, -1, 2);
        iconLabel = new QLabel(Notification);
        iconLabel->setObjectName(QString::fromUtf8("iconLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(iconLabel->sizePolicy().hasHeightForWidth());
        iconLabel->setSizePolicy(sizePolicy);
        iconLabel->setMinimumSize(QSize(32, 32));
        iconLabel->setMaximumSize(QSize(32, 32));
        iconLabel->setScaledContents(true);

        verticalLayout->addWidget(iconLabel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        actionsLayout = new QVBoxLayout();
        actionsLayout->setSpacing(6);
        actionsLayout->setObjectName(QString::fromUtf8("actionsLayout"));
        appLabel = new QLabel(Notification);
        appLabel->setObjectName(QString::fromUtf8("appLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        appLabel->setFont(font);
        appLabel->setText(QString::fromUtf8("TextLabel"));
        appLabel->setTextFormat(Qt::PlainText);
        appLabel->setWordWrap(false);

        actionsLayout->addWidget(appLabel);

        summaryLabel = new QLabel(Notification);
        summaryLabel->setObjectName(QString::fromUtf8("summaryLabel"));
        summaryLabel->setText(QString::fromUtf8("TextLabel"));
        summaryLabel->setTextFormat(Qt::PlainText);
        summaryLabel->setWordWrap(true);

        actionsLayout->addWidget(summaryLabel);

        bodyLabel = new QLabel(Notification);
        bodyLabel->setObjectName(QString::fromUtf8("bodyLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(bodyLabel->sizePolicy().hasHeightForWidth());
        bodyLabel->setSizePolicy(sizePolicy1);
        bodyLabel->setText(QString::fromUtf8("TextLabel"));
        bodyLabel->setTextFormat(Qt::RichText);
        bodyLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        bodyLabel->setWordWrap(true);
        bodyLabel->setOpenExternalLinks(true);

        actionsLayout->addWidget(bodyLabel);


        gridLayout->addLayout(actionsLayout, 0, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        closeButton = new QToolButton(Notification);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setText(QString::fromUtf8("x"));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("window-close")));
        closeButton->setIcon(icon);
        closeButton->setAutoRaise(true);

        verticalLayout_3->addWidget(closeButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        gridLayout->addLayout(verticalLayout_3, 0, 2, 1, 1);


        retranslateUi(Notification);

        QMetaObject::connectSlotsByName(Notification);
    } // setupUi

    void retranslateUi(QWidget *Notification)
    {
        (void)Notification;
    } // retranslateUi

};

namespace Ui {
    class Notification: public Ui_Notification {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTIFICATION_H
