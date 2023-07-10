/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include "mylistview.h"
#include "widgets.h"

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *panel;
    QHBoxLayout *horizontalLayout;
    HorizSizeGrip *leftSizer;
    QLineEdit *commandEd;
    QToolButton *actionButton;
    QToolButton *closeButton;
    HorizSizeGrip *rightSizer;
    MyListView *commandList;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(342, 236);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Dialog->sizePolicy().hasHeightForWidth());
        Dialog->setSizePolicy(sizePolicy);
        Dialog->setMinimumSize(QSize(300, 0));
        Dialog->setSizeGripEnabled(false);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        panel = new QFrame(Dialog);
        panel->setObjectName(QString::fromUtf8("panel"));
        panel->setAutoFillBackground(true);
        panel->setFrameShape(QFrame::NoFrame);
        panel->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(panel);
        horizontalLayout->setSpacing(-1);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, 0, -1);
        leftSizer = new HorizSizeGrip(panel);
        leftSizer->setObjectName(QString::fromUtf8("leftSizer"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(leftSizer->sizePolicy().hasHeightForWidth());
        leftSizer->setSizePolicy(sizePolicy1);
        leftSizer->setMinimumSize(QSize(3, 0));
        leftSizer->setMaximumSize(QSize(3, 16777215));
        leftSizer->setCursor(QCursor(Qt::SizeHorCursor));

        horizontalLayout->addWidget(leftSizer);

        commandEd = new QLineEdit(panel);
        commandEd->setObjectName(QString::fromUtf8("commandEd"));

        horizontalLayout->addWidget(commandEd);

        actionButton = new QToolButton(panel);
        actionButton->setObjectName(QString::fromUtf8("actionButton"));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("go-down")));
        actionButton->setIcon(icon);
        actionButton->setPopupMode(QToolButton::InstantPopup);
        actionButton->setAutoRaise(true);
        actionButton->setArrowType(Qt::NoArrow);

        horizontalLayout->addWidget(actionButton);

        closeButton = new QToolButton(panel);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setText(QString::fromUtf8("X"));
        QIcon icon1(QIcon::fromTheme(QString::fromUtf8("window-close")));
        closeButton->setIcon(icon1);
        closeButton->setAutoRaise(true);

        horizontalLayout->addWidget(closeButton);

        rightSizer = new HorizSizeGrip(panel);
        rightSizer->setObjectName(QString::fromUtf8("rightSizer"));
        sizePolicy1.setHeightForWidth(rightSizer->sizePolicy().hasHeightForWidth());
        rightSizer->setSizePolicy(sizePolicy1);
        rightSizer->setMinimumSize(QSize(3, 0));
        rightSizer->setMaximumSize(QSize(3, 16777215));
        rightSizer->setCursor(QCursor(Qt::SizeHorCursor));
#if QT_CONFIG(accessibility)
        rightSizer->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        rightSizer->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)

        horizontalLayout->addWidget(rightSizer);


        verticalLayout->addWidget(panel);

        commandList = new MyListView(Dialog);
        commandList->setObjectName(QString::fromUtf8("commandList"));
        commandList->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        commandList->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        commandList->setAlternatingRowColors(true);

        verticalLayout->addWidget(commandList);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Application launcher ", nullptr));
        actionButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
