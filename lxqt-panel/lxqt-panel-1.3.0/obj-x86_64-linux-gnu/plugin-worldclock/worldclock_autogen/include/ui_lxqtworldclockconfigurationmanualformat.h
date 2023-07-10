/********************************************************************************
** Form generated from reading UI file 'lxqtworldclockconfigurationmanualformat.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LXQTWORLDCLOCKCONFIGURATIONMANUALFORMAT_H
#define UI_LXQTWORLDCLOCKCONFIGURATIONMANUALFORMAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LXQtWorldClockConfigurationManualFormat
{
public:
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter;
    QPlainTextEdit *manualFormatPTE;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QLabel *helpL;
    QDialogButtonBox *buttons;

    void setupUi(QDialog *LXQtWorldClockConfigurationManualFormat)
    {
        if (LXQtWorldClockConfigurationManualFormat->objectName().isEmpty())
            LXQtWorldClockConfigurationManualFormat->setObjectName(QString::fromUtf8("LXQtWorldClockConfigurationManualFormat"));
        LXQtWorldClockConfigurationManualFormat->resize(800, 500);
        verticalLayout_3 = new QVBoxLayout(LXQtWorldClockConfigurationManualFormat);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        splitter = new QSplitter(LXQtWorldClockConfigurationManualFormat);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        splitter->setChildrenCollapsible(false);
        manualFormatPTE = new QPlainTextEdit(splitter);
        manualFormatPTE->setObjectName(QString::fromUtf8("manualFormatPTE"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(manualFormatPTE->sizePolicy().hasHeightForWidth());
        manualFormatPTE->setSizePolicy(sizePolicy);
        manualFormatPTE->setMinimumSize(QSize(0, 100));
        splitter->addWidget(manualFormatPTE);
        scrollArea = new QScrollArea(splitter);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(100);
        sizePolicy1.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy1);
        scrollArea->setMinimumSize(QSize(0, 100));
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 766, 1050));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        helpL = new QLabel(scrollAreaWidgetContents);
        helpL->setObjectName(QString::fromUtf8("helpL"));
        helpL->setTextFormat(Qt::RichText);
        helpL->setWordWrap(true);

        verticalLayout->addWidget(helpL);

        scrollArea->setWidget(scrollAreaWidgetContents);
        splitter->addWidget(scrollArea);

        verticalLayout_3->addWidget(splitter);

        buttons = new QDialogButtonBox(LXQtWorldClockConfigurationManualFormat);
        buttons->setObjectName(QString::fromUtf8("buttons"));
        buttons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttons);

        QWidget::setTabOrder(manualFormatPTE, scrollArea);
        QWidget::setTabOrder(scrollArea, buttons);

        retranslateUi(LXQtWorldClockConfigurationManualFormat);
        QObject::connect(buttons, SIGNAL(accepted()), LXQtWorldClockConfigurationManualFormat, SLOT(accept()));
        QObject::connect(buttons, SIGNAL(rejected()), LXQtWorldClockConfigurationManualFormat, SLOT(reject()));

        QMetaObject::connectSlotsByName(LXQtWorldClockConfigurationManualFormat);
    } // setupUi

    void retranslateUi(QDialog *LXQtWorldClockConfigurationManualFormat)
    {
        LXQtWorldClockConfigurationManualFormat->setWindowTitle(QCoreApplication::translate("LXQtWorldClockConfigurationManualFormat", "World Clock Manual Format Configuration", nullptr));
        helpL->setText(QCoreApplication::translate("LXQtWorldClockConfigurationManualFormat", "<h1>Custom Date/Time Format Syntax</h1>\n"
"<p>A date pattern is a string of characters, where specific strings of characters are replaced with date and time data from a calendar when formatting or used to generate data for a calendar when parsing.</p>\n"
"<p>The Date Field Symbol Table below contains the characters used in patterns to show the appropriate formats for a given locale, such as yyyy for the year. Characters may be used multiple times. For example, if y is used for the year, 'yy' might produce '99', whereas 'yyyy' produces '1999'. For most numerical fields, the number of characters specifies the field width. For example, if h is the hour, 'h' might produce '5', but 'hh' produces '05'. For some characters, the count specifies whether an abbreviated or full form should be used, but may have other choices, as given below.</p>\n"
"<p>Two single quotes represents a literal single quote, either inside or outside single quotes. Text within single quotes is not interpreted in any way (except for two adjac"
                        "ent single quotes). Otherwise all ASCII letter from a to z and A to Z are reserved as syntax characters, and require quoting if they are to represent literal characters. In addition, certain ASCII punctuation characters may become variable in the future (eg \":\" being interpreted as the time separator and '/' as a date separator, and replaced by respective locale-sensitive characters in display).<br /></p>\n"
"<table border=\"1\" width=\"100%\" cellpadding=\"4\" cellspacing=\"0\">\n"
"<tr><th width=\"20%\">Code</th><th>Meaning</th></tr>\n"
"<tr><td>d</td><td>the day as number without a leading zero (1 to 31)</td></tr>\n"
"<tr><td>dd</td><td>the day as number with a leading zero (01 to 31)</td></tr>\n"
"<tr><td>ddd</td><td>the abbreviated localized day name (e.g. 'Mon' to 'Sun').</td></tr>\n"
"<tr><td>dddd</td><td>the long localized day name (e.g. 'Monday' to 'Sunday').</td></tr>\n"
"<tr><td>M</td><td>the month as number without a leading zero (1-12)</td></tr>\n"
"<tr><td>MM</td><td>the month as number with a "
                        "leading zero (01-12)</td></tr>\n"
"<tr><td>MMM</td><td>the abbreviated localized month name (e.g. 'Jan' to 'Dec').</td></tr>\n"
"<tr><td>MMMM</td><td>the long localized month name (e.g. 'January' to 'December').</td></tr>\n"
"<tr><td>yy</td><td>the year as two digit number (00-99)</td></tr>\n"
"<tr><td>yyyy</td><td>the year as four digit number</td></tr>\n"
"<tr><td>h</td><td>the hour without a leading zero (0 to 23 or 1 to 12 if AM/PM display)</td></tr>\n"
"<tr><td>hh</td><td>the hour with a leading zero (00 to 23 or 01 to 12 if AM/PM display)</td></tr>\n"
"<tr><td>H</td><td>the hour without a leading zero (0 to 23, even with AM/PM display)</td></tr>\n"
"<tr><td>HH</td><td>the hour with a leading zero (00 to 23, even with AM/PM display)</td></tr>\n"
"<tr><td>m</td><td>the minute without a leading zero (0 to 59)</td></tr>\n"
"<tr><td>mm</td><td>the minute with a leading zero (00 to 59)</td></tr>\n"
"<tr><td>s</td><td>the second without a leading zero (0 to 59)</td></tr>\n"
"<tr><td>ss</td><td>the second with a"
                        " leading zero (00 to 59)</td></tr>\n"
"<tr><td>AP <i>or</i> A</td><td>use AM/PM display. <b>A/AP</b> will be replaced by either \"AM\" or \"PM\".</td></tr>\n"
"<tr><td>ap <i>or</i> a</td><td>use am/pm display. <b>a/ap</b> will be replaced by either \"am\" or \"pm\".</td></tr>\n"
"<tr><td>t</td><td>the timezone (e.g. \"CEST\")</td></tr>\n"
"<tr><td>T</td><td>the offset from UTC</td></tr>\n"
"<tr><td>TT</td><td>the timezone IANA id</td></tr>\n"
"<tr><td>TTT</td><td>the timezone abbreviation</td></tr>\n"
"<tr><td>TTTT</td><td>the timezone short display name</td></tr>\n"
"<tr><td>TTTTT</td><td>the timezone long display name</td></tr>\n"
"<tr><td>TTTTTT</td><td>the timezone custom name. You can change it the 'Time zones' tab of the configuration window</td></tr></table>\n"
"<br /><b>Notes:</b> <ul><li>Any characters in the pattern that are not in the ranges of ['a'..'z'] and ['A'..'Z'] will be treated as quoted text. For instance, characters like ':', '.', ' ', '#' and '@' will appear in the resulting time text eve"
                        "n they are not enclosed within single quotes. The single quote is used to 'escape' letters. Two single quotes in a row, whether inside or outside a quoted sequence, represent a 'real' single quote.</li><li>Minimal update interval is 1 second. If z or zzz is configured time is shown with the milliseconds fraction, but not updated on millisecond basis (avoiding big performance hit).</li><ul>\n"
"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LXQtWorldClockConfigurationManualFormat: public Ui_LXQtWorldClockConfigurationManualFormat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LXQTWORLDCLOCKCONFIGURATIONMANUALFORMAT_H
