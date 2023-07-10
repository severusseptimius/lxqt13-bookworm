/********************************************************************************
** Form generated from reading UI file 'statusnotifierconfiguration.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATUSNOTIFIERCONFIGURATION_H
#define UI_STATUSNOTIFIERCONFIGURATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_StatusNotifierConfiguration
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *attentionSB;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *tableWidget;
    QDialogButtonBox *buttons;

    void setupUi(QDialog *StatusNotifierConfiguration)
    {
        if (StatusNotifierConfiguration->objectName().isEmpty())
            StatusNotifierConfiguration->setObjectName(QString::fromUtf8("StatusNotifierConfiguration"));
        StatusNotifierConfiguration->resize(400, 400);
        verticalLayout = new QVBoxLayout(StatusNotifierConfiguration);
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(StatusNotifierConfiguration);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        attentionSB = new QSpinBox(StatusNotifierConfiguration);
        attentionSB->setObjectName(QString::fromUtf8("attentionSB"));
        attentionSB->setMinimum(1);
        attentionSB->setMaximum(60);

        horizontalLayout->addWidget(attentionSB);

        horizontalSpacer = new QSpacerItem(5, 5, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        groupBox = new QGroupBox(StatusNotifierConfiguration);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tableWidget = new QTableWidget(groupBox);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->verticalHeader()->setVisible(false);

        verticalLayout_2->addWidget(tableWidget);


        verticalLayout->addWidget(groupBox);

        buttons = new QDialogButtonBox(StatusNotifierConfiguration);
        buttons->setObjectName(QString::fromUtf8("buttons"));
        buttons->setOrientation(Qt::Horizontal);
        buttons->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Reset);

        verticalLayout->addWidget(buttons);


        retranslateUi(StatusNotifierConfiguration);
        QObject::connect(buttons, SIGNAL(accepted()), StatusNotifierConfiguration, SLOT(accept()));
        QObject::connect(buttons, SIGNAL(rejected()), StatusNotifierConfiguration, SLOT(reject()));

        QMetaObject::connectSlotsByName(StatusNotifierConfiguration);
    } // setupUi

    void retranslateUi(QDialog *StatusNotifierConfiguration)
    {
        StatusNotifierConfiguration->setWindowTitle(QCoreApplication::translate("StatusNotifierConfiguration", "Status Notifier Settings", nullptr));
#if QT_CONFIG(tooltip)
        label->setToolTip(QCoreApplication::translate("StatusNotifierConfiguration", "An auto-hiding item will remain visible for this period if it needs attention.", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("StatusNotifierConfiguration", "Attention period:", nullptr));
#if QT_CONFIG(tooltip)
        attentionSB->setToolTip(QCoreApplication::translate("StatusNotifierConfiguration", "An auto-hiding item will remain visible for this period if it needs attention.", nullptr));
#endif // QT_CONFIG(tooltip)
        attentionSB->setSuffix(QCoreApplication::translate("StatusNotifierConfiguration", " minute(s)", nullptr));
        groupBox->setTitle(QCoreApplication::translate("StatusNotifierConfiguration", "Change visibility of items", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("StatusNotifierConfiguration", "Item", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("StatusNotifierConfiguration", "Visibility", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StatusNotifierConfiguration: public Ui_StatusNotifierConfiguration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATUSNOTIFIERCONFIGURATION_H
