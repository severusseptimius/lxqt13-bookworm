/********************************************************************************
** Form generated from reading UI file 'environmentpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENVIRONMENTPAGE_H
#define UI_ENVIRONMENTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EnvironmentPage
{
public:
    QGridLayout *gridLayout_7;
    QPushButton *addButton;
    QPushButton *deleteButton;
    QSpacerItem *verticalSpacer_1;
    QLabel *label;
    QTreeWidget *treeWidget;

    void setupUi(QWidget *EnvironmentPage)
    {
        if (EnvironmentPage->objectName().isEmpty())
            EnvironmentPage->setObjectName(QString::fromUtf8("EnvironmentPage"));
        EnvironmentPage->resize(400, 320);
        gridLayout_7 = new QGridLayout(EnvironmentPage);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        addButton = new QPushButton(EnvironmentPage);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        gridLayout_7->addWidget(addButton, 2, 1, 1, 1);

        deleteButton = new QPushButton(EnvironmentPage);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        gridLayout_7->addWidget(deleteButton, 3, 1, 1, 1);

        verticalSpacer_1 = new QSpacerItem(59, 96, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_1, 4, 1, 1, 1);

        label = new QLabel(EnvironmentPage);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout_7->addWidget(label, 0, 0, 1, 1);

        treeWidget = new QTreeWidget(EnvironmentPage);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setAlternatingRowColors(true);

        gridLayout_7->addWidget(treeWidget, 1, 0, 4, 1);


        retranslateUi(EnvironmentPage);

        QMetaObject::connectSlotsByName(EnvironmentPage);
    } // setupUi

    void retranslateUi(QWidget *EnvironmentPage)
    {
        addButton->setText(QCoreApplication::translate("EnvironmentPage", "Add", nullptr));
        deleteButton->setText(QCoreApplication::translate("EnvironmentPage", "Delete", nullptr));
        label->setText(QCoreApplication::translate("EnvironmentPage", "Environment Variables (Advanced)", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("EnvironmentPage", "Value", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("EnvironmentPage", "Variable Name", nullptr));
        (void)EnvironmentPage;
    } // retranslateUi

};

namespace Ui {
    class EnvironmentPage: public Ui_EnvironmentPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENVIRONMENTPAGE_H
