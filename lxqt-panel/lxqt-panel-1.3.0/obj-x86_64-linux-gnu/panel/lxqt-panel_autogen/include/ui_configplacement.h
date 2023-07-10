/********************************************************************************
** Form generated from reading UI file 'configplacement.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGPLACEMENT_H
#define UI_CONFIGPLACEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigPlacement
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_size;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_8;
    QGridLayout *gridLayout_4;
    QSpinBox *spinBox_length;
    QLabel *label;
    QLabel *label_length;
    QComboBox *comboBox_lengthType;
    QSpinBox *spinBox_panelSize;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_9;
    QGridLayout *gridLayout;
    QSpinBox *spinBox_iconSize;
    QLabel *label_iconSize;
    QLabel *label_lineCount;
    QSpinBox *spinBox_lineCount;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label_alignment;
    QComboBox *comboBox_alignment;
    QLabel *label_position;
    QComboBox *comboBox_position;
    QGroupBox *groupBox_hidable;
    QGridLayout *gridLayout_2;
    QLabel *label_animation;
    QSpacerItem *horizontalSpacer_3;
    QSpinBox *spinBox_animation;
    QLabel *label_delay;
    QSpinBox *spinBox_delay;
    QCheckBox *checkBox_visibleMargin;
    QCheckBox *checkBox_overlap;
    QCheckBox *checkBox_reserveSpace;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ConfigPlacement)
    {
        if (ConfigPlacement->objectName().isEmpty())
            ConfigPlacement->setObjectName(QString::fromUtf8("ConfigPlacement"));
        ConfigPlacement->resize(382, 359);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ConfigPlacement->sizePolicy().hasHeightForWidth());
        ConfigPlacement->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(ConfigPlacement);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 1);
        groupBox_size = new QGroupBox(ConfigPlacement);
        groupBox_size->setObjectName(QString::fromUtf8("groupBox_size"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_size->sizePolicy().hasHeightForWidth());
        groupBox_size->setSizePolicy(sizePolicy1);
        groupBox_size->setCheckable(false);
        horizontalLayout_2 = new QHBoxLayout(groupBox_size);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        widget_8 = new QWidget(groupBox_size);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        gridLayout_4 = new QGridLayout(widget_8);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        spinBox_length = new QSpinBox(widget_8);
        spinBox_length->setObjectName(QString::fromUtf8("spinBox_length"));
        spinBox_length->setMinimum(1);
        spinBox_length->setMaximum(100);

        gridLayout_4->addWidget(spinBox_length, 1, 1, 1, 1);

        label = new QLabel(widget_8);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        label_length = new QLabel(widget_8);
        label_length->setObjectName(QString::fromUtf8("label_length"));

        gridLayout_4->addWidget(label_length, 1, 0, 1, 1);

        comboBox_lengthType = new QComboBox(widget_8);
        comboBox_lengthType->addItem(QString());
        comboBox_lengthType->addItem(QString());
        comboBox_lengthType->setObjectName(QString::fromUtf8("comboBox_lengthType"));

        gridLayout_4->addWidget(comboBox_lengthType, 1, 2, 1, 1);

        spinBox_panelSize = new QSpinBox(widget_8);
        spinBox_panelSize->setObjectName(QString::fromUtf8("spinBox_panelSize"));
        spinBox_panelSize->setValue(24);

        gridLayout_4->addWidget(spinBox_panelSize, 0, 1, 1, 2);


        horizontalLayout_2->addWidget(widget_8);

        horizontalSpacer = new QSpacerItem(5, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        widget_9 = new QWidget(groupBox_size);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        gridLayout = new QGridLayout(widget_9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        spinBox_iconSize = new QSpinBox(widget_9);
        spinBox_iconSize->setObjectName(QString::fromUtf8("spinBox_iconSize"));
        spinBox_iconSize->setMinimum(10);
        spinBox_iconSize->setMaximum(128);

        gridLayout->addWidget(spinBox_iconSize, 0, 1, 1, 1);

        label_iconSize = new QLabel(widget_9);
        label_iconSize->setObjectName(QString::fromUtf8("label_iconSize"));

        gridLayout->addWidget(label_iconSize, 0, 0, 1, 1);

        label_lineCount = new QLabel(widget_9);
        label_lineCount->setObjectName(QString::fromUtf8("label_lineCount"));

        gridLayout->addWidget(label_lineCount, 1, 0, 1, 1);

        spinBox_lineCount = new QSpinBox(widget_9);
        spinBox_lineCount->setObjectName(QString::fromUtf8("spinBox_lineCount"));
        spinBox_lineCount->setMinimum(1);
        spinBox_lineCount->setMaximum(20);

        gridLayout->addWidget(spinBox_lineCount, 1, 1, 1, 1);


        horizontalLayout_2->addWidget(widget_9);


        verticalLayout->addWidget(groupBox_size);

        groupBox = new QGroupBox(ConfigPlacement);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_alignment = new QLabel(groupBox);
        label_alignment->setObjectName(QString::fromUtf8("label_alignment"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_alignment);

        comboBox_alignment = new QComboBox(groupBox);
        comboBox_alignment->addItem(QString());
        comboBox_alignment->addItem(QString());
        comboBox_alignment->addItem(QString());
        comboBox_alignment->setObjectName(QString::fromUtf8("comboBox_alignment"));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBox_alignment);

        label_position = new QLabel(groupBox);
        label_position->setObjectName(QString::fromUtf8("label_position"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_position);

        comboBox_position = new QComboBox(groupBox);
        comboBox_position->setObjectName(QString::fromUtf8("comboBox_position"));

        formLayout->setWidget(1, QFormLayout::FieldRole, comboBox_position);

        groupBox_hidable = new QGroupBox(groupBox);
        groupBox_hidable->setObjectName(QString::fromUtf8("groupBox_hidable"));
        groupBox_hidable->setEnabled(true);
        groupBox_hidable->setCheckable(true);
        groupBox_hidable->setChecked(false);
        gridLayout_2 = new QGridLayout(groupBox_hidable);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_animation = new QLabel(groupBox_hidable);
        label_animation->setObjectName(QString::fromUtf8("label_animation"));

        gridLayout_2->addWidget(label_animation, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(102, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        spinBox_animation = new QSpinBox(groupBox_hidable);
        spinBox_animation->setObjectName(QString::fromUtf8("spinBox_animation"));
        spinBox_animation->setMaximum(500);
        spinBox_animation->setSingleStep(50);

        gridLayout_2->addWidget(spinBox_animation, 0, 2, 1, 1);

        label_delay = new QLabel(groupBox_hidable);
        label_delay->setObjectName(QString::fromUtf8("label_delay"));

        gridLayout_2->addWidget(label_delay, 1, 0, 1, 1);

        spinBox_delay = new QSpinBox(groupBox_hidable);
        spinBox_delay->setObjectName(QString::fromUtf8("spinBox_delay"));
        spinBox_delay->setMaximum(2000);
        spinBox_delay->setSingleStep(50);

        gridLayout_2->addWidget(spinBox_delay, 1, 2, 1, 1);

        checkBox_visibleMargin = new QCheckBox(groupBox_hidable);
        checkBox_visibleMargin->setObjectName(QString::fromUtf8("checkBox_visibleMargin"));

        gridLayout_2->addWidget(checkBox_visibleMargin, 2, 0, 1, 3);

        checkBox_overlap = new QCheckBox(groupBox_hidable);
        checkBox_overlap->setObjectName(QString::fromUtf8("checkBox_overlap"));

        gridLayout_2->addWidget(checkBox_overlap, 3, 0, 1, 3);


        formLayout->setWidget(2, QFormLayout::SpanningRole, groupBox_hidable);

        checkBox_reserveSpace = new QCheckBox(groupBox);
        checkBox_reserveSpace->setObjectName(QString::fromUtf8("checkBox_reserveSpace"));

        formLayout->setWidget(3, QFormLayout::SpanningRole, checkBox_reserveSpace);


        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(ConfigPlacement);

        comboBox_alignment->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(ConfigPlacement);
    } // setupUi

    void retranslateUi(QWidget *ConfigPlacement)
    {
        ConfigPlacement->setWindowTitle(QCoreApplication::translate("ConfigPlacement", "Configure placement", nullptr));
        groupBox_size->setTitle(QCoreApplication::translate("ConfigPlacement", "Size", nullptr));
#if QT_CONFIG(tooltip)
        spinBox_length->setToolTip(QCoreApplication::translate("ConfigPlacement", "<p>Negative pixel value sets the panel length to that many pixels less than available screen space.</p><p/><p><i>E.g. \"Length\" set to -100px, screen size is 1000px, then real panel length will be 900 px.</i></p>", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("ConfigPlacement", "Size:", nullptr));
        label_length->setText(QCoreApplication::translate("ConfigPlacement", "Length:", nullptr));
        comboBox_lengthType->setItemText(0, QCoreApplication::translate("ConfigPlacement", "%", nullptr));
        comboBox_lengthType->setItemText(1, QCoreApplication::translate("ConfigPlacement", "px", nullptr));

        spinBox_panelSize->setSuffix(QCoreApplication::translate("ConfigPlacement", " px", nullptr));
        spinBox_iconSize->setSuffix(QCoreApplication::translate("ConfigPlacement", " px", nullptr));
        label_iconSize->setText(QCoreApplication::translate("ConfigPlacement", "Icon size:", nullptr));
        label_lineCount->setText(QCoreApplication::translate("ConfigPlacement", "Rows:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ConfigPlacement", "Alignment && position", nullptr));
        label_alignment->setText(QCoreApplication::translate("ConfigPlacement", "Alignment:", nullptr));
        comboBox_alignment->setItemText(0, QCoreApplication::translate("ConfigPlacement", "Left", nullptr));
        comboBox_alignment->setItemText(1, QCoreApplication::translate("ConfigPlacement", "Center", nullptr));
        comboBox_alignment->setItemText(2, QCoreApplication::translate("ConfigPlacement", "Right", nullptr));

        label_position->setText(QCoreApplication::translate("ConfigPlacement", "Position:", nullptr));
        groupBox_hidable->setTitle(QCoreApplication::translate("ConfigPlacement", "A&uto-hide", nullptr));
#if QT_CONFIG(tooltip)
        label_animation->setToolTip(QCoreApplication::translate("ConfigPlacement", "Zero means no animation", nullptr));
#endif // QT_CONFIG(tooltip)
        label_animation->setText(QCoreApplication::translate("ConfigPlacement", "Animation duration:", nullptr));
#if QT_CONFIG(tooltip)
        spinBox_animation->setToolTip(QCoreApplication::translate("ConfigPlacement", "Zero means no animation", nullptr));
#endif // QT_CONFIG(tooltip)
        spinBox_animation->setSuffix(QCoreApplication::translate("ConfigPlacement", " ms", nullptr));
#if QT_CONFIG(tooltip)
        label_delay->setToolTip(QCoreApplication::translate("ConfigPlacement", "Zero means no delay", nullptr));
#endif // QT_CONFIG(tooltip)
        label_delay->setText(QCoreApplication::translate("ConfigPlacement", "Show with delay:", nullptr));
#if QT_CONFIG(tooltip)
        spinBox_delay->setToolTip(QCoreApplication::translate("ConfigPlacement", "Zero means no delay", nullptr));
#endif // QT_CONFIG(tooltip)
        spinBox_delay->setSuffix(QCoreApplication::translate("ConfigPlacement", " ms", nullptr));
        checkBox_visibleMargin->setText(QCoreApplication::translate("ConfigPlacement", "Visible thin margin for hidden panel", nullptr));
        checkBox_overlap->setText(QCoreApplication::translate("ConfigPlacement", "Hide only on overlapping a window", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_reserveSpace->setToolTip(QCoreApplication::translate("ConfigPlacement", "Don't allow maximized windows go under the panel window", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_reserveSpace->setText(QCoreApplication::translate("ConfigPlacement", "Reserve space on display", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigPlacement: public Ui_ConfigPlacement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGPLACEMENT_H
