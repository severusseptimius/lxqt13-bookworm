/********************************************************************************
** Form generated from reading UI file 'shortcuts.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHORTCUTS_H
#define UI_SHORTCUTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_HiddenShortcutsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *HiddenShortcutsDialog)
    {
        if (HiddenShortcutsDialog->objectName().isEmpty())
            HiddenShortcutsDialog->setObjectName(QString::fromUtf8("HiddenShortcutsDialog"));
        HiddenShortcutsDialog->resize(500, 400);
        verticalLayout = new QVBoxLayout(HiddenShortcutsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        treeWidget = new QTreeWidget(HiddenShortcutsDialog);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));

        verticalLayout->addWidget(treeWidget);

        buttonBox = new QDialogButtonBox(HiddenShortcutsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(HiddenShortcutsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), HiddenShortcutsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), HiddenShortcutsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(HiddenShortcutsDialog);
    } // setupUi

    void retranslateUi(QDialog *HiddenShortcutsDialog)
    {
        HiddenShortcutsDialog->setWindowTitle(QCoreApplication::translate("HiddenShortcutsDialog", "Hidden Shortcuts", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("HiddenShortcutsDialog", "Action", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("HiddenShortcutsDialog", "Shortcut", nullptr));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(1, QCoreApplication::translate("HiddenShortcutsDialog", "Focus view, clear filter bar", nullptr));
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("HiddenShortcutsDialog", "Esc", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(1, QCoreApplication::translate("HiddenShortcutsDialog", "Focus side-pane", nullptr));
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("HiddenShortcutsDialog", "Ctrl+Esc", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem3->setText(1, QCoreApplication::translate("HiddenShortcutsDialog", "Focus path entry", nullptr));
        ___qtreewidgetitem3->setText(0, QCoreApplication::translate("HiddenShortcutsDialog", "Ctrl+L", nullptr));
        QTreeWidgetItem *___qtreewidgetitem4 = treeWidget->topLevelItem(3);
        ___qtreewidgetitem4->setText(1, QCoreApplication::translate("HiddenShortcutsDialog", "Focus path entry", nullptr));
        ___qtreewidgetitem4->setText(0, QCoreApplication::translate("HiddenShortcutsDialog", "Alt+D", nullptr));
        QTreeWidgetItem *___qtreewidgetitem5 = treeWidget->topLevelItem(4);
        ___qtreewidgetitem5->setText(1, QCoreApplication::translate("HiddenShortcutsDialog", "Next tab", nullptr));
        ___qtreewidgetitem5->setText(0, QCoreApplication::translate("HiddenShortcutsDialog", "Ctrl+Tab", nullptr));
        QTreeWidgetItem *___qtreewidgetitem6 = treeWidget->topLevelItem(5);
        ___qtreewidgetitem6->setText(1, QCoreApplication::translate("HiddenShortcutsDialog", "Previous tab", nullptr));
        ___qtreewidgetitem6->setText(0, QCoreApplication::translate("HiddenShortcutsDialog", "Ctrl+Shift+Tab", nullptr));
        QTreeWidgetItem *___qtreewidgetitem7 = treeWidget->topLevelItem(6);
        ___qtreewidgetitem7->setText(1, QCoreApplication::translate("HiddenShortcutsDialog", "Next tab", nullptr));
        ___qtreewidgetitem7->setText(0, QCoreApplication::translate("HiddenShortcutsDialog", "Ctrl+PageDown", nullptr));
        QTreeWidgetItem *___qtreewidgetitem8 = treeWidget->topLevelItem(7);
        ___qtreewidgetitem8->setText(1, QCoreApplication::translate("HiddenShortcutsDialog", "Previous tab", nullptr));
        ___qtreewidgetitem8->setText(0, QCoreApplication::translate("HiddenShortcutsDialog", "Ctrl+PageUp", nullptr));
        QTreeWidgetItem *___qtreewidgetitem9 = treeWidget->topLevelItem(8);
        ___qtreewidgetitem9->setText(1, QCoreApplication::translate("HiddenShortcutsDialog", "Jump to tab", nullptr));
        ___qtreewidgetitem9->setText(0, QCoreApplication::translate("HiddenShortcutsDialog", "Ctrl+Number", nullptr));
        QTreeWidgetItem *___qtreewidgetitem10 = treeWidget->topLevelItem(9);
        ___qtreewidgetitem10->setText(1, QCoreApplication::translate("HiddenShortcutsDialog", "Jump to tab", nullptr));
        ___qtreewidgetitem10->setText(0, QCoreApplication::translate("HiddenShortcutsDialog", "Alt+Number", nullptr));
        QTreeWidgetItem *___qtreewidgetitem11 = treeWidget->topLevelItem(10);
        ___qtreewidgetitem11->setText(1, QCoreApplication::translate("HiddenShortcutsDialog", "Go up", nullptr));
        ___qtreewidgetitem11->setText(0, QCoreApplication::translate("HiddenShortcutsDialog", "Backspace", nullptr));
        QTreeWidgetItem *___qtreewidgetitem12 = treeWidget->topLevelItem(11);
        ___qtreewidgetitem12->setText(1, QCoreApplication::translate("HiddenShortcutsDialog", "Search dialog", nullptr));
        ___qtreewidgetitem12->setText(0, QCoreApplication::translate("HiddenShortcutsDialog", "Ctrl+F", nullptr));
        QTreeWidgetItem *___qtreewidgetitem13 = treeWidget->topLevelItem(12);
        ___qtreewidgetitem13->setText(1, QCoreApplication::translate("HiddenShortcutsDialog", "Paste into transient filter bar", nullptr));
        ___qtreewidgetitem13->setText(0, QCoreApplication::translate("HiddenShortcutsDialog", "Shift+Insert", nullptr));
        QTreeWidgetItem *___qtreewidgetitem14 = treeWidget->topLevelItem(13);
        ___qtreewidgetitem14->setText(1, QCoreApplication::translate("HiddenShortcutsDialog", "Move file on dropping", nullptr));
        ___qtreewidgetitem14->setText(0, QCoreApplication::translate("HiddenShortcutsDialog", "Drop+Shift", nullptr));
        QTreeWidgetItem *___qtreewidgetitem15 = treeWidget->topLevelItem(14);
        ___qtreewidgetitem15->setText(1, QCoreApplication::translate("HiddenShortcutsDialog", "Copy file on dropping", nullptr));
        ___qtreewidgetitem15->setText(0, QCoreApplication::translate("HiddenShortcutsDialog", "Drop+Ctrl", nullptr));
        QTreeWidgetItem *___qtreewidgetitem16 = treeWidget->topLevelItem(15);
        ___qtreewidgetitem16->setText(1, QCoreApplication::translate("HiddenShortcutsDialog", "Make a symlink on dropping", nullptr));
        ___qtreewidgetitem16->setText(0, QCoreApplication::translate("HiddenShortcutsDialog", "Drop+Shift+Ctrl", nullptr));
        treeWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class HiddenShortcutsDialog: public Ui_HiddenShortcutsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHORTCUTS_H
