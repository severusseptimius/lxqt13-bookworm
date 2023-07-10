/********************************************************************************
** Form generated from reading UI file 'aboutwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTWIDGET_H
#define UI_ABOUTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_aboutWidget
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QLabel *labAppName;
    QLabel *labQtVer;
    QFrame *frame;
    QVBoxLayout *_2;
    QTextBrowser *txtArea;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *butAboutQt;
    QSpacerItem *horizontalSpacer;
    QPushButton *butClose;

    void setupUi(QDialog *aboutWidget)
    {
        if (aboutWidget->objectName().isEmpty())
            aboutWidget->setObjectName(QString::fromUtf8("aboutWidget"));
        aboutWidget->resize(559, 314);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(aboutWidget->sizePolicy().hasHeightForWidth());
        aboutWidget->setSizePolicy(sizePolicy);
        aboutWidget->setMinimumSize(QSize(559, 314));
        aboutWidget->setMaximumSize(QSize(16777215, 16777215));
        aboutWidget->setWindowTitle(QString::fromUtf8("About ScreenGrab"));
        verticalLayout_3 = new QVBoxLayout(aboutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(aboutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setFrameShadow(QFrame::Plain);
        label->setPixmap(QPixmap(QString::fromUtf8(":/res/img/logo.png")));

        horizontalLayout->addWidget(label);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        labAppName = new QLabel(aboutWidget);
        labAppName->setObjectName(QString::fromUtf8("labAppName"));
        labAppName->setText(QString::fromUtf8("<b>ScreenGrab</b>"));
        labAppName->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_2->addWidget(labAppName);

        labQtVer = new QLabel(aboutWidget);
        labQtVer->setObjectName(QString::fromUtf8("labQtVer"));
        labQtVer->setText(QString::fromUtf8(""));
        labQtVer->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_2->addWidget(labQtVer);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        frame = new QFrame(aboutWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        _2 = new QVBoxLayout(frame);
        _2->setObjectName(QString::fromUtf8("_2"));
        txtArea = new QTextBrowser(frame);
        txtArea->setObjectName(QString::fromUtf8("txtArea"));
        txtArea->setOpenExternalLinks(false);
        txtArea->setOpenLinks(false);

        _2->addWidget(txtArea);


        verticalLayout_3->addWidget(frame);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        butAboutQt = new QPushButton(aboutWidget);
        butAboutQt->setObjectName(QString::fromUtf8("butAboutQt"));
        butAboutQt->setMinimumSize(QSize(112, 0));

        horizontalLayout_2->addWidget(butAboutQt);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        butClose = new QPushButton(aboutWidget);
        butClose->setObjectName(QString::fromUtf8("butClose"));
        butClose->setMinimumSize(QSize(112, 0));

        horizontalLayout_2->addWidget(butClose);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(aboutWidget);

        QMetaObject::connectSlotsByName(aboutWidget);
    } // setupUi

    void retranslateUi(QDialog *aboutWidget)
    {
        label->setText(QString());
        butAboutQt->setText(QCoreApplication::translate("aboutWidget", "About Qt", nullptr));
        butClose->setText(QCoreApplication::translate("aboutWidget", "Close", nullptr));
        (void)aboutWidget;
    } // retranslateUi

};

namespace Ui {
    class aboutWidget: public Ui_aboutWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTWIDGET_H
