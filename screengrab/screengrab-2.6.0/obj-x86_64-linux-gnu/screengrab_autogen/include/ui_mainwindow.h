/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *scrLabel;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labTypeScr;
    QComboBox *cbxTypeScr;
    QSpacerItem *horizontalSpacer_5;
    QLabel *labDelay;
    QSpinBox *delayBox;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *checkZommMouseArea;
    QCheckBox *checkNoDecoration;
    QCheckBox *checkIncludeCursor;
    QSpacerItem *horizontalSpacer_4;
    QToolBar *toolBar;

    void setupUi(QMainWindow *ScreenGrab)
    {
        if (ScreenGrab->objectName().isEmpty())
            ScreenGrab->setObjectName(QString::fromUtf8("ScreenGrab"));
        ScreenGrab->resize(640, 498);
        centralwidget = new QWidget(ScreenGrab);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrLabel = new QLabel(centralwidget);
        scrLabel->setObjectName(QString::fromUtf8("scrLabel"));
        sizePolicy.setHeightForWidth(scrLabel->sizePolicy().hasHeightForWidth());
        scrLabel->setSizePolicy(sizePolicy);
        scrLabel->setMinimumSize(QSize(600, 400));
        scrLabel->setFrameShape(QFrame::StyledPanel);
        scrLabel->setFrameShadow(QFrame::Sunken);
        scrLabel->setText(QString::fromUtf8(""));
        scrLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(scrLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(5, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        labTypeScr = new QLabel(centralwidget);
        labTypeScr->setObjectName(QString::fromUtf8("labTypeScr"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labTypeScr->sizePolicy().hasHeightForWidth());
        labTypeScr->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(labTypeScr);

        cbxTypeScr = new QComboBox(centralwidget);
        cbxTypeScr->addItem(QString());
        cbxTypeScr->addItem(QString());
        cbxTypeScr->addItem(QString());
        cbxTypeScr->addItem(QString());
        cbxTypeScr->setObjectName(QString::fromUtf8("cbxTypeScr"));
        cbxTypeScr->setEnabled(true);

        horizontalLayout_2->addWidget(cbxTypeScr);

        horizontalSpacer_5 = new QSpacerItem(20, 5, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        labDelay = new QLabel(centralwidget);
        labDelay->setObjectName(QString::fromUtf8("labDelay"));
        sizePolicy1.setHeightForWidth(labDelay->sizePolicy().hasHeightForWidth());
        labDelay->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(labDelay);

        delayBox = new QSpinBox(centralwidget);
        delayBox->setObjectName(QString::fromUtf8("delayBox"));
        sizePolicy1.setHeightForWidth(delayBox->sizePolicy().hasHeightForWidth());
        delayBox->setSizePolicy(sizePolicy1);
        delayBox->setMaximum(90);

        horizontalLayout_2->addWidget(delayBox);

        horizontalSpacer = new QSpacerItem(5, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(5, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        checkZommMouseArea = new QCheckBox(centralwidget);
        checkZommMouseArea->setObjectName(QString::fromUtf8("checkZommMouseArea"));

        horizontalLayout->addWidget(checkZommMouseArea);

        checkNoDecoration = new QCheckBox(centralwidget);
        checkNoDecoration->setObjectName(QString::fromUtf8("checkNoDecoration"));

        horizontalLayout->addWidget(checkNoDecoration);

        checkIncludeCursor = new QCheckBox(centralwidget);
        checkIncludeCursor->setObjectName(QString::fromUtf8("checkIncludeCursor"));

        horizontalLayout->addWidget(checkIncludeCursor);

        horizontalSpacer_4 = new QSpacerItem(5, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout);

        ScreenGrab->setCentralWidget(centralwidget);
        toolBar = new QToolBar(ScreenGrab);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(toolBar->sizePolicy().hasHeightForWidth());
        toolBar->setSizePolicy(sizePolicy2);
        toolBar->setFloatable(false);
        ScreenGrab->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(ScreenGrab);

        cbxTypeScr->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ScreenGrab);
    } // setupUi

    void retranslateUi(QMainWindow *ScreenGrab)
    {
        ScreenGrab->setWindowTitle(QCoreApplication::translate("MainWindow", "ScreenGrab", nullptr));
        labTypeScr->setText(QCoreApplication::translate("MainWindow", "Type:", nullptr));
        cbxTypeScr->setItemText(0, QCoreApplication::translate("MainWindow", "Full screen", nullptr));
        cbxTypeScr->setItemText(1, QCoreApplication::translate("MainWindow", "Window", nullptr));
        cbxTypeScr->setItemText(2, QCoreApplication::translate("MainWindow", "Screen area", nullptr));
        cbxTypeScr->setItemText(3, QCoreApplication::translate("MainWindow", "Last selected area", nullptr));

#if QT_CONFIG(tooltip)
        cbxTypeScr->setToolTip(QCoreApplication::translate("MainWindow", "Type of screenshot", nullptr));
#endif // QT_CONFIG(tooltip)
        labDelay->setText(QCoreApplication::translate("MainWindow", "Delay:", nullptr));
#if QT_CONFIG(tooltip)
        delayBox->setToolTip(QCoreApplication::translate("MainWindow", "Delay in seconds before taking screenshot", nullptr));
#endif // QT_CONFIG(tooltip)
        delayBox->setSpecialValueText(QCoreApplication::translate("MainWindow", "None", nullptr));
        delayBox->setSuffix(QCoreApplication::translate("MainWindow", " sec", nullptr));
        checkZommMouseArea->setText(QCoreApplication::translate("MainWindow", "Zoom area around mouse", nullptr));
        checkNoDecoration->setText(QCoreApplication::translate("MainWindow", "No window decoration", nullptr));
        checkIncludeCursor->setText(QCoreApplication::translate("MainWindow", "Include mouse pointer", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
