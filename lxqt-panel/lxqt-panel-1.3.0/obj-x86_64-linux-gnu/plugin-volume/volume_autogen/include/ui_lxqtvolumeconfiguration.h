/********************************************************************************
** Form generated from reading UI file 'lxqtvolumeconfiguration.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LXQTVOLUMECONFIGURATION_H
#define UI_LXQTVOLUMECONFIGURATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LXQtVolumeConfiguration
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *alsaRadioButton;
    QRadioButton *pulseAudioRadioButton;
    QRadioButton *ossRadioButton;
    QComboBox *devAddedCombo;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *muteOnMiddleClickCheckBox;
    QCheckBox *ignoreMaxVolumeCheckBox;
    QCheckBox *alwaysShowNotificationsCheckBox;
    QCheckBox *showKeyboardNotificationsCheckBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *stepSpinBox;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *mixerLineEdit;
    QDialogButtonBox *buttons;

    void setupUi(QDialog *LXQtVolumeConfiguration)
    {
        if (LXQtVolumeConfiguration->objectName().isEmpty())
            LXQtVolumeConfiguration->setObjectName(QString::fromUtf8("LXQtVolumeConfiguration"));
        LXQtVolumeConfiguration->resize(306, 407);
        verticalLayout = new QVBoxLayout(LXQtVolumeConfiguration);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(LXQtVolumeConfiguration);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        alsaRadioButton = new QRadioButton(groupBox);
        alsaRadioButton->setObjectName(QString::fromUtf8("alsaRadioButton"));

        horizontalLayout_2->addWidget(alsaRadioButton);

        pulseAudioRadioButton = new QRadioButton(groupBox);
        pulseAudioRadioButton->setObjectName(QString::fromUtf8("pulseAudioRadioButton"));

        horizontalLayout_2->addWidget(pulseAudioRadioButton);

        ossRadioButton = new QRadioButton(groupBox);
        ossRadioButton->setObjectName(QString::fromUtf8("ossRadioButton"));

        horizontalLayout_2->addWidget(ossRadioButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        devAddedCombo = new QComboBox(groupBox);
        devAddedCombo->setObjectName(QString::fromUtf8("devAddedCombo"));

        verticalLayout_2->addWidget(devAddedCombo);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(LXQtVolumeConfiguration);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        muteOnMiddleClickCheckBox = new QCheckBox(groupBox_2);
        muteOnMiddleClickCheckBox->setObjectName(QString::fromUtf8("muteOnMiddleClickCheckBox"));

        verticalLayout_3->addWidget(muteOnMiddleClickCheckBox);

        ignoreMaxVolumeCheckBox = new QCheckBox(groupBox_2);
        ignoreMaxVolumeCheckBox->setObjectName(QString::fromUtf8("ignoreMaxVolumeCheckBox"));

        verticalLayout_3->addWidget(ignoreMaxVolumeCheckBox);

        alwaysShowNotificationsCheckBox = new QCheckBox(groupBox_2);
        alwaysShowNotificationsCheckBox->setObjectName(QString::fromUtf8("alwaysShowNotificationsCheckBox"));

        verticalLayout_3->addWidget(alwaysShowNotificationsCheckBox);

        showKeyboardNotificationsCheckBox = new QCheckBox(groupBox_2);
        showKeyboardNotificationsCheckBox->setObjectName(QString::fromUtf8("showKeyboardNotificationsCheckBox"));

        verticalLayout_3->addWidget(showKeyboardNotificationsCheckBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label);

        stepSpinBox = new QSpinBox(groupBox_2);
        stepSpinBox->setObjectName(QString::fromUtf8("stepSpinBox"));
        stepSpinBox->setMinimum(1);

        horizontalLayout->addWidget(stepSpinBox);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(LXQtVolumeConfiguration);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        mixerLineEdit = new QLineEdit(groupBox_3);
        mixerLineEdit->setObjectName(QString::fromUtf8("mixerLineEdit"));

        verticalLayout_4->addWidget(mixerLineEdit);


        verticalLayout->addWidget(groupBox_3);

        buttons = new QDialogButtonBox(LXQtVolumeConfiguration);
        buttons->setObjectName(QString::fromUtf8("buttons"));
        buttons->setOrientation(Qt::Horizontal);
        buttons->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Reset);

        verticalLayout->addWidget(buttons);


        retranslateUi(LXQtVolumeConfiguration);
        QObject::connect(buttons, SIGNAL(accepted()), LXQtVolumeConfiguration, SLOT(accept()));
        QObject::connect(buttons, SIGNAL(rejected()), LXQtVolumeConfiguration, SLOT(reject()));

        QMetaObject::connectSlotsByName(LXQtVolumeConfiguration);
    } // setupUi

    void retranslateUi(QDialog *LXQtVolumeConfiguration)
    {
        LXQtVolumeConfiguration->setWindowTitle(QCoreApplication::translate("LXQtVolumeConfiguration", "Volume Control Settings", nullptr));
        groupBox->setTitle(QCoreApplication::translate("LXQtVolumeConfiguration", "Device to control", nullptr));
        alsaRadioButton->setText(QCoreApplication::translate("LXQtVolumeConfiguration", "ALSA", nullptr));
        pulseAudioRadioButton->setText(QCoreApplication::translate("LXQtVolumeConfiguration", "PulseAudio", nullptr));
        ossRadioButton->setText(QCoreApplication::translate("LXQtVolumeConfiguration", "OSS", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("LXQtVolumeConfiguration", "Behavior", nullptr));
        muteOnMiddleClickCheckBox->setText(QCoreApplication::translate("LXQtVolumeConfiguration", "Mute on middle click", nullptr));
        ignoreMaxVolumeCheckBox->setText(QCoreApplication::translate("LXQtVolumeConfiguration", "Allow volume beyond 100% (0dB)", nullptr));
        alwaysShowNotificationsCheckBox->setText(QCoreApplication::translate("LXQtVolumeConfiguration", "Always notify about volume changes", nullptr));
        showKeyboardNotificationsCheckBox->setText(QCoreApplication::translate("LXQtVolumeConfiguration", "Notify about volume changes with keyboard", nullptr));
        label->setText(QCoreApplication::translate("LXQtVolumeConfiguration", "Volume adjust step", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("LXQtVolumeConfiguration", "External Mixer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LXQtVolumeConfiguration: public Ui_LXQtVolumeConfiguration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LXQTVOLUMECONFIGURATION_H
