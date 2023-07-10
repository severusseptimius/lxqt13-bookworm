/********************************************************************************
** Form generated from reading UI file 'devicewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVICEWIDGET_H
#define UI_DEVICEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeviceWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *iconImage;
    QLabel *boldNameLabel;
    QLabel *nameLabel;
    QSpacerItem *horizontalSpacer;
    QToolButton *muteToggleButton;
    QToolButton *lockToggleButton;
    QToolButton *defaultToggleButton;
    QWidget *portSelect;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *portList;
    QGridLayout *channelsGrid;
    QCheckBox *advancedOptions;
    QWidget *advancedWidget;
    QVBoxLayout *verticalLayout_2;
    QWidget *encodingSelect;
    QGridLayout *gridLayout;
    QCheckBox *encodingFormatPCM;
    QCheckBox *encodingFormatAC3;
    QCheckBox *encodingFormatEAC3;
    QCheckBox *encodingFormatDTS;
    QCheckBox *encodingFormatMPEG;
    QCheckBox *encodingFormatAAC;
    QWidget *offsetSelect;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSpinBox *offsetButton;
    QFrame *line;

    void setupUi(QWidget *DeviceWidget)
    {
        if (DeviceWidget->objectName().isEmpty())
            DeviceWidget->setObjectName(QString::fromUtf8("DeviceWidget"));
        DeviceWidget->resize(400, 306);
        verticalLayout = new QVBoxLayout(DeviceWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        iconImage = new QLabel(DeviceWidget);
        iconImage->setObjectName(QString::fromUtf8("iconImage"));

        horizontalLayout->addWidget(iconImage);

        boldNameLabel = new QLabel(DeviceWidget);
        boldNameLabel->setObjectName(QString::fromUtf8("boldNameLabel"));

        horizontalLayout->addWidget(boldNameLabel);

        nameLabel = new QLabel(DeviceWidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        horizontalLayout->addWidget(nameLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        muteToggleButton = new QToolButton(DeviceWidget);
        muteToggleButton->setObjectName(QString::fromUtf8("muteToggleButton"));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("audio-volume-muted")));
        muteToggleButton->setIcon(icon);
        muteToggleButton->setCheckable(true);

        horizontalLayout->addWidget(muteToggleButton);

        lockToggleButton = new QToolButton(DeviceWidget);
        lockToggleButton->setObjectName(QString::fromUtf8("lockToggleButton"));
        QIcon icon1(QIcon::fromTheme(QString::fromUtf8("changes-prevent-symbolic")));
        lockToggleButton->setIcon(icon1);
        lockToggleButton->setCheckable(true);
        lockToggleButton->setChecked(true);

        horizontalLayout->addWidget(lockToggleButton);

        defaultToggleButton = new QToolButton(DeviceWidget);
        defaultToggleButton->setObjectName(QString::fromUtf8("defaultToggleButton"));
        QIcon icon2(QIcon::fromTheme(QString::fromUtf8("applications-multimedia")));
        defaultToggleButton->setIcon(icon2);
        defaultToggleButton->setCheckable(true);

        horizontalLayout->addWidget(defaultToggleButton);


        verticalLayout->addLayout(horizontalLayout);

        portSelect = new QWidget(DeviceWidget);
        portSelect->setObjectName(QString::fromUtf8("portSelect"));
        horizontalLayout_2 = new QHBoxLayout(portSelect);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(portSelect);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        portList = new QComboBox(portSelect);
        portList->setObjectName(QString::fromUtf8("portList"));

        horizontalLayout_2->addWidget(portList);

        horizontalLayout_2->setStretch(1, 1);

        verticalLayout->addWidget(portSelect);

        channelsGrid = new QGridLayout();
        channelsGrid->setObjectName(QString::fromUtf8("channelsGrid"));
        channelsGrid->setHorizontalSpacing(0);

        verticalLayout->addLayout(channelsGrid);

        advancedOptions = new QCheckBox(DeviceWidget);
        advancedOptions->setObjectName(QString::fromUtf8("advancedOptions"));
        advancedOptions->setEnabled(false);

        verticalLayout->addWidget(advancedOptions);

        advancedWidget = new QWidget(DeviceWidget);
        advancedWidget->setObjectName(QString::fromUtf8("advancedWidget"));
        verticalLayout_2 = new QVBoxLayout(advancedWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(9, 0, 0, 0);
        encodingSelect = new QWidget(advancedWidget);
        encodingSelect->setObjectName(QString::fromUtf8("encodingSelect"));
        gridLayout = new QGridLayout(encodingSelect);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        encodingFormatPCM = new QCheckBox(encodingSelect);
        encodingFormatPCM->setObjectName(QString::fromUtf8("encodingFormatPCM"));
        encodingFormatPCM->setEnabled(false);
        encodingFormatPCM->setChecked(true);

        gridLayout->addWidget(encodingFormatPCM, 0, 0, 1, 1);

        encodingFormatAC3 = new QCheckBox(encodingSelect);
        encodingFormatAC3->setObjectName(QString::fromUtf8("encodingFormatAC3"));

        gridLayout->addWidget(encodingFormatAC3, 0, 1, 1, 1);

        encodingFormatEAC3 = new QCheckBox(encodingSelect);
        encodingFormatEAC3->setObjectName(QString::fromUtf8("encodingFormatEAC3"));

        gridLayout->addWidget(encodingFormatEAC3, 0, 2, 1, 1);

        encodingFormatDTS = new QCheckBox(encodingSelect);
        encodingFormatDTS->setObjectName(QString::fromUtf8("encodingFormatDTS"));

        gridLayout->addWidget(encodingFormatDTS, 1, 0, 1, 1);

        encodingFormatMPEG = new QCheckBox(encodingSelect);
        encodingFormatMPEG->setObjectName(QString::fromUtf8("encodingFormatMPEG"));

        gridLayout->addWidget(encodingFormatMPEG, 1, 1, 1, 1);

        encodingFormatAAC = new QCheckBox(encodingSelect);
        encodingFormatAAC->setObjectName(QString::fromUtf8("encodingFormatAAC"));

        gridLayout->addWidget(encodingFormatAAC, 1, 2, 1, 1);


        verticalLayout_2->addWidget(encodingSelect);

        offsetSelect = new QWidget(advancedWidget);
        offsetSelect->setObjectName(QString::fromUtf8("offsetSelect"));
        horizontalLayout_3 = new QHBoxLayout(offsetSelect);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(offsetSelect);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        offsetButton = new QSpinBox(offsetSelect);
        offsetButton->setObjectName(QString::fromUtf8("offsetButton"));

        horizontalLayout_3->addWidget(offsetButton);


        verticalLayout_2->addWidget(offsetSelect);


        verticalLayout->addWidget(advancedWidget);

        line = new QFrame(DeviceWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);


        retranslateUi(DeviceWidget);
        QObject::connect(advancedOptions, SIGNAL(toggled(bool)), advancedWidget, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(DeviceWidget);
    } // setupUi

    void retranslateUi(QWidget *DeviceWidget)
    {
        DeviceWidget->setWindowTitle(QCoreApplication::translate("DeviceWidget", "Form", nullptr));
        iconImage->setText(QString());
        boldNameLabel->setText(QString());
        nameLabel->setText(QCoreApplication::translate("DeviceWidget", "Device Title", nullptr));
#if QT_CONFIG(tooltip)
        muteToggleButton->setToolTip(QCoreApplication::translate("DeviceWidget", "Mute audio", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lockToggleButton->setToolTip(QCoreApplication::translate("DeviceWidget", "Lock channels together", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        defaultToggleButton->setToolTip(QCoreApplication::translate("DeviceWidget", "Set as fallback", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("DeviceWidget", "<b>Port:</b>", nullptr));
        advancedOptions->setText(QCoreApplication::translate("DeviceWidget", "Show advanced options", nullptr));
        encodingFormatPCM->setText(QCoreApplication::translate("DeviceWidget", "PCM", nullptr));
        encodingFormatAC3->setText(QCoreApplication::translate("DeviceWidget", "AC3", nullptr));
        encodingFormatEAC3->setText(QCoreApplication::translate("DeviceWidget", "EAC3", nullptr));
        encodingFormatDTS->setText(QCoreApplication::translate("DeviceWidget", "DTS", nullptr));
        encodingFormatMPEG->setText(QCoreApplication::translate("DeviceWidget", "MPEG", nullptr));
        encodingFormatAAC->setText(QCoreApplication::translate("DeviceWidget", "AAC", nullptr));
        label_4->setText(QCoreApplication::translate("DeviceWidget", "<b>Latency offset:</b>", nullptr));
        offsetButton->setSuffix(QCoreApplication::translate("DeviceWidget", " ms", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeviceWidget: public Ui_DeviceWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVICEWIDGET_H
