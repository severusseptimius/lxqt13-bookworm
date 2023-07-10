/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *notebook;
    QWidget *tab;
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *streamsVBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *noStreamsLabel;
    QLabel *label;
    QComboBox *sinkInputTypeComboBox;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QScrollArea *scrollArea_2;
    QWidget *recsVBox;
    QVBoxLayout *verticalLayout_3;
    QLabel *noRecsLabel;
    QLabel *label_2;
    QComboBox *sourceOutputTypeComboBox;
    QWidget *tab_3;
    QGridLayout *gridLayout_3;
    QScrollArea *scrollArea_3;
    QWidget *sinksVBox;
    QVBoxLayout *verticalLayout_4;
    QLabel *noSinksLabel;
    QLabel *label_3;
    QComboBox *sinkTypeComboBox;
    QWidget *tab_4;
    QGridLayout *gridLayout_4;
    QScrollArea *scrollArea_4;
    QWidget *sourcesVBox;
    QVBoxLayout *verticalLayout_5;
    QLabel *noSourcesLabel;
    QLabel *label_4;
    QComboBox *sourceTypeComboBox;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_7;
    QScrollArea *scrollArea_5;
    QWidget *cardsVBox;
    QVBoxLayout *verticalLayout_6;
    QLabel *noCardsLabel;
    QCheckBox *showVolumeMetersCheckButton;
    QLabel *connectingLabel;

    void setupUi(QDialog *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(766, 548);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("multimedia-volume-control");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        MainWindow->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(MainWindow);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        notebook = new QTabWidget(MainWindow);
        notebook->setObjectName(QString::fromUtf8("notebook"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(tab);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        streamsVBox = new QWidget();
        streamsVBox->setObjectName(QString::fromUtf8("streamsVBox"));
        streamsVBox->setGeometry(QRect(0, 0, 730, 423));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(streamsVBox->sizePolicy().hasHeightForWidth());
        streamsVBox->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(streamsVBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        noStreamsLabel = new QLabel(streamsVBox);
        noStreamsLabel->setObjectName(QString::fromUtf8("noStreamsLabel"));

        verticalLayout_2->addWidget(noStreamsLabel);

        scrollArea->setWidget(streamsVBox);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 2);

        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        sinkInputTypeComboBox = new QComboBox(tab);
        sinkInputTypeComboBox->addItem(QString());
        sinkInputTypeComboBox->addItem(QString());
        sinkInputTypeComboBox->addItem(QString());
        sinkInputTypeComboBox->setObjectName(QString::fromUtf8("sinkInputTypeComboBox"));

        gridLayout->addWidget(sinkInputTypeComboBox, 1, 1, 1, 1);

        notebook->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        scrollArea_2 = new QScrollArea(tab_2);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        recsVBox = new QWidget();
        recsVBox->setObjectName(QString::fromUtf8("recsVBox"));
        recsVBox->setGeometry(QRect(0, 0, 730, 423));
        sizePolicy.setHeightForWidth(recsVBox->sizePolicy().hasHeightForWidth());
        recsVBox->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(recsVBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        noRecsLabel = new QLabel(recsVBox);
        noRecsLabel->setObjectName(QString::fromUtf8("noRecsLabel"));

        verticalLayout_3->addWidget(noRecsLabel);

        scrollArea_2->setWidget(recsVBox);

        gridLayout_2->addWidget(scrollArea_2, 0, 0, 1, 2);

        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        sourceOutputTypeComboBox = new QComboBox(tab_2);
        sourceOutputTypeComboBox->addItem(QString());
        sourceOutputTypeComboBox->addItem(QString());
        sourceOutputTypeComboBox->addItem(QString());
        sourceOutputTypeComboBox->setObjectName(QString::fromUtf8("sourceOutputTypeComboBox"));

        gridLayout_2->addWidget(sourceOutputTypeComboBox, 1, 1, 1, 1);

        notebook->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_3 = new QGridLayout(tab_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        scrollArea_3 = new QScrollArea(tab_3);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        scrollArea_3->setWidgetResizable(true);
        sinksVBox = new QWidget();
        sinksVBox->setObjectName(QString::fromUtf8("sinksVBox"));
        sinksVBox->setGeometry(QRect(0, 0, 730, 423));
        sizePolicy.setHeightForWidth(sinksVBox->sizePolicy().hasHeightForWidth());
        sinksVBox->setSizePolicy(sizePolicy);
        verticalLayout_4 = new QVBoxLayout(sinksVBox);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        noSinksLabel = new QLabel(sinksVBox);
        noSinksLabel->setObjectName(QString::fromUtf8("noSinksLabel"));

        verticalLayout_4->addWidget(noSinksLabel);

        scrollArea_3->setWidget(sinksVBox);

        gridLayout_3->addWidget(scrollArea_3, 0, 0, 1, 2);

        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 1, 0, 1, 1);

        sinkTypeComboBox = new QComboBox(tab_3);
        sinkTypeComboBox->addItem(QString());
        sinkTypeComboBox->addItem(QString());
        sinkTypeComboBox->addItem(QString());
        sinkTypeComboBox->setObjectName(QString::fromUtf8("sinkTypeComboBox"));

        gridLayout_3->addWidget(sinkTypeComboBox, 1, 1, 1, 1);

        notebook->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout_4 = new QGridLayout(tab_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        scrollArea_4 = new QScrollArea(tab_4);
        scrollArea_4->setObjectName(QString::fromUtf8("scrollArea_4"));
        scrollArea_4->setWidgetResizable(true);
        sourcesVBox = new QWidget();
        sourcesVBox->setObjectName(QString::fromUtf8("sourcesVBox"));
        sourcesVBox->setGeometry(QRect(0, 0, 730, 423));
        sizePolicy.setHeightForWidth(sourcesVBox->sizePolicy().hasHeightForWidth());
        sourcesVBox->setSizePolicy(sizePolicy);
        verticalLayout_5 = new QVBoxLayout(sourcesVBox);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        noSourcesLabel = new QLabel(sourcesVBox);
        noSourcesLabel->setObjectName(QString::fromUtf8("noSourcesLabel"));

        verticalLayout_5->addWidget(noSourcesLabel);

        scrollArea_4->setWidget(sourcesVBox);

        gridLayout_4->addWidget(scrollArea_4, 0, 0, 1, 2);

        label_4 = new QLabel(tab_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_4->addWidget(label_4, 1, 0, 1, 1);

        sourceTypeComboBox = new QComboBox(tab_4);
        sourceTypeComboBox->addItem(QString());
        sourceTypeComboBox->addItem(QString());
        sourceTypeComboBox->addItem(QString());
        sourceTypeComboBox->addItem(QString());
        sourceTypeComboBox->addItem(QString());
        sourceTypeComboBox->setObjectName(QString::fromUtf8("sourceTypeComboBox"));

        gridLayout_4->addWidget(sourceTypeComboBox, 1, 1, 1, 1);

        notebook->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        verticalLayout_7 = new QVBoxLayout(tab_5);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        scrollArea_5 = new QScrollArea(tab_5);
        scrollArea_5->setObjectName(QString::fromUtf8("scrollArea_5"));
        scrollArea_5->setWidgetResizable(true);
        cardsVBox = new QWidget();
        cardsVBox->setObjectName(QString::fromUtf8("cardsVBox"));
        cardsVBox->setGeometry(QRect(0, 0, 730, 433));
        sizePolicy.setHeightForWidth(cardsVBox->sizePolicy().hasHeightForWidth());
        cardsVBox->setSizePolicy(sizePolicy);
        verticalLayout_6 = new QVBoxLayout(cardsVBox);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        noCardsLabel = new QLabel(cardsVBox);
        noCardsLabel->setObjectName(QString::fromUtf8("noCardsLabel"));

        verticalLayout_6->addWidget(noCardsLabel);

        scrollArea_5->setWidget(cardsVBox);

        verticalLayout_7->addWidget(scrollArea_5);

        showVolumeMetersCheckButton = new QCheckBox(tab_5);
        showVolumeMetersCheckButton->setObjectName(QString::fromUtf8("showVolumeMetersCheckButton"));

        verticalLayout_7->addWidget(showVolumeMetersCheckButton);

        notebook->addTab(tab_5, QString());

        verticalLayout->addWidget(notebook);

        connectingLabel = new QLabel(MainWindow);
        connectingLabel->setObjectName(QString::fromUtf8("connectingLabel"));
        connectingLabel->setAlignment(Qt::AlignCenter);
        connectingLabel->setWordWrap(true);
        connectingLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(connectingLabel);


        retranslateUi(MainWindow);

        notebook->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QDialog *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Volume Control", nullptr));
        noStreamsLabel->setText(QCoreApplication::translate("MainWindow", "<i>No application is currently playing audio.</i>", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Show:", nullptr));
        sinkInputTypeComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "All Streams", nullptr));
        sinkInputTypeComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Applications", nullptr));
        sinkInputTypeComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Virtual Streams", nullptr));

        notebook->setTabText(notebook->indexOf(tab), QCoreApplication::translate("MainWindow", "&Playback", nullptr));
        noRecsLabel->setText(QCoreApplication::translate("MainWindow", "<i>No application is currently recording audio.</i>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Show:", nullptr));
        sourceOutputTypeComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "All Streams", nullptr));
        sourceOutputTypeComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Applications", nullptr));
        sourceOutputTypeComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Virtual Streams", nullptr));

        notebook->setTabText(notebook->indexOf(tab_2), QCoreApplication::translate("MainWindow", "&Recording", nullptr));
        noSinksLabel->setText(QCoreApplication::translate("MainWindow", "<i>No output devices available</i>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Show:", nullptr));
        sinkTypeComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "All Output Devices", nullptr));
        sinkTypeComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Hardware Output Devices", nullptr));
        sinkTypeComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Virtual Output Devices", nullptr));

        notebook->setTabText(notebook->indexOf(tab_3), QCoreApplication::translate("MainWindow", "&Output Devices", nullptr));
        noSourcesLabel->setText(QCoreApplication::translate("MainWindow", "<i>No input devices available</i>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Show:", nullptr));
        sourceTypeComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "All Input Devices", nullptr));
        sourceTypeComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "All Except Monitors", nullptr));
        sourceTypeComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Hardware Input Devices", nullptr));
        sourceTypeComboBox->setItemText(3, QCoreApplication::translate("MainWindow", "Virtual Input Devices", nullptr));
        sourceTypeComboBox->setItemText(4, QCoreApplication::translate("MainWindow", "Monitors", nullptr));

        notebook->setTabText(notebook->indexOf(tab_4), QCoreApplication::translate("MainWindow", "&Input Devices", nullptr));
        noCardsLabel->setText(QCoreApplication::translate("MainWindow", "<i>No cards available for configuration</i>", nullptr));
        showVolumeMetersCheckButton->setText(QCoreApplication::translate("MainWindow", "Show volume meters", nullptr));
        notebook->setTabText(notebook->indexOf(tab_5), QCoreApplication::translate("MainWindow", "&Configuration", nullptr));
        connectingLabel->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
