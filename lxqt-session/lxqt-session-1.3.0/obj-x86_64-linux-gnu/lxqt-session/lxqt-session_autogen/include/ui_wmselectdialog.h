/********************************************************************************
** Form generated from reading UI file 'wmselectdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WMSELECTDIALOG_H
#define UI_WMSELECTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_WmSelectDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTreeWidget *wmList;
    QLabel *label_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *WmSelectDialog)
    {
        if (WmSelectDialog->objectName().isEmpty())
            WmSelectDialog->setObjectName(QString::fromUtf8("WmSelectDialog"));
        WmSelectDialog->resize(600, 400);
        verticalLayout = new QVBoxLayout(WmSelectDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(WmSelectDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        wmList = new QTreeWidget(WmSelectDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(1, QString::fromUtf8("2"));
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        wmList->setHeaderItem(__qtreewidgetitem);
        wmList->setObjectName(QString::fromUtf8("wmList"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        wmList->setFont(font);
        wmList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        wmList->setAlternatingRowColors(true);
        wmList->setRootIsDecorated(false);
        wmList->setUniformRowHeights(true);
        wmList->setAllColumnsShowFocus(true);
        wmList->setColumnCount(2);
        wmList->header()->setVisible(false);

        verticalLayout->addWidget(wmList);

        label_2 = new QLabel(WmSelectDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setWordWrap(true);

        verticalLayout->addWidget(label_2);

        buttonBox = new QDialogButtonBox(WmSelectDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(WmSelectDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), WmSelectDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), WmSelectDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(WmSelectDialog);
    } // setupUi

    void retranslateUi(QDialog *WmSelectDialog)
    {
        WmSelectDialog->setWindowTitle(QCoreApplication::translate("WmSelectDialog", "Welcome to LXQt", nullptr));
        label->setText(QCoreApplication::translate("WmSelectDialog", "<html><head/><body><p><span style=\" font-weight:600;\">Welcome to LXQt</span></p><p>Please select your default Window Manager.</p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("WmSelectDialog", "You will be able to change this at any time through Preferences -> Session Settings -> Basic Settings.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WmSelectDialog: public Ui_WmSelectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WMSELECTDIALOG_H
