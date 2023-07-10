/********************************************************************************
** Form generated from reading UI file 'autostartpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTOSTARTPAGE_H
#define UI_AUTOSTARTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AutoStartPage
{
public:
    QGridLayout *gridLayout_10;
    QPushButton *deleteButton;
    QPushButton *addButton;
    QPushButton *editButton;
    QLabel *label;
    QSpacerItem *verticalSpacer_1;
    QTreeView *autoStartView;

    void setupUi(QWidget *AutoStartPage)
    {
        if (AutoStartPage->objectName().isEmpty())
            AutoStartPage->setObjectName(QString::fromUtf8("AutoStartPage"));
        AutoStartPage->resize(320, 240);
        gridLayout_10 = new QGridLayout(AutoStartPage);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        deleteButton = new QPushButton(AutoStartPage);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        gridLayout_10->addWidget(deleteButton, 4, 1, 1, 1);

        addButton = new QPushButton(AutoStartPage);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        gridLayout_10->addWidget(addButton, 2, 1, 1, 1);

        editButton = new QPushButton(AutoStartPage);
        editButton->setObjectName(QString::fromUtf8("editButton"));

        gridLayout_10->addWidget(editButton, 3, 1, 1, 1);

        label = new QLabel(AutoStartPage);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout_10->addWidget(label, 0, 0, 1, 1);

        verticalSpacer_1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_10->addItem(verticalSpacer_1, 5, 1, 1, 1);

        autoStartView = new QTreeView(AutoStartPage);
        autoStartView->setObjectName(QString::fromUtf8("autoStartView"));
        autoStartView->header()->setVisible(false);

        gridLayout_10->addWidget(autoStartView, 1, 0, 5, 1);


        retranslateUi(AutoStartPage);

        QMetaObject::connectSlotsByName(AutoStartPage);
    } // setupUi

    void retranslateUi(QWidget *AutoStartPage)
    {
        deleteButton->setText(QCoreApplication::translate("AutoStartPage", "Delete", nullptr));
        addButton->setText(QCoreApplication::translate("AutoStartPage", "Add", nullptr));
        editButton->setText(QCoreApplication::translate("AutoStartPage", "Edit", nullptr));
        label->setText(QCoreApplication::translate("AutoStartPage", "Application Autostart", nullptr));
        (void)AutoStartPage;
    } // retranslateUi

};

namespace Ui {
    class AutoStartPage: public Ui_AutoStartPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTOSTARTPAGE_H
