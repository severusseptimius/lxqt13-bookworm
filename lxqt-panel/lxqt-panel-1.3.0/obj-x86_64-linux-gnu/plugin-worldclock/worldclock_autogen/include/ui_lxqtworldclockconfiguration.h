/********************************************************************************
** Form generated from reading UI file 'lxqtworldclockconfiguration.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LXQTWORLDCLOCKCONFIGURATION_H
#define UI_LXQTWORLDCLOCKCONFIGURATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LXQtWorldClockConfiguration
{
public:
    QVBoxLayout *_6;
    QTabWidget *tabWidget;
    QWidget *displayFormatT;
    QVBoxLayout *_8;
    QGroupBox *timeGB;
    QFormLayout *formLayout;
    QLabel *timeFormatL;
    QComboBox *timeFormatCB;
    QWidget *timeCustomLabelW;
    QWidget *timeCustomW;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *timeShowSecondsCB;
    QCheckBox *timePadHourCB;
    QCheckBox *timeAMPMCB;
    QGroupBox *timezoneGB;
    QFormLayout *formLayout_3;
    QLabel *timezonePositionL;
    QLabel *timezoneFormatL;
    QComboBox *timezonePositionCB;
    QComboBox *timezoneFormatCB;
    QGroupBox *dateGB;
    QFormLayout *formLayout_2;
    QLabel *datePositionL;
    QComboBox *datePositionCB;
    QLabel *dateFormatL;
    QComboBox *dateFormatCB;
    QWidget *dateCustomLabelW;
    QWidget *dateCustomW;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *dateShowYearCB;
    QCheckBox *dateShowDoWCB;
    QCheckBox *datePadDayCB;
    QCheckBox *dateLongNamesCB;
    QGroupBox *advancedManualGB;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *_3;
    QPushButton *customisePB;
    QSpacerItem *_1;
    QWidget *timeZonesT;
    QHBoxLayout *_7;
    QTableWidget *timeZonesTW;
    QVBoxLayout *_2;
    QPushButton *addPB;
    QPushButton *removePB;
    QPushButton *setAsDefaultPB;
    QPushButton *editCustomNamePB;
    QPushButton *moveUpPB;
    QPushButton *moveDownPB;
    QSpacerItem *spacer;
    QWidget *generalT;
    QVBoxLayout *verticalLayout;
    QCheckBox *autorotateCB;
    QCheckBox *showWeekNumberCB;
    QCheckBox *showTooltipCB;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttons;

    void setupUi(QDialog *LXQtWorldClockConfiguration)
    {
        if (LXQtWorldClockConfiguration->objectName().isEmpty())
            LXQtWorldClockConfiguration->setObjectName(QString::fromUtf8("LXQtWorldClockConfiguration"));
        LXQtWorldClockConfiguration->resize(600, 687);
        _6 = new QVBoxLayout(LXQtWorldClockConfiguration);
        _6->setObjectName(QString::fromUtf8("_6"));
        tabWidget = new QTabWidget(LXQtWorldClockConfiguration);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        displayFormatT = new QWidget();
        displayFormatT->setObjectName(QString::fromUtf8("displayFormatT"));
        _8 = new QVBoxLayout(displayFormatT);
        _8->setObjectName(QString::fromUtf8("_8"));
        timeGB = new QGroupBox(displayFormatT);
        timeGB->setObjectName(QString::fromUtf8("timeGB"));
        formLayout = new QFormLayout(timeGB);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        timeFormatL = new QLabel(timeGB);
        timeFormatL->setObjectName(QString::fromUtf8("timeFormatL"));

        formLayout->setWidget(0, QFormLayout::LabelRole, timeFormatL);

        timeFormatCB = new QComboBox(timeGB);
        timeFormatCB->addItem(QString());
        timeFormatCB->addItem(QString());
        timeFormatCB->addItem(QString());
        timeFormatCB->setObjectName(QString::fromUtf8("timeFormatCB"));

        formLayout->setWidget(0, QFormLayout::FieldRole, timeFormatCB);

        timeCustomLabelW = new QWidget(timeGB);
        timeCustomLabelW->setObjectName(QString::fromUtf8("timeCustomLabelW"));

        formLayout->setWidget(1, QFormLayout::LabelRole, timeCustomLabelW);

        timeCustomW = new QWidget(timeGB);
        timeCustomW->setObjectName(QString::fromUtf8("timeCustomW"));
        timeCustomW->setEnabled(false);
        verticalLayout_5 = new QVBoxLayout(timeCustomW);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        timeShowSecondsCB = new QCheckBox(timeCustomW);
        timeShowSecondsCB->setObjectName(QString::fromUtf8("timeShowSecondsCB"));

        verticalLayout_5->addWidget(timeShowSecondsCB);

        timePadHourCB = new QCheckBox(timeCustomW);
        timePadHourCB->setObjectName(QString::fromUtf8("timePadHourCB"));

        verticalLayout_5->addWidget(timePadHourCB);

        timeAMPMCB = new QCheckBox(timeCustomW);
        timeAMPMCB->setObjectName(QString::fromUtf8("timeAMPMCB"));

        verticalLayout_5->addWidget(timeAMPMCB);


        formLayout->setWidget(1, QFormLayout::FieldRole, timeCustomW);


        _8->addWidget(timeGB);

        timezoneGB = new QGroupBox(displayFormatT);
        timezoneGB->setObjectName(QString::fromUtf8("timezoneGB"));
        timezoneGB->setCheckable(true);
        timezoneGB->setChecked(false);
        formLayout_3 = new QFormLayout(timezoneGB);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        timezonePositionL = new QLabel(timezoneGB);
        timezonePositionL->setObjectName(QString::fromUtf8("timezonePositionL"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, timezonePositionL);

        timezoneFormatL = new QLabel(timezoneGB);
        timezoneFormatL->setObjectName(QString::fromUtf8("timezoneFormatL"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, timezoneFormatL);

        timezonePositionCB = new QComboBox(timezoneGB);
        timezonePositionCB->addItem(QString());
        timezonePositionCB->addItem(QString());
        timezonePositionCB->addItem(QString());
        timezonePositionCB->addItem(QString());
        timezonePositionCB->setObjectName(QString::fromUtf8("timezonePositionCB"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, timezonePositionCB);

        timezoneFormatCB = new QComboBox(timezoneGB);
        timezoneFormatCB->addItem(QString());
        timezoneFormatCB->addItem(QString());
        timezoneFormatCB->addItem(QString());
        timezoneFormatCB->addItem(QString());
        timezoneFormatCB->addItem(QString());
        timezoneFormatCB->addItem(QString());
        timezoneFormatCB->setObjectName(QString::fromUtf8("timezoneFormatCB"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, timezoneFormatCB);


        _8->addWidget(timezoneGB);

        dateGB = new QGroupBox(displayFormatT);
        dateGB->setObjectName(QString::fromUtf8("dateGB"));
        dateGB->setCheckable(true);
        dateGB->setChecked(false);
        formLayout_2 = new QFormLayout(dateGB);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        datePositionL = new QLabel(dateGB);
        datePositionL->setObjectName(QString::fromUtf8("datePositionL"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, datePositionL);

        datePositionCB = new QComboBox(dateGB);
        datePositionCB->addItem(QString());
        datePositionCB->addItem(QString());
        datePositionCB->addItem(QString());
        datePositionCB->addItem(QString());
        datePositionCB->setObjectName(QString::fromUtf8("datePositionCB"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, datePositionCB);

        dateFormatL = new QLabel(dateGB);
        dateFormatL->setObjectName(QString::fromUtf8("dateFormatL"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, dateFormatL);

        dateFormatCB = new QComboBox(dateGB);
        dateFormatCB->addItem(QString());
        dateFormatCB->addItem(QString());
        dateFormatCB->addItem(QString());
        dateFormatCB->addItem(QString());
        dateFormatCB->setObjectName(QString::fromUtf8("dateFormatCB"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, dateFormatCB);

        dateCustomLabelW = new QWidget(dateGB);
        dateCustomLabelW->setObjectName(QString::fromUtf8("dateCustomLabelW"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, dateCustomLabelW);

        dateCustomW = new QWidget(dateGB);
        dateCustomW->setObjectName(QString::fromUtf8("dateCustomW"));
        dateCustomW->setEnabled(false);
        verticalLayout_3 = new QVBoxLayout(dateCustomW);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        dateShowYearCB = new QCheckBox(dateCustomW);
        dateShowYearCB->setObjectName(QString::fromUtf8("dateShowYearCB"));

        verticalLayout_3->addWidget(dateShowYearCB);

        dateShowDoWCB = new QCheckBox(dateCustomW);
        dateShowDoWCB->setObjectName(QString::fromUtf8("dateShowDoWCB"));

        verticalLayout_3->addWidget(dateShowDoWCB);

        datePadDayCB = new QCheckBox(dateCustomW);
        datePadDayCB->setObjectName(QString::fromUtf8("datePadDayCB"));

        verticalLayout_3->addWidget(datePadDayCB);

        dateLongNamesCB = new QCheckBox(dateCustomW);
        dateLongNamesCB->setObjectName(QString::fromUtf8("dateLongNamesCB"));

        verticalLayout_3->addWidget(dateLongNamesCB);


        formLayout_2->setWidget(2, QFormLayout::FieldRole, dateCustomW);


        _8->addWidget(dateGB);

        advancedManualGB = new QGroupBox(displayFormatT);
        advancedManualGB->setObjectName(QString::fromUtf8("advancedManualGB"));
        advancedManualGB->setCheckable(true);
        advancedManualGB->setChecked(false);
        verticalLayout_2 = new QVBoxLayout(advancedManualGB);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        _3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(_3);

        customisePB = new QPushButton(advancedManualGB);
        customisePB->setObjectName(QString::fromUtf8("customisePB"));

        horizontalLayout->addWidget(customisePB);


        verticalLayout_2->addLayout(horizontalLayout);


        _8->addWidget(advancedManualGB);

        _1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        _8->addItem(_1);

        tabWidget->addTab(displayFormatT, QString());
        timeZonesT = new QWidget();
        timeZonesT->setObjectName(QString::fromUtf8("timeZonesT"));
        _7 = new QHBoxLayout(timeZonesT);
        _7->setObjectName(QString::fromUtf8("_7"));
        timeZonesTW = new QTableWidget(timeZonesT);
        if (timeZonesTW->columnCount() < 2)
            timeZonesTW->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        timeZonesTW->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        timeZonesTW->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        timeZonesTW->setObjectName(QString::fromUtf8("timeZonesTW"));
        timeZonesTW->setEditTriggers(QAbstractItemView::NoEditTriggers);
        timeZonesTW->setAlternatingRowColors(true);
        timeZonesTW->setSelectionMode(QAbstractItemView::ExtendedSelection);
        timeZonesTW->setSelectionBehavior(QAbstractItemView::SelectRows);
        timeZonesTW->setColumnCount(2);
        timeZonesTW->horizontalHeader()->setStretchLastSection(true);
        timeZonesTW->verticalHeader()->setVisible(false);

        _7->addWidget(timeZonesTW);

        _2 = new QVBoxLayout();
        _2->setObjectName(QString::fromUtf8("_2"));
        addPB = new QPushButton(timeZonesT);
        addPB->setObjectName(QString::fromUtf8("addPB"));

        _2->addWidget(addPB);

        removePB = new QPushButton(timeZonesT);
        removePB->setObjectName(QString::fromUtf8("removePB"));
        removePB->setEnabled(false);

        _2->addWidget(removePB);

        setAsDefaultPB = new QPushButton(timeZonesT);
        setAsDefaultPB->setObjectName(QString::fromUtf8("setAsDefaultPB"));
        setAsDefaultPB->setEnabled(false);

        _2->addWidget(setAsDefaultPB);

        editCustomNamePB = new QPushButton(timeZonesT);
        editCustomNamePB->setObjectName(QString::fromUtf8("editCustomNamePB"));
        editCustomNamePB->setEnabled(false);

        _2->addWidget(editCustomNamePB);

        moveUpPB = new QPushButton(timeZonesT);
        moveUpPB->setObjectName(QString::fromUtf8("moveUpPB"));
        moveUpPB->setEnabled(false);

        _2->addWidget(moveUpPB);

        moveDownPB = new QPushButton(timeZonesT);
        moveDownPB->setObjectName(QString::fromUtf8("moveDownPB"));
        moveDownPB->setEnabled(false);

        _2->addWidget(moveDownPB);

        spacer = new QSpacerItem(1, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        _2->addItem(spacer);


        _7->addLayout(_2);

        tabWidget->addTab(timeZonesT, QString());
        generalT = new QWidget();
        generalT->setObjectName(QString::fromUtf8("generalT"));
        verticalLayout = new QVBoxLayout(generalT);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        autorotateCB = new QCheckBox(generalT);
        autorotateCB->setObjectName(QString::fromUtf8("autorotateCB"));
        autorotateCB->setChecked(true);

        verticalLayout->addWidget(autorotateCB);

        showWeekNumberCB = new QCheckBox(generalT);
        showWeekNumberCB->setObjectName(QString::fromUtf8("showWeekNumberCB"));
        showWeekNumberCB->setChecked(true);

        verticalLayout->addWidget(showWeekNumberCB);

        showTooltipCB = new QCheckBox(generalT);
        showTooltipCB->setObjectName(QString::fromUtf8("showTooltipCB"));

        verticalLayout->addWidget(showTooltipCB);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        tabWidget->addTab(generalT, QString());

        _6->addWidget(tabWidget);

        buttons = new QDialogButtonBox(LXQtWorldClockConfiguration);
        buttons->setObjectName(QString::fromUtf8("buttons"));
        buttons->setOrientation(Qt::Horizontal);
        buttons->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Reset);

        _6->addWidget(buttons);

#if QT_CONFIG(shortcut)
        timeFormatL->setBuddy(timeFormatCB);
        timezonePositionL->setBuddy(timezonePositionCB);
        timezoneFormatL->setBuddy(timezoneFormatCB);
        datePositionL->setBuddy(datePositionCB);
        dateFormatL->setBuddy(dateFormatCB);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(tabWidget, timeFormatCB);
        QWidget::setTabOrder(timeFormatCB, timeShowSecondsCB);
        QWidget::setTabOrder(timeShowSecondsCB, timePadHourCB);
        QWidget::setTabOrder(timePadHourCB, timeAMPMCB);
        QWidget::setTabOrder(timeAMPMCB, timezoneGB);
        QWidget::setTabOrder(timezoneGB, timezonePositionCB);
        QWidget::setTabOrder(timezonePositionCB, timezoneFormatCB);
        QWidget::setTabOrder(timezoneFormatCB, dateGB);
        QWidget::setTabOrder(dateGB, datePositionCB);
        QWidget::setTabOrder(datePositionCB, dateFormatCB);
        QWidget::setTabOrder(dateFormatCB, dateShowYearCB);
        QWidget::setTabOrder(dateShowYearCB, dateShowDoWCB);
        QWidget::setTabOrder(dateShowDoWCB, datePadDayCB);
        QWidget::setTabOrder(datePadDayCB, dateLongNamesCB);
        QWidget::setTabOrder(dateLongNamesCB, advancedManualGB);
        QWidget::setTabOrder(advancedManualGB, customisePB);
        QWidget::setTabOrder(customisePB, timeZonesTW);
        QWidget::setTabOrder(timeZonesTW, addPB);
        QWidget::setTabOrder(addPB, removePB);
        QWidget::setTabOrder(removePB, setAsDefaultPB);
        QWidget::setTabOrder(setAsDefaultPB, editCustomNamePB);
        QWidget::setTabOrder(editCustomNamePB, moveUpPB);
        QWidget::setTabOrder(moveUpPB, moveDownPB);
        QWidget::setTabOrder(moveDownPB, autorotateCB);
        QWidget::setTabOrder(autorotateCB, showWeekNumberCB);
        QWidget::setTabOrder(showWeekNumberCB, showTooltipCB);

        retranslateUi(LXQtWorldClockConfiguration);
        QObject::connect(buttons, SIGNAL(accepted()), LXQtWorldClockConfiguration, SLOT(accept()));
        QObject::connect(buttons, SIGNAL(rejected()), LXQtWorldClockConfiguration, SLOT(reject()));

        tabWidget->setCurrentIndex(0);
        timezoneFormatCB->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LXQtWorldClockConfiguration);
    } // setupUi

    void retranslateUi(QDialog *LXQtWorldClockConfiguration)
    {
        LXQtWorldClockConfiguration->setWindowTitle(QCoreApplication::translate("LXQtWorldClockConfiguration", "World Clock Settings", nullptr));
        timeGB->setTitle(QCoreApplication::translate("LXQtWorldClockConfiguration", "&Time", nullptr));
        timeFormatL->setText(QCoreApplication::translate("LXQtWorldClockConfiguration", "F&ormat:", nullptr));
        timeFormatCB->setItemText(0, QCoreApplication::translate("LXQtWorldClockConfiguration", "Short", nullptr));
        timeFormatCB->setItemText(1, QCoreApplication::translate("LXQtWorldClockConfiguration", "Long", nullptr));
        timeFormatCB->setItemText(2, QCoreApplication::translate("LXQtWorldClockConfiguration", "Custom", nullptr));

        timeShowSecondsCB->setText(QCoreApplication::translate("LXQtWorldClockConfiguration", "Sho&w seconds", nullptr));
        timePadHourCB->setText(QCoreApplication::translate("LXQtWorldClockConfiguration", "Pad &hour with zero", nullptr));
        timeAMPMCB->setText(QCoreApplication::translate("LXQtWorldClockConfiguration", "&Use 12-hour format", nullptr));
        timezoneGB->setTitle(QCoreApplication::translate("LXQtWorldClockConfiguration", "T&ime zone", nullptr));
        timezonePositionL->setText(QCoreApplication::translate("LXQtWorldClockConfiguration", "&Position:", nullptr));
        timezoneFormatL->setText(QCoreApplication::translate("LXQtWorldClockConfiguration", "For&mat:", nullptr));
        timezonePositionCB->setItemText(0, QCoreApplication::translate("LXQtWorldClockConfiguration", "Below", nullptr));
        timezonePositionCB->setItemText(1, QCoreApplication::translate("LXQtWorldClockConfiguration", "Above", nullptr));
        timezonePositionCB->setItemText(2, QCoreApplication::translate("LXQtWorldClockConfiguration", "Before", nullptr));
        timezonePositionCB->setItemText(3, QCoreApplication::translate("LXQtWorldClockConfiguration", "After", nullptr));

        timezoneFormatCB->setItemText(0, QCoreApplication::translate("LXQtWorldClockConfiguration", "Short", nullptr));
        timezoneFormatCB->setItemText(1, QCoreApplication::translate("LXQtWorldClockConfiguration", "Long", nullptr));
        timezoneFormatCB->setItemText(2, QCoreApplication::translate("LXQtWorldClockConfiguration", "Offset from UTC", nullptr));
        timezoneFormatCB->setItemText(3, QCoreApplication::translate("LXQtWorldClockConfiguration", "Abbreviation", nullptr));
        timezoneFormatCB->setItemText(4, QCoreApplication::translate("LXQtWorldClockConfiguration", "Location identifier", nullptr));
        timezoneFormatCB->setItemText(5, QCoreApplication::translate("LXQtWorldClockConfiguration", "Custom name", nullptr));

        dateGB->setTitle(QCoreApplication::translate("LXQtWorldClockConfiguration", "&Date", nullptr));
        datePositionL->setText(QCoreApplication::translate("LXQtWorldClockConfiguration", "Po&sition:", nullptr));
        datePositionCB->setItemText(0, QCoreApplication::translate("LXQtWorldClockConfiguration", "Below", nullptr));
        datePositionCB->setItemText(1, QCoreApplication::translate("LXQtWorldClockConfiguration", "Above", nullptr));
        datePositionCB->setItemText(2, QCoreApplication::translate("LXQtWorldClockConfiguration", "Before", nullptr));
        datePositionCB->setItemText(3, QCoreApplication::translate("LXQtWorldClockConfiguration", "After", nullptr));

        dateFormatL->setText(QCoreApplication::translate("LXQtWorldClockConfiguration", "Fo&rmat:", nullptr));
        dateFormatCB->setItemText(0, QCoreApplication::translate("LXQtWorldClockConfiguration", "Short", nullptr));
        dateFormatCB->setItemText(1, QCoreApplication::translate("LXQtWorldClockConfiguration", "Long", nullptr));
        dateFormatCB->setItemText(2, QCoreApplication::translate("LXQtWorldClockConfiguration", "ISO 8601", nullptr));
        dateFormatCB->setItemText(3, QCoreApplication::translate("LXQtWorldClockConfiguration", "Custom", nullptr));

        dateShowYearCB->setText(QCoreApplication::translate("LXQtWorldClockConfiguration", "Show &year", nullptr));
        dateShowDoWCB->setText(QCoreApplication::translate("LXQtWorldClockConfiguration", "Show day of wee&k", nullptr));
        datePadDayCB->setText(QCoreApplication::translate("LXQtWorldClockConfiguration", "Pad d&ay with zero", nullptr));
        dateLongNamesCB->setText(QCoreApplication::translate("LXQtWorldClockConfiguration", "&Long month and day of week names", nullptr));
        advancedManualGB->setTitle(QCoreApplication::translate("LXQtWorldClockConfiguration", "Ad&vanced manual format", nullptr));
        customisePB->setText(QCoreApplication::translate("LXQtWorldClockConfiguration", "&Customise ...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(displayFormatT), QCoreApplication::translate("LXQtWorldClockConfiguration", "Display &format", nullptr));
        QTableWidgetItem *___qtablewidgetitem = timeZonesTW->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("LXQtWorldClockConfiguration", "IANA id", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = timeZonesTW->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("LXQtWorldClockConfiguration", "Custom name", nullptr));
        addPB->setText(QCoreApplication::translate("LXQtWorldClockConfiguration", "&Add ...", nullptr));
        removePB->setText(QCoreApplication::translate("LXQtWorldClockConfiguration", "&Remove", nullptr));
        setAsDefaultPB->setText(QCoreApplication::translate("LXQtWorldClockConfiguration", "Set as &default", nullptr));
        editCustomNamePB->setText(QCoreApplication::translate("LXQtWorldClockConfiguration", "&Edit custom name ...", nullptr));
        moveUpPB->setText(QCoreApplication::translate("LXQtWorldClockConfiguration", "Move &up", nullptr));
        moveDownPB->setText(QCoreApplication::translate("LXQtWorldClockConfiguration", "Move do&wn", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(timeZonesT), QCoreApplication::translate("LXQtWorldClockConfiguration", "Time &zones", nullptr));
        autorotateCB->setText(QCoreApplication::translate("LXQtWorldClockConfiguration", "Auto&rotate when the panel is vertical", nullptr));
        showWeekNumberCB->setText(QCoreApplication::translate("LXQtWorldClockConfiguration", "Show &week numbers in popup calendar", nullptr));
        showTooltipCB->setText(QCoreApplication::translate("LXQtWorldClockConfiguration", "S&how tooltip", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(generalT), QCoreApplication::translate("LXQtWorldClockConfiguration", "&General", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LXQtWorldClockConfiguration: public Ui_LXQtWorldClockConfiguration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LXQTWORLDCLOCKCONFIGURATION_H
