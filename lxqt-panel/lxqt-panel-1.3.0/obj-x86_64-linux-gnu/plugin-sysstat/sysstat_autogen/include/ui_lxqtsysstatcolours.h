/********************************************************************************
** Form generated from reading UI file 'lxqtsysstatcolours.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LXQTSYSSTATCOLOURS_H
#define UI_LXQTSYSSTATCOLOURS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LXQtSysStatColours
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QGroupBox *graphGB;
    QGridLayout *gridLayout;
    QLabel *gridL;
    QPushButton *gridB;
    QLabel *titleL;
    QPushButton *titleB;
    QGroupBox *cpuGB;
    QGridLayout *gridLayout_2;
    QPushButton *cpuUserB;
    QLabel *cpuNiceL;
    QPushButton *cpuFrequencyB;
    QLabel *cpuOtherL;
    QLabel *cpuFrequencyL;
    QPushButton *cpuSystemB;
    QLabel *cpuSystemL;
    QLabel *cpuUserL;
    QPushButton *cpuNiceB;
    QPushButton *cpuOtherB;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *memoryGB;
    QGridLayout *gridLayout_3;
    QPushButton *memBuffersB;
    QLabel *memCachedL;
    QLabel *memSwapL;
    QPushButton *memAppsB;
    QLabel *memAppsL;
    QLabel *memBuffersL;
    QPushButton *memCachedB;
    QPushButton *memSwapB;
    QGroupBox *networkGB;
    QGridLayout *gridLayout_4;
    QLabel *netReceivedL;
    QPushButton *netReceivedB;
    QLabel *netTransmittedL;
    QPushButton *netTransmittedB;
    QSpacerItem *verticalSpacer_3;
    QFrame *line;
    QDialogButtonBox *buttons;

    void setupUi(QDialog *LXQtSysStatColours)
    {
        if (LXQtSysStatColours->objectName().isEmpty())
            LXQtSysStatColours->setObjectName(QString::fromUtf8("LXQtSysStatColours"));
        LXQtSysStatColours->resize(519, 328);
        verticalLayout_3 = new QVBoxLayout(LXQtSysStatColours);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        graphGB = new QGroupBox(LXQtSysStatColours);
        graphGB->setObjectName(QString::fromUtf8("graphGB"));
        gridLayout = new QGridLayout(graphGB);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridL = new QLabel(graphGB);
        gridL->setObjectName(QString::fromUtf8("gridL"));

        gridLayout->addWidget(gridL, 0, 0, 1, 1);

        gridB = new QPushButton(graphGB);
        gridB->setObjectName(QString::fromUtf8("gridB"));

        gridLayout->addWidget(gridB, 0, 1, 1, 1);

        titleL = new QLabel(graphGB);
        titleL->setObjectName(QString::fromUtf8("titleL"));

        gridLayout->addWidget(titleL, 1, 0, 1, 1);

        titleB = new QPushButton(graphGB);
        titleB->setObjectName(QString::fromUtf8("titleB"));

        gridLayout->addWidget(titleB, 1, 1, 1, 1);


        verticalLayout->addWidget(graphGB);

        cpuGB = new QGroupBox(LXQtSysStatColours);
        cpuGB->setObjectName(QString::fromUtf8("cpuGB"));
        gridLayout_2 = new QGridLayout(cpuGB);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        cpuUserB = new QPushButton(cpuGB);
        cpuUserB->setObjectName(QString::fromUtf8("cpuUserB"));

        gridLayout_2->addWidget(cpuUserB, 1, 1, 1, 1);

        cpuNiceL = new QLabel(cpuGB);
        cpuNiceL->setObjectName(QString::fromUtf8("cpuNiceL"));

        gridLayout_2->addWidget(cpuNiceL, 2, 0, 1, 1);

        cpuFrequencyB = new QPushButton(cpuGB);
        cpuFrequencyB->setObjectName(QString::fromUtf8("cpuFrequencyB"));

        gridLayout_2->addWidget(cpuFrequencyB, 4, 1, 1, 1);

        cpuOtherL = new QLabel(cpuGB);
        cpuOtherL->setObjectName(QString::fromUtf8("cpuOtherL"));

        gridLayout_2->addWidget(cpuOtherL, 3, 0, 1, 1);

        cpuFrequencyL = new QLabel(cpuGB);
        cpuFrequencyL->setObjectName(QString::fromUtf8("cpuFrequencyL"));

        gridLayout_2->addWidget(cpuFrequencyL, 4, 0, 1, 1);

        cpuSystemB = new QPushButton(cpuGB);
        cpuSystemB->setObjectName(QString::fromUtf8("cpuSystemB"));

        gridLayout_2->addWidget(cpuSystemB, 0, 1, 1, 1);

        cpuSystemL = new QLabel(cpuGB);
        cpuSystemL->setObjectName(QString::fromUtf8("cpuSystemL"));

        gridLayout_2->addWidget(cpuSystemL, 0, 0, 1, 1);

        cpuUserL = new QLabel(cpuGB);
        cpuUserL->setObjectName(QString::fromUtf8("cpuUserL"));

        gridLayout_2->addWidget(cpuUserL, 1, 0, 1, 1);

        cpuNiceB = new QPushButton(cpuGB);
        cpuNiceB->setObjectName(QString::fromUtf8("cpuNiceB"));

        gridLayout_2->addWidget(cpuNiceB, 2, 1, 1, 1);

        cpuOtherB = new QPushButton(cpuGB);
        cpuOtherB->setObjectName(QString::fromUtf8("cpuOtherB"));

        gridLayout_2->addWidget(cpuOtherB, 3, 1, 1, 1);


        verticalLayout->addWidget(cpuGB);

        verticalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        memoryGB = new QGroupBox(LXQtSysStatColours);
        memoryGB->setObjectName(QString::fromUtf8("memoryGB"));
        gridLayout_3 = new QGridLayout(memoryGB);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        memBuffersB = new QPushButton(memoryGB);
        memBuffersB->setObjectName(QString::fromUtf8("memBuffersB"));

        gridLayout_3->addWidget(memBuffersB, 1, 1, 1, 1);

        memCachedL = new QLabel(memoryGB);
        memCachedL->setObjectName(QString::fromUtf8("memCachedL"));

        gridLayout_3->addWidget(memCachedL, 2, 0, 1, 1);

        memSwapL = new QLabel(memoryGB);
        memSwapL->setObjectName(QString::fromUtf8("memSwapL"));

        gridLayout_3->addWidget(memSwapL, 3, 0, 1, 1);

        memAppsB = new QPushButton(memoryGB);
        memAppsB->setObjectName(QString::fromUtf8("memAppsB"));

        gridLayout_3->addWidget(memAppsB, 0, 1, 1, 1);

        memAppsL = new QLabel(memoryGB);
        memAppsL->setObjectName(QString::fromUtf8("memAppsL"));

        gridLayout_3->addWidget(memAppsL, 0, 0, 1, 1);

        memBuffersL = new QLabel(memoryGB);
        memBuffersL->setObjectName(QString::fromUtf8("memBuffersL"));

        gridLayout_3->addWidget(memBuffersL, 1, 0, 1, 1);

        memCachedB = new QPushButton(memoryGB);
        memCachedB->setObjectName(QString::fromUtf8("memCachedB"));

        gridLayout_3->addWidget(memCachedB, 2, 1, 1, 1);

        memSwapB = new QPushButton(memoryGB);
        memSwapB->setObjectName(QString::fromUtf8("memSwapB"));

        gridLayout_3->addWidget(memSwapB, 3, 1, 1, 1);


        verticalLayout_2->addWidget(memoryGB);

        networkGB = new QGroupBox(LXQtSysStatColours);
        networkGB->setObjectName(QString::fromUtf8("networkGB"));
        gridLayout_4 = new QGridLayout(networkGB);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        netReceivedL = new QLabel(networkGB);
        netReceivedL->setObjectName(QString::fromUtf8("netReceivedL"));

        gridLayout_4->addWidget(netReceivedL, 0, 0, 1, 1);

        netReceivedB = new QPushButton(networkGB);
        netReceivedB->setObjectName(QString::fromUtf8("netReceivedB"));

        gridLayout_4->addWidget(netReceivedB, 0, 1, 1, 1);

        netTransmittedL = new QLabel(networkGB);
        netTransmittedL->setObjectName(QString::fromUtf8("netTransmittedL"));

        gridLayout_4->addWidget(netTransmittedL, 1, 0, 1, 1);

        netTransmittedB = new QPushButton(networkGB);
        netTransmittedB->setObjectName(QString::fromUtf8("netTransmittedB"));

        gridLayout_4->addWidget(netTransmittedB, 1, 1, 1, 1);


        verticalLayout_2->addWidget(networkGB);

        verticalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        line = new QFrame(LXQtSysStatColours);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        buttons = new QDialogButtonBox(LXQtSysStatColours);
        buttons->setObjectName(QString::fromUtf8("buttons"));
        buttons->setOrientation(Qt::Horizontal);
        buttons->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::Reset|QDialogButtonBox::RestoreDefaults);

        verticalLayout_3->addWidget(buttons);

#if QT_CONFIG(shortcut)
        gridL->setBuddy(gridB);
        titleL->setBuddy(titleB);
        cpuNiceL->setBuddy(cpuNiceB);
        cpuOtherL->setBuddy(cpuOtherB);
        cpuFrequencyL->setBuddy(cpuFrequencyB);
        cpuSystemL->setBuddy(cpuSystemB);
        cpuUserL->setBuddy(cpuUserB);
        memCachedL->setBuddy(memCachedB);
        memSwapL->setBuddy(memSwapB);
        memAppsL->setBuddy(memAppsB);
        memBuffersL->setBuddy(memBuffersB);
        netReceivedL->setBuddy(netReceivedB);
        netTransmittedL->setBuddy(netTransmittedB);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(gridB, titleB);
        QWidget::setTabOrder(titleB, cpuSystemB);
        QWidget::setTabOrder(cpuSystemB, cpuUserB);
        QWidget::setTabOrder(cpuUserB, cpuNiceB);
        QWidget::setTabOrder(cpuNiceB, cpuOtherB);
        QWidget::setTabOrder(cpuOtherB, cpuFrequencyB);
        QWidget::setTabOrder(cpuFrequencyB, memAppsB);
        QWidget::setTabOrder(memAppsB, memBuffersB);
        QWidget::setTabOrder(memBuffersB, memCachedB);
        QWidget::setTabOrder(memCachedB, memSwapB);
        QWidget::setTabOrder(memSwapB, netReceivedB);
        QWidget::setTabOrder(netReceivedB, netTransmittedB);
        QWidget::setTabOrder(netTransmittedB, buttons);

        retranslateUi(LXQtSysStatColours);

        QMetaObject::connectSlotsByName(LXQtSysStatColours);
    } // setupUi

    void retranslateUi(QDialog *LXQtSysStatColours)
    {
        LXQtSysStatColours->setWindowTitle(QCoreApplication::translate("LXQtSysStatColours", "System Statistics Colors", nullptr));
        graphGB->setTitle(QCoreApplication::translate("LXQtSysStatColours", "Graph", nullptr));
        gridL->setText(QCoreApplication::translate("LXQtSysStatColours", "&Grid", nullptr));
        gridB->setText(QCoreApplication::translate("LXQtSysStatColours", "Change ...", nullptr));
        titleL->setText(QCoreApplication::translate("LXQtSysStatColours", "T&itle", nullptr));
        titleB->setText(QCoreApplication::translate("LXQtSysStatColours", "Change ...", nullptr));
        cpuGB->setTitle(QCoreApplication::translate("LXQtSysStatColours", "CPU", nullptr));
        cpuUserB->setText(QCoreApplication::translate("LXQtSysStatColours", "Change ...", nullptr));
        cpuNiceL->setText(QCoreApplication::translate("LXQtSysStatColours", "&Nice", nullptr));
        cpuFrequencyB->setText(QCoreApplication::translate("LXQtSysStatColours", "Change ...", nullptr));
        cpuOtherL->setText(QCoreApplication::translate("LXQtSysStatColours", "Ot&her", nullptr));
        cpuFrequencyL->setText(QCoreApplication::translate("LXQtSysStatColours", "&Frequency", nullptr));
        cpuSystemB->setText(QCoreApplication::translate("LXQtSysStatColours", "Change ...", nullptr));
        cpuSystemL->setText(QCoreApplication::translate("LXQtSysStatColours", "S&ystem", nullptr));
        cpuUserL->setText(QCoreApplication::translate("LXQtSysStatColours", "&User", nullptr));
        cpuNiceB->setText(QCoreApplication::translate("LXQtSysStatColours", "Change ...", nullptr));
        cpuOtherB->setText(QCoreApplication::translate("LXQtSysStatColours", "Change ...", nullptr));
        memoryGB->setTitle(QCoreApplication::translate("LXQtSysStatColours", "Memory", nullptr));
        memBuffersB->setText(QCoreApplication::translate("LXQtSysStatColours", "Change ...", nullptr));
        memCachedL->setText(QCoreApplication::translate("LXQtSysStatColours", "Cache&d", nullptr));
        memSwapL->setText(QCoreApplication::translate("LXQtSysStatColours", "S&wap", nullptr));
        memAppsB->setText(QCoreApplication::translate("LXQtSysStatColours", "Change ...", nullptr));
        memAppsL->setText(QCoreApplication::translate("LXQtSysStatColours", "&Applications", nullptr));
        memBuffersL->setText(QCoreApplication::translate("LXQtSysStatColours", "&Buffers", nullptr));
        memCachedB->setText(QCoreApplication::translate("LXQtSysStatColours", "Change ...", nullptr));
        memSwapB->setText(QCoreApplication::translate("LXQtSysStatColours", "Change ...", nullptr));
        networkGB->setTitle(QCoreApplication::translate("LXQtSysStatColours", "Network", nullptr));
        netReceivedL->setText(QCoreApplication::translate("LXQtSysStatColours", "&Received", nullptr));
        netReceivedB->setText(QCoreApplication::translate("LXQtSysStatColours", "Change ...", nullptr));
        netTransmittedL->setText(QCoreApplication::translate("LXQtSysStatColours", "&Transmitted", nullptr));
        netTransmittedB->setText(QCoreApplication::translate("LXQtSysStatColours", "Change ...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LXQtSysStatColours: public Ui_LXQtSysStatColours {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LXQTSYSSTATCOLOURS_H
