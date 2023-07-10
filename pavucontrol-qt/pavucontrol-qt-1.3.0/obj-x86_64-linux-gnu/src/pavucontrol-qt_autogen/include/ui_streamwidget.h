/********************************************************************************
** Form generated from reading UI file 'streamwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STREAMWIDGET_H
#define UI_STREAMWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "elidinglabel.h"

QT_BEGIN_NAMESPACE

class Ui_StreamWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *iconImage;
    QLabel *boldNameLabel;
    ElidingLabel *nameLabel;
    QSpacerItem *horizontalSpacer;
    QLabel *directionLabel;
    QToolButton *deviceButton;
    QToolButton *muteToggleButton;
    QToolButton *lockToggleButton;
    QGridLayout *channelsGrid;
    QFrame *line;

    void setupUi(QWidget *StreamWidget)
    {
        if (StreamWidget->objectName().isEmpty())
            StreamWidget->setObjectName(QString::fromUtf8("StreamWidget"));
        StreamWidget->resize(416, 103);
        verticalLayout = new QVBoxLayout(StreamWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        iconImage = new QLabel(StreamWidget);
        iconImage->setObjectName(QString::fromUtf8("iconImage"));

        horizontalLayout->addWidget(iconImage);

        boldNameLabel = new QLabel(StreamWidget);
        boldNameLabel->setObjectName(QString::fromUtf8("boldNameLabel"));

        horizontalLayout->addWidget(boldNameLabel);

        nameLabel = new ElidingLabel(StreamWidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        horizontalLayout->addWidget(nameLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        directionLabel = new QLabel(StreamWidget);
        directionLabel->setObjectName(QString::fromUtf8("directionLabel"));

        horizontalLayout->addWidget(directionLabel);

        deviceButton = new QToolButton(StreamWidget);
        deviceButton->setObjectName(QString::fromUtf8("deviceButton"));

        horizontalLayout->addWidget(deviceButton);

        muteToggleButton = new QToolButton(StreamWidget);
        muteToggleButton->setObjectName(QString::fromUtf8("muteToggleButton"));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("audio-volume-muted")));
        muteToggleButton->setIcon(icon);
        muteToggleButton->setCheckable(true);

        horizontalLayout->addWidget(muteToggleButton);

        lockToggleButton = new QToolButton(StreamWidget);
        lockToggleButton->setObjectName(QString::fromUtf8("lockToggleButton"));
        QIcon icon1(QIcon::fromTheme(QString::fromUtf8("changes-prevent-symbolic")));
        lockToggleButton->setIcon(icon1);
        lockToggleButton->setCheckable(true);
        lockToggleButton->setChecked(true);

        horizontalLayout->addWidget(lockToggleButton);


        verticalLayout->addLayout(horizontalLayout);

        channelsGrid = new QGridLayout();
        channelsGrid->setObjectName(QString::fromUtf8("channelsGrid"));

        verticalLayout->addLayout(channelsGrid);

        line = new QFrame(StreamWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);


        retranslateUi(StreamWidget);

        QMetaObject::connectSlotsByName(StreamWidget);
    } // setupUi

    void retranslateUi(QWidget *StreamWidget)
    {
        StreamWidget->setWindowTitle(QCoreApplication::translate("StreamWidget", "Form", nullptr));
        boldNameLabel->setText(QString());
        nameLabel->setText(QCoreApplication::translate("StreamWidget", "Device Title", nullptr));
        directionLabel->setText(QCoreApplication::translate("StreamWidget", "direction", nullptr));
        deviceButton->setText(QCoreApplication::translate("StreamWidget", "device", nullptr));
#if QT_CONFIG(tooltip)
        muteToggleButton->setToolTip(QCoreApplication::translate("StreamWidget", "Mute audio", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lockToggleButton->setToolTip(QCoreApplication::translate("StreamWidget", "Lock channels together", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class StreamWidget: public Ui_StreamWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STREAMWIDGET_H
