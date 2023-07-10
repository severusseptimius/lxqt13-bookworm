/********************************************************************************
** Form generated from reading UI file 'lxqtsysstatconfiguration.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LXQTSYSSTATCONFIGURATION_H
#define UI_LXQTSYSSTATCONFIGURATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LXQtSysStatConfiguration
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *graphGB;
    QGridLayout *gridLayout_3;
    QLabel *sizeL;
    QLabel *intervalL;
    QLabel *titleL;
    QLabel *linesL;
    QLineEdit *titleLE;
    QSpinBox *linesSB;
    QSpinBox *sizeSB;
    QDoubleSpinBox *intervalSB;
    QGroupBox *dataGB;
    QGridLayout *gridLayout_4;
    QStackedWidget *dataSW;
    QWidget *cpuP;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *useFrequencyCB;
    QSpacerItem *verticalSpacer;
    QWidget *memP;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_4;
    QWidget *netP;
    QVBoxLayout *verticalLayout_8;
    QGridLayout *gridLayout;
    QLabel *maximumL;
    QHBoxLayout *horizontalLayout_17;
    QLabel *maximumValueL;
    QSlider *maximumHS;
    QCheckBox *logarithmicCB;
    QSpinBox *logScaleSB;
    QSpacerItem *verticalSpacer_6;
    QComboBox *typeCOB;
    QLabel *sourceL;
    QLabel *typeL;
    QComboBox *sourceCOB;
    QGroupBox *coloursGB;
    QGridLayout *gridLayout_8;
    QRadioButton *useThemeColoursRB;
    QRadioButton *useCustomColoursRB;
    QPushButton *customColoursB;
    QSpacerItem *verticalSpacer_2;
    QDialogButtonBox *buttons;

    void setupUi(QDialog *LXQtSysStatConfiguration)
    {
        if (LXQtSysStatConfiguration->objectName().isEmpty())
            LXQtSysStatConfiguration->setObjectName(QString::fromUtf8("LXQtSysStatConfiguration"));
        LXQtSysStatConfiguration->resize(399, 438);
        verticalLayout = new QVBoxLayout(LXQtSysStatConfiguration);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        graphGB = new QGroupBox(LXQtSysStatConfiguration);
        graphGB->setObjectName(QString::fromUtf8("graphGB"));
        gridLayout_3 = new QGridLayout(graphGB);
        gridLayout_3->setSpacing(4);
        gridLayout_3->setContentsMargins(4, 4, 4, 4);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        sizeL = new QLabel(graphGB);
        sizeL->setObjectName(QString::fromUtf8("sizeL"));

        gridLayout_3->addWidget(sizeL, 1, 0, 1, 1);

        intervalL = new QLabel(graphGB);
        intervalL->setObjectName(QString::fromUtf8("intervalL"));

        gridLayout_3->addWidget(intervalL, 0, 0, 1, 1);

        titleL = new QLabel(graphGB);
        titleL->setObjectName(QString::fromUtf8("titleL"));

        gridLayout_3->addWidget(titleL, 3, 0, 1, 1);

        linesL = new QLabel(graphGB);
        linesL->setObjectName(QString::fromUtf8("linesL"));

        gridLayout_3->addWidget(linesL, 2, 0, 1, 1);

        titleLE = new QLineEdit(graphGB);
        titleLE->setObjectName(QString::fromUtf8("titleLE"));

        gridLayout_3->addWidget(titleLE, 3, 1, 1, 1);

        linesSB = new QSpinBox(graphGB);
        linesSB->setObjectName(QString::fromUtf8("linesSB"));

        gridLayout_3->addWidget(linesSB, 2, 1, 1, 1);

        sizeSB = new QSpinBox(graphGB);
        sizeSB->setObjectName(QString::fromUtf8("sizeSB"));
        sizeSB->setMinimum(2);
        sizeSB->setMaximum(500);
        sizeSB->setValue(30);

        gridLayout_3->addWidget(sizeSB, 1, 1, 1, 1);

        intervalSB = new QDoubleSpinBox(graphGB);
        intervalSB->setObjectName(QString::fromUtf8("intervalSB"));
        intervalSB->setDecimals(1);
        intervalSB->setMinimum(0.100000000000000);
        intervalSB->setMaximum(60.000000000000000);
        intervalSB->setSingleStep(0.250000000000000);
        intervalSB->setValue(1.000000000000000);

        gridLayout_3->addWidget(intervalSB, 0, 1, 1, 1);

        gridLayout_3->setColumnStretch(0, 2);
        gridLayout_3->setColumnStretch(1, 3);

        verticalLayout_2->addWidget(graphGB);

        dataGB = new QGroupBox(LXQtSysStatConfiguration);
        dataGB->setObjectName(QString::fromUtf8("dataGB"));
        gridLayout_4 = new QGridLayout(dataGB);
        gridLayout_4->setSpacing(4);
        gridLayout_4->setContentsMargins(4, 4, 4, 4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        dataSW = new QStackedWidget(dataGB);
        dataSW->setObjectName(QString::fromUtf8("dataSW"));
        cpuP = new QWidget();
        cpuP->setObjectName(QString::fromUtf8("cpuP"));
        verticalLayout_4 = new QVBoxLayout(cpuP);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        useFrequencyCB = new QCheckBox(cpuP);
        useFrequencyCB->setObjectName(QString::fromUtf8("useFrequencyCB"));

        verticalLayout_4->addWidget(useFrequencyCB);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        dataSW->addWidget(cpuP);
        memP = new QWidget();
        memP->setObjectName(QString::fromUtf8("memP"));
        verticalLayout_6 = new QVBoxLayout(memP);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalSpacer_4 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_4);

        dataSW->addWidget(memP);
        netP = new QWidget();
        netP->setObjectName(QString::fromUtf8("netP"));
        verticalLayout_8 = new QVBoxLayout(netP);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        maximumL = new QLabel(netP);
        maximumL->setObjectName(QString::fromUtf8("maximumL"));

        gridLayout->addWidget(maximumL, 0, 0, 1, 1);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(4);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        maximumValueL = new QLabel(netP);
        maximumValueL->setObjectName(QString::fromUtf8("maximumValueL"));

        horizontalLayout_17->addWidget(maximumValueL);

        maximumHS = new QSlider(netP);
        maximumHS->setObjectName(QString::fromUtf8("maximumHS"));
        maximumHS->setMaximum(39);
        maximumHS->setOrientation(Qt::Horizontal);

        horizontalLayout_17->addWidget(maximumHS);

        horizontalLayout_17->setStretch(0, 2);
        horizontalLayout_17->setStretch(1, 3);

        gridLayout->addLayout(horizontalLayout_17, 0, 1, 1, 1);

        logarithmicCB = new QCheckBox(netP);
        logarithmicCB->setObjectName(QString::fromUtf8("logarithmicCB"));

        gridLayout->addWidget(logarithmicCB, 1, 0, 1, 1);

        logScaleSB = new QSpinBox(netP);
        logScaleSB->setObjectName(QString::fromUtf8("logScaleSB"));
        logScaleSB->setMinimum(1);
        logScaleSB->setMaximum(64);
        logScaleSB->setValue(4);

        gridLayout->addWidget(logScaleSB, 1, 1, 1, 1);

        gridLayout->setColumnStretch(0, 2);
        gridLayout->setColumnStretch(1, 3);

        verticalLayout_8->addLayout(gridLayout);

        verticalSpacer_6 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_6);

        dataSW->addWidget(netP);

        gridLayout_4->addWidget(dataSW, 2, 0, 1, 2);

        typeCOB = new QComboBox(dataGB);
        typeCOB->setObjectName(QString::fromUtf8("typeCOB"));

        gridLayout_4->addWidget(typeCOB, 0, 1, 1, 1);

        sourceL = new QLabel(dataGB);
        sourceL->setObjectName(QString::fromUtf8("sourceL"));

        gridLayout_4->addWidget(sourceL, 1, 0, 1, 1);

        typeL = new QLabel(dataGB);
        typeL->setObjectName(QString::fromUtf8("typeL"));

        gridLayout_4->addWidget(typeL, 0, 0, 1, 1);

        sourceCOB = new QComboBox(dataGB);
        sourceCOB->setObjectName(QString::fromUtf8("sourceCOB"));

        gridLayout_4->addWidget(sourceCOB, 1, 1, 1, 1);

        gridLayout_4->setColumnStretch(0, 2);
        gridLayout_4->setColumnStretch(1, 3);

        verticalLayout_2->addWidget(dataGB);

        coloursGB = new QGroupBox(LXQtSysStatConfiguration);
        coloursGB->setObjectName(QString::fromUtf8("coloursGB"));
        gridLayout_8 = new QGridLayout(coloursGB);
        gridLayout_8->setContentsMargins(4, 4, 4, 4);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setHorizontalSpacing(4);
        gridLayout_8->setVerticalSpacing(5);
        useThemeColoursRB = new QRadioButton(coloursGB);
        useThemeColoursRB->setObjectName(QString::fromUtf8("useThemeColoursRB"));
        useThemeColoursRB->setChecked(true);

        gridLayout_8->addWidget(useThemeColoursRB, 0, 0, 1, 1);

        useCustomColoursRB = new QRadioButton(coloursGB);
        useCustomColoursRB->setObjectName(QString::fromUtf8("useCustomColoursRB"));

        gridLayout_8->addWidget(useCustomColoursRB, 1, 0, 1, 1);

        customColoursB = new QPushButton(coloursGB);
        customColoursB->setObjectName(QString::fromUtf8("customColoursB"));

        gridLayout_8->addWidget(customColoursB, 1, 1, 1, 1);

        gridLayout_8->setColumnStretch(0, 2);
        gridLayout_8->setColumnStretch(1, 3);

        verticalLayout_2->addWidget(coloursGB);

        verticalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        verticalLayout->addLayout(verticalLayout_2);

        buttons = new QDialogButtonBox(LXQtSysStatConfiguration);
        buttons->setObjectName(QString::fromUtf8("buttons"));
        buttons->setOrientation(Qt::Horizontal);
        buttons->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Reset);

        verticalLayout->addWidget(buttons);

#if QT_CONFIG(shortcut)
        sizeL->setBuddy(sizeSB);
        intervalL->setBuddy(intervalSB);
        titleL->setBuddy(titleLE);
        linesL->setBuddy(linesSB);
        maximumL->setBuddy(maximumHS);
        sourceL->setBuddy(sourceCOB);
        typeL->setBuddy(typeCOB);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(intervalSB, sizeSB);
        QWidget::setTabOrder(sizeSB, linesSB);
        QWidget::setTabOrder(linesSB, titleLE);
        QWidget::setTabOrder(titleLE, typeCOB);
        QWidget::setTabOrder(typeCOB, sourceCOB);
        QWidget::setTabOrder(sourceCOB, useFrequencyCB);
        QWidget::setTabOrder(useFrequencyCB, maximumHS);
        QWidget::setTabOrder(maximumHS, logarithmicCB);
        QWidget::setTabOrder(logarithmicCB, logScaleSB);
        QWidget::setTabOrder(logScaleSB, useThemeColoursRB);
        QWidget::setTabOrder(useThemeColoursRB, useCustomColoursRB);
        QWidget::setTabOrder(useCustomColoursRB, customColoursB);
        QWidget::setTabOrder(customColoursB, buttons);

        retranslateUi(LXQtSysStatConfiguration);
        QObject::connect(buttons, SIGNAL(accepted()), LXQtSysStatConfiguration, SLOT(accept()));
        QObject::connect(buttons, SIGNAL(rejected()), LXQtSysStatConfiguration, SLOT(reject()));
        QObject::connect(typeCOB, SIGNAL(currentIndexChanged(int)), dataSW, SLOT(setCurrentIndex(int)));
        QObject::connect(useCustomColoursRB, SIGNAL(toggled(bool)), customColoursB, SLOT(setEnabled(bool)));

        dataSW->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LXQtSysStatConfiguration);
    } // setupUi

    void retranslateUi(QDialog *LXQtSysStatConfiguration)
    {
        LXQtSysStatConfiguration->setWindowTitle(QCoreApplication::translate("LXQtSysStatConfiguration", "System Statistics Settings", nullptr));
        graphGB->setTitle(QCoreApplication::translate("LXQtSysStatConfiguration", "Graph", nullptr));
        sizeL->setText(QCoreApplication::translate("LXQtSysStatConfiguration", "&Minimal size", nullptr));
        intervalL->setText(QCoreApplication::translate("LXQtSysStatConfiguration", "Update &interval", nullptr));
        titleL->setText(QCoreApplication::translate("LXQtSysStatConfiguration", "&Title", nullptr));
        linesL->setText(QCoreApplication::translate("LXQtSysStatConfiguration", "&Grid lines", nullptr));
#if QT_CONFIG(tooltip)
        sizeSB->setToolTip(QCoreApplication::translate("LXQtSysStatConfiguration", "<html><head/><body><p>Minimal width if the panel is horizontal.</p><p>Minimal height if the panel is vertical.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        sizeSB->setSuffix(QCoreApplication::translate("LXQtSysStatConfiguration", " px", nullptr));
        intervalSB->setSuffix(QCoreApplication::translate("LXQtSysStatConfiguration", " s", nullptr));
        dataGB->setTitle(QCoreApplication::translate("LXQtSysStatConfiguration", "Data", nullptr));
        useFrequencyCB->setText(QCoreApplication::translate("LXQtSysStatConfiguration", "Use &frequency", nullptr));
        maximumL->setText(QCoreApplication::translate("LXQtSysStatConfiguration", "Ma&ximum", nullptr));
        maximumValueL->setText(QCoreApplication::translate("LXQtSysStatConfiguration", "XXX KBs", nullptr));
        logarithmicCB->setText(QCoreApplication::translate("LXQtSysStatConfiguration", "Lo&garithmic scale", nullptr));
        logScaleSB->setSuffix(QCoreApplication::translate("LXQtSysStatConfiguration", " steps", nullptr));
        sourceL->setText(QCoreApplication::translate("LXQtSysStatConfiguration", "&Source", nullptr));
        typeL->setText(QCoreApplication::translate("LXQtSysStatConfiguration", "T&ype", nullptr));
        coloursGB->setTitle(QCoreApplication::translate("LXQtSysStatConfiguration", "Colours", nullptr));
        useThemeColoursRB->setText(QCoreApplication::translate("LXQtSysStatConfiguration", "Use t&heme colours", nullptr));
        useCustomColoursRB->setText(QCoreApplication::translate("LXQtSysStatConfiguration", "Use c&ustom colours", nullptr));
        customColoursB->setText(QCoreApplication::translate("LXQtSysStatConfiguration", "Custom colour ...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LXQtSysStatConfiguration: public Ui_LXQtSysStatConfiguration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LXQTSYSSTATCONFIGURATION_H
