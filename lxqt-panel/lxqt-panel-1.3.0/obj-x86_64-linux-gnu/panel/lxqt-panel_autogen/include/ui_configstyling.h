/********************************************************************************
** Form generated from reading UI file 'configstyling.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGSTYLING_H
#define UI_CONFIGSTYLING_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigStyling
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *checkBox_customFontColor;
    QPushButton *pushButton_customFontColor;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *checkBox_customBgColor;
    QPushButton *pushButton_customBgColor;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QSlider *slider_opacity;
    QLabel *compositingL;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox_customBgImage;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEdit_customBgImage;
    QPushButton *pushButton_customBgImage;
    QGroupBox *groupBox_icon;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QComboBox *comboBox_icon;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ConfigStyling)
    {
        if (ConfigStyling->objectName().isEmpty())
            ConfigStyling->setObjectName(QString::fromUtf8("ConfigStyling"));
        ConfigStyling->resize(382, 225);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ConfigStyling->sizePolicy().hasHeightForWidth());
        ConfigStyling->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(ConfigStyling);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(ConfigStyling);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        widget_6 = new QWidget(groupBox_2);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        horizontalLayout_6 = new QHBoxLayout(widget_6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        checkBox_customFontColor = new QCheckBox(widget_6);
        checkBox_customFontColor->setObjectName(QString::fromUtf8("checkBox_customFontColor"));

        horizontalLayout_6->addWidget(checkBox_customFontColor);

        pushButton_customFontColor = new QPushButton(widget_6);
        pushButton_customFontColor->setObjectName(QString::fromUtf8("pushButton_customFontColor"));
        pushButton_customFontColor->setEnabled(false);
        pushButton_customFontColor->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("color-picker");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("../../../../../.designer/backup"), QSize(), QIcon::Normal, QIcon::Off);
        }
        pushButton_customFontColor->setIcon(icon);

        horizontalLayout_6->addWidget(pushButton_customFontColor);

        horizontalSpacer_2 = new QSpacerItem(5, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        checkBox_customBgColor = new QCheckBox(widget_6);
        checkBox_customBgColor->setObjectName(QString::fromUtf8("checkBox_customBgColor"));

        horizontalLayout_6->addWidget(checkBox_customBgColor);

        pushButton_customBgColor = new QPushButton(widget_6);
        pushButton_customBgColor->setObjectName(QString::fromUtf8("pushButton_customBgColor"));
        pushButton_customBgColor->setEnabled(false);
        pushButton_customBgColor->setStyleSheet(QString::fromUtf8(""));
        pushButton_customBgColor->setIcon(icon);

        horizontalLayout_6->addWidget(pushButton_customBgColor);


        gridLayout_3->addWidget(widget_6, 0, 0, 1, 5);

        widget_3 = new QWidget(groupBox_2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(6, -1, -1, -1);
        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setEnabled(false);

        horizontalLayout_3->addWidget(label_2);

        slider_opacity = new QSlider(widget_3);
        slider_opacity->setObjectName(QString::fromUtf8("slider_opacity"));
        slider_opacity->setEnabled(false);
        slider_opacity->setMaximum(100);
        slider_opacity->setPageStep(5);
        slider_opacity->setValue(100);
        slider_opacity->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(slider_opacity);


        gridLayout_3->addWidget(widget_3, 2, 0, 1, 5);

        compositingL = new QLabel(groupBox_2);
        compositingL->setObjectName(QString::fromUtf8("compositingL"));
        compositingL->setEnabled(false);
        compositingL->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(compositingL, 3, 0, 1, 5);

        widget = new QWidget(groupBox_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);

        gridLayout_3->addWidget(widget, 6, 0, 1, 2);

        checkBox_customBgImage = new QCheckBox(groupBox_2);
        checkBox_customBgImage->setObjectName(QString::fromUtf8("checkBox_customBgImage"));

        gridLayout_3->addWidget(checkBox_customBgImage, 5, 0, 1, 1);

        widget_4 = new QWidget(groupBox_2);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        lineEdit_customBgImage = new QLineEdit(widget_4);
        lineEdit_customBgImage->setObjectName(QString::fromUtf8("lineEdit_customBgImage"));
        lineEdit_customBgImage->setEnabled(false);

        horizontalLayout_4->addWidget(lineEdit_customBgImage);

        pushButton_customBgImage = new QPushButton(widget_4);
        pushButton_customBgImage->setObjectName(QString::fromUtf8("pushButton_customBgImage"));
        pushButton_customBgImage->setEnabled(false);
        pushButton_customBgImage->setStyleSheet(QString::fromUtf8(""));
        QIcon icon1;
        iconThemeName = QString::fromUtf8("insert-image");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8("../../../../../.designer/backup"), QSize(), QIcon::Normal, QIcon::Off);
        }
        pushButton_customBgImage->setIcon(icon1);

        horizontalLayout_4->addWidget(pushButton_customBgImage);


        gridLayout_3->addWidget(widget_4, 5, 1, 1, 4);


        verticalLayout->addWidget(groupBox_2);

        groupBox_icon = new QGroupBox(ConfigStyling);
        groupBox_icon->setObjectName(QString::fromUtf8("groupBox_icon"));
        groupBox_icon->setCheckable(true);
        groupBox_icon->setChecked(false);
        formLayout_2 = new QFormLayout(groupBox_icon);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_3 = new QLabel(groupBox_icon);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        comboBox_icon = new QComboBox(groupBox_icon);
        comboBox_icon->setObjectName(QString::fromUtf8("comboBox_icon"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, comboBox_icon);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_2->setItem(1, QFormLayout::FieldRole, verticalSpacer);


        verticalLayout->addWidget(groupBox_icon);


        retranslateUi(ConfigStyling);
        QObject::connect(checkBox_customBgColor, SIGNAL(toggled(bool)), pushButton_customBgColor, SLOT(setEnabled(bool)));
        QObject::connect(checkBox_customBgImage, SIGNAL(toggled(bool)), lineEdit_customBgImage, SLOT(setEnabled(bool)));
        QObject::connect(checkBox_customBgImage, SIGNAL(toggled(bool)), pushButton_customBgImage, SLOT(setEnabled(bool)));
        QObject::connect(checkBox_customFontColor, SIGNAL(toggled(bool)), pushButton_customFontColor, SLOT(setEnabled(bool)));
        QObject::connect(checkBox_customBgColor, SIGNAL(toggled(bool)), slider_opacity, SLOT(setEnabled(bool)));
        QObject::connect(checkBox_customBgColor, SIGNAL(toggled(bool)), label_2, SLOT(setEnabled(bool)));
        QObject::connect(checkBox_customBgColor, SIGNAL(toggled(bool)), compositingL, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(ConfigStyling);
    } // setupUi

    void retranslateUi(QWidget *ConfigStyling)
    {
        ConfigStyling->setWindowTitle(QCoreApplication::translate("ConfigStyling", "Configure Styling", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ConfigStyling", "Custom styling", nullptr));
        checkBox_customFontColor->setText(QCoreApplication::translate("ConfigStyling", "Font color:", nullptr));
        pushButton_customFontColor->setText(QString());
        checkBox_customBgColor->setText(QCoreApplication::translate("ConfigStyling", "Background color:", nullptr));
        pushButton_customBgColor->setText(QString());
        label_2->setText(QCoreApplication::translate("ConfigStyling", "Background opacity:", nullptr));
        compositingL->setText(QCoreApplication::translate("ConfigStyling", "<small>Compositing is required for panel transparency.</small>", nullptr));
        checkBox_customBgImage->setText(QCoreApplication::translate("ConfigStyling", "Background image:", nullptr));
        pushButton_customBgImage->setText(QString());
#if QT_CONFIG(tooltip)
        groupBox_icon->setToolTip(QCoreApplication::translate("ConfigStyling", "A partial workaround for widget styles that\n"
"cannot give a separate theme to the panel.\n"
"\n"
"You might also want to disable:\n"
"\n"
"LXQt Appearance Configuration \342\206\222\n"
"Icons Theme \342\206\222\n"
"Colorize icons based on widget style (palette)", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_icon->setTitle(QCoreApplication::translate("ConfigStyling", "Override icon &theme", nullptr));
        label_3->setText(QCoreApplication::translate("ConfigStyling", "Icon theme for panels:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigStyling: public Ui_ConfigStyling {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGSTYLING_H
