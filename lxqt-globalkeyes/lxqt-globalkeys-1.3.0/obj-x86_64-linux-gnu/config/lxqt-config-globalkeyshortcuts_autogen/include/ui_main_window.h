/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *filter_LE;
    QTableView *actions_TV;
    QVBoxLayout *verticalLayout;
    QPushButton *add_PB;
    QPushButton *remove_PB;
    QPushButton *modify_PB;
    QFrame *line;
    QPushButton *swap_PB;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *multipleActionsBehaviour_L;
    QComboBox *multipleActionsBehaviour_CB;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *default_PB;
    QSpacerItem *horizontalSpacer;
    QPushButton *close_PB;

    void setupUi(QDialog *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(750, 400);
        verticalLayout_2 = new QVBoxLayout(MainWindow);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        filter_LE = new QLineEdit(MainWindow);
        filter_LE->setObjectName(QString::fromUtf8("filter_LE"));
        filter_LE->setClearButtonEnabled(true);

        verticalLayout_3->addWidget(filter_LE);

        actions_TV = new QTableView(MainWindow);
        actions_TV->setObjectName(QString::fromUtf8("actions_TV"));
        actions_TV->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        actions_TV->setAlternatingRowColors(true);
        actions_TV->setSelectionMode(QAbstractItemView::ExtendedSelection);
        actions_TV->setSelectionBehavior(QAbstractItemView::SelectRows);
        actions_TV->setSortingEnabled(true);
        actions_TV->setWordWrap(false);
        actions_TV->horizontalHeader()->setStretchLastSection(true);
        actions_TV->verticalHeader()->setVisible(false);

        verticalLayout_3->addWidget(actions_TV);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        add_PB = new QPushButton(MainWindow);
        add_PB->setObjectName(QString::fromUtf8("add_PB"));
        add_PB->setEnabled(false);

        verticalLayout->addWidget(add_PB);

        remove_PB = new QPushButton(MainWindow);
        remove_PB->setObjectName(QString::fromUtf8("remove_PB"));
        remove_PB->setEnabled(false);

        verticalLayout->addWidget(remove_PB);

        modify_PB = new QPushButton(MainWindow);
        modify_PB->setObjectName(QString::fromUtf8("modify_PB"));
        modify_PB->setEnabled(false);

        verticalLayout->addWidget(modify_PB);

        line = new QFrame(MainWindow);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        swap_PB = new QPushButton(MainWindow);
        swap_PB->setObjectName(QString::fromUtf8("swap_PB"));
        swap_PB->setEnabled(false);

        verticalLayout->addWidget(swap_PB);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        multipleActionsBehaviour_L = new QLabel(MainWindow);
        multipleActionsBehaviour_L->setObjectName(QString::fromUtf8("multipleActionsBehaviour_L"));

        horizontalLayout_3->addWidget(multipleActionsBehaviour_L);

        multipleActionsBehaviour_CB = new QComboBox(MainWindow);
        multipleActionsBehaviour_CB->addItem(QString());
        multipleActionsBehaviour_CB->addItem(QString());
        multipleActionsBehaviour_CB->addItem(QString());
        multipleActionsBehaviour_CB->addItem(QString());
        multipleActionsBehaviour_CB->setObjectName(QString::fromUtf8("multipleActionsBehaviour_CB"));

        horizontalLayout_3->addWidget(multipleActionsBehaviour_CB);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        default_PB = new QPushButton(MainWindow);
        default_PB->setObjectName(QString::fromUtf8("default_PB"));

        horizontalLayout->addWidget(default_PB);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        close_PB = new QPushButton(MainWindow);
        close_PB->setObjectName(QString::fromUtf8("close_PB"));

        horizontalLayout->addWidget(close_PB);


        verticalLayout_2->addLayout(horizontalLayout);

        QWidget::setTabOrder(actions_TV, add_PB);
        QWidget::setTabOrder(add_PB, remove_PB);
        QWidget::setTabOrder(remove_PB, modify_PB);
        QWidget::setTabOrder(modify_PB, swap_PB);
        QWidget::setTabOrder(swap_PB, close_PB);

        retranslateUi(MainWindow);
        QObject::connect(close_PB, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QDialog *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Global Actions Manager", nullptr));
        filter_LE->setPlaceholderText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        add_PB->setText(QCoreApplication::translate("MainWindow", "Add ...", nullptr));
        remove_PB->setText(QCoreApplication::translate("MainWindow", "Remove", nullptr));
        modify_PB->setText(QCoreApplication::translate("MainWindow", "Modify ...", nullptr));
        swap_PB->setText(QCoreApplication::translate("MainWindow", "Swap", nullptr));
        multipleActionsBehaviour_L->setText(QCoreApplication::translate("MainWindow", "Multiple actions behaviour:", nullptr));
        multipleActionsBehaviour_CB->setItemText(0, QCoreApplication::translate("MainWindow", "First", "globalkeys/config/multipleActions"));
        multipleActionsBehaviour_CB->setItemText(1, QCoreApplication::translate("MainWindow", "Last", "globalkeys/config/multipleActions"));
        multipleActionsBehaviour_CB->setItemText(2, QCoreApplication::translate("MainWindow", "None", "globalkeys/config/multipleActions"));
        multipleActionsBehaviour_CB->setItemText(3, QCoreApplication::translate("MainWindow", "All", "globalkeys/config/multipleActions"));

        default_PB->setText(QCoreApplication::translate("MainWindow", "Default", nullptr));
        close_PB->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
