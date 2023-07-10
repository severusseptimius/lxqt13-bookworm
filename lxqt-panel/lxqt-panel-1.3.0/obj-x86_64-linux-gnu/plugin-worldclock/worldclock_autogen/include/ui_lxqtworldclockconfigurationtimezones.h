/********************************************************************************
** Form generated from reading UI file 'lxqtworldclockconfigurationtimezones.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LXQTWORLDCLOCKCONFIGURATIONTIMEZONES_H
#define UI_LXQTWORLDCLOCKCONFIGURATIONTIMEZONES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LXQtWorldClockConfigurationTimeZones
{
public:
    QVBoxLayout *verticalLayout_3;
    QTreeWidget *timeZonesTW;
    QDialogButtonBox *buttons;

    void setupUi(QDialog *LXQtWorldClockConfigurationTimeZones)
    {
        if (LXQtWorldClockConfigurationTimeZones->objectName().isEmpty())
            LXQtWorldClockConfigurationTimeZones->setObjectName(QString::fromUtf8("LXQtWorldClockConfigurationTimeZones"));
        LXQtWorldClockConfigurationTimeZones->resize(718, 280);
        verticalLayout_3 = new QVBoxLayout(LXQtWorldClockConfigurationTimeZones);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        timeZonesTW = new QTreeWidget(LXQtWorldClockConfigurationTimeZones);
        timeZonesTW->setObjectName(QString::fromUtf8("timeZonesTW"));
        timeZonesTW->setEditTriggers(QAbstractItemView::NoEditTriggers);
        timeZonesTW->setAlternatingRowColors(true);
        timeZonesTW->setSortingEnabled(true);
        timeZonesTW->setColumnCount(4);
        timeZonesTW->header()->setDefaultSectionSize(150);

        verticalLayout_3->addWidget(timeZonesTW);

        buttons = new QDialogButtonBox(LXQtWorldClockConfigurationTimeZones);
        buttons->setObjectName(QString::fromUtf8("buttons"));
        buttons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttons);

        QWidget::setTabOrder(timeZonesTW, buttons);

        retranslateUi(LXQtWorldClockConfigurationTimeZones);
        QObject::connect(buttons, SIGNAL(accepted()), LXQtWorldClockConfigurationTimeZones, SLOT(accept()));
        QObject::connect(buttons, SIGNAL(rejected()), LXQtWorldClockConfigurationTimeZones, SLOT(reject()));

        QMetaObject::connectSlotsByName(LXQtWorldClockConfigurationTimeZones);
    } // setupUi

    void retranslateUi(QDialog *LXQtWorldClockConfigurationTimeZones)
    {
        LXQtWorldClockConfigurationTimeZones->setWindowTitle(QCoreApplication::translate("LXQtWorldClockConfigurationTimeZones", "World Clock Time Zones", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = timeZonesTW->headerItem();
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("LXQtWorldClockConfigurationTimeZones", "Country", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("LXQtWorldClockConfigurationTimeZones", "Comment", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("LXQtWorldClockConfigurationTimeZones", "Name", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("LXQtWorldClockConfigurationTimeZones", "Time zone", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LXQtWorldClockConfigurationTimeZones: public Ui_LXQtWorldClockConfigurationTimeZones {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LXQTWORLDCLOCKCONFIGURATIONTIMEZONES_H
