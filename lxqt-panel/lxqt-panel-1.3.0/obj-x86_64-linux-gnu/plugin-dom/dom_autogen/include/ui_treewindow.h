/********************************************************************************
** Form generated from reading UI file 'treewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TREEWINDOW_H
#define UI_TREEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TreeWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QTreeWidget *tree;
    QWidget *propWidget;
    QVBoxLayout *propLayout;
    QTableWidget *propertiesView;
    QLabel *prop2Label;
    QTableWidget *allPropertiesView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TreeWindow)
    {
        if (TreeWindow->objectName().isEmpty())
            TreeWindow->setObjectName(QString::fromUtf8("TreeWindow"));
        TreeWindow->resize(800, 424);
        centralwidget = new QWidget(TreeWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        tree = new QTreeWidget(splitter);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("Name"));
        tree->setHeaderItem(__qtreewidgetitem);
        tree->setObjectName(QString::fromUtf8("tree"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tree->sizePolicy().hasHeightForWidth());
        tree->setSizePolicy(sizePolicy);
        splitter->addWidget(tree);
        propWidget = new QWidget(splitter);
        propWidget->setObjectName(QString::fromUtf8("propWidget"));
        sizePolicy.setHeightForWidth(propWidget->sizePolicy().hasHeightForWidth());
        propWidget->setSizePolicy(sizePolicy);
        propLayout = new QVBoxLayout(propWidget);
        propLayout->setObjectName(QString::fromUtf8("propLayout"));
        propLayout->setContentsMargins(0, 0, 0, 0);
        propertiesView = new QTableWidget(propWidget);
        if (propertiesView->columnCount() < 2)
            propertiesView->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        propertiesView->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        propertiesView->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        propertiesView->setObjectName(QString::fromUtf8("propertiesView"));
        propertiesView->setFrameShape(QFrame::NoFrame);
        propertiesView->setGridStyle(Qt::DotLine);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(propertiesView->sizePolicy().hasHeightForWidth());
        propertiesView->setSizePolicy(sizePolicy1);
        propertiesView->horizontalHeader()->setStretchLastSection(true);

        propLayout->addWidget(propertiesView);

        prop2Label = new QLabel(propWidget);
        prop2Label->setObjectName(QString::fromUtf8("prop2Label"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(prop2Label->sizePolicy().hasHeightForWidth());
        prop2Label->setSizePolicy(sizePolicy2);

        propLayout->addWidget(prop2Label);

        allPropertiesView = new QTableWidget(propWidget);
        if (allPropertiesView->columnCount() < 3)
            allPropertiesView->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        allPropertiesView->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        allPropertiesView->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        allPropertiesView->setHorizontalHeaderItem(2, __qtablewidgetitem4);
        allPropertiesView->setObjectName(QString::fromUtf8("allPropertiesView"));
        allPropertiesView->setFrameShape(QFrame::NoFrame);
        allPropertiesView->setGridStyle(Qt::DotLine);

        propLayout->addWidget(allPropertiesView);

        splitter->addWidget(propWidget);

        verticalLayout->addWidget(splitter);

        TreeWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TreeWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 601, 21));
        TreeWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(TreeWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        TreeWindow->setStatusBar(statusbar);

        retranslateUi(TreeWindow);

        QMetaObject::connectSlotsByName(TreeWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TreeWindow)
    {
        TreeWindow->setWindowTitle(QCoreApplication::translate("TreeWindow", "Panel DOM tree", nullptr));
        QTableWidgetItem *___qtablewidgetitem = propertiesView->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("TreeWindow", "Property", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = propertiesView->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("TreeWindow", "Value", nullptr));
        prop2Label->setText(QCoreApplication::translate("TreeWindow", "All properties", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = allPropertiesView->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("TreeWindow", "Property", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = allPropertiesView->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("TreeWindow", "Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = allPropertiesView->horizontalHeaderItem(2);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("TreeWindow", "String value", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TreeWindow: public Ui_TreeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TREEWINDOW_H
