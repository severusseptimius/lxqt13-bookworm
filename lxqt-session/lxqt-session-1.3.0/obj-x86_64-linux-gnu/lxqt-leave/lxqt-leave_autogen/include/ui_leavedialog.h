/********************************************************************************
** Form generated from reading UI file 'leavedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEAVEDIALOG_H
#define UI_LEAVEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "listwidget.h"

QT_BEGIN_NAMESPACE

class Ui_LeaveDialog
{
public:
    QGridLayout *gridLayout_2;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QToolButton *cancelButton;
    QLabel *label;
    ListWidget *listWidget;

    void setupUi(QDialog *LeaveDialog)
    {
        if (LeaveDialog->objectName().isEmpty())
            LeaveDialog->setObjectName(QString::fromUtf8("LeaveDialog"));
        LeaveDialog->resize(456, 372);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LeaveDialog->sizePolicy().hasHeightForWidth());
        LeaveDialog->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(LeaveDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setVerticalSpacing(18);
        gridLayout_2->setContentsMargins(-1, -1, -1, 9);
        widget_2 = new QWidget(LeaveDialog);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(170, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cancelButton = new QToolButton(widget_2);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("dialog-cancel");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        cancelButton->setIcon(icon);
        cancelButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(cancelButton);


        gridLayout_2->addWidget(widget_2, 3, 0, 1, 1);

        label = new QLabel(LeaveDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFrameShape(QFrame::NoFrame);
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        listWidget = new ListWidget(LeaveDialog);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setContextMenuPolicy(Qt::NoContextMenu);
        listWidget->setStyleSheet(QString::fromUtf8("#listWidget { background-color: palette(window); }\n"
"QAbstractItemView { activate-on-singleclick: 1; }"));
        listWidget->setFrameShape(QFrame::NoFrame);
        listWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        listWidget->setAutoScroll(false);
        listWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listWidget->setTabKeyNavigation(true);
        listWidget->setSelectionMode(QAbstractItemView::NoSelection);
        listWidget->setIconSize(QSize(64, 64));
        listWidget->setTextElideMode(Qt::ElideNone);
        listWidget->setFlow(QListView::LeftToRight);
        listWidget->setProperty("isWrapping", QVariant(true));
        listWidget->setSpacing(7);
        listWidget->setUniformItemSizes(true);

        gridLayout_2->addWidget(listWidget, 1, 0, 1, 1);

        label->raise();
        listWidget->raise();
        widget_2->raise();

        retranslateUi(LeaveDialog);

        QMetaObject::connectSlotsByName(LeaveDialog);
    } // setupUi

    void retranslateUi(QDialog *LeaveDialog)
    {
        LeaveDialog->setWindowTitle(QCoreApplication::translate("LeaveDialog", "Leave", nullptr));
        cancelButton->setText(QCoreApplication::translate("LeaveDialog", "Cancel", nullptr));
        label->setText(QCoreApplication::translate("LeaveDialog", "<html><head/><body><p><span style=\" font-size:12pt;\">What do you want the computer to do?</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LeaveDialog: public Ui_LeaveDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEAVEDIALOG_H
