/********************************************************************************
** Form generated from reading UI file 'lxqtcustomcommandconfiguration.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LXQTCUSTOMCOMMANDCONFIGURATION_H
#define UI_LXQTCUSTOMCOMMANDCONFIGURATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LXQtCustomCommandConfiguration
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *displayGroupBox;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLineEdit *iconLineEdit;
    QCheckBox *runWithBashCheckBox;
    QPushButton *fontButton;
    QLabel *textLabel;
    QLabel *commandLabel;
    QLabel *fontLabel;
    QSpinBox *maxWidthSpinBox;
    QLineEdit *textLineEdit;
    QLabel *iconLabel;
    QPushButton *iconBrowseButton;
    QCheckBox *autoRotateCheckBox;
    QPlainTextEdit *commandPlainTextEdit;
    QLabel *maxWidthLabel;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QCheckBox *repeatCheckBox;
    QSpinBox *repeatTimerSpinBox;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *clickLabel;
    QLineEdit *wheelUpLineEdit;
    QLineEdit *wheelDownLineEdit;
    QLineEdit *clickLineEdit;
    QLabel *wheelUpLabel;
    QLabel *wheelDownLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LXQtCustomCommandConfiguration)
    {
        if (LXQtCustomCommandConfiguration->objectName().isEmpty())
            LXQtCustomCommandConfiguration->setObjectName(QString::fromUtf8("LXQtCustomCommandConfiguration"));
        LXQtCustomCommandConfiguration->resize(500, 500);
        verticalLayout = new QVBoxLayout(LXQtCustomCommandConfiguration);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        displayGroupBox = new QGroupBox(LXQtCustomCommandConfiguration);
        displayGroupBox->setObjectName(QString::fromUtf8("displayGroupBox"));
        verticalLayout_2 = new QVBoxLayout(displayGroupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        iconLineEdit = new QLineEdit(displayGroupBox);
        iconLineEdit->setObjectName(QString::fromUtf8("iconLineEdit"));

        gridLayout->addWidget(iconLineEdit, 7, 1, 1, 1);

        runWithBashCheckBox = new QCheckBox(displayGroupBox);
        runWithBashCheckBox->setObjectName(QString::fromUtf8("runWithBashCheckBox"));
        runWithBashCheckBox->setChecked(true);

        gridLayout->addWidget(runWithBashCheckBox, 4, 1, 1, 2);

        fontButton = new QPushButton(displayGroupBox);
        fontButton->setObjectName(QString::fromUtf8("fontButton"));
        fontButton->setAutoDefault(false);

        gridLayout->addWidget(fontButton, 1, 1, 1, 2);

        textLabel = new QLabel(displayGroupBox);
        textLabel->setObjectName(QString::fromUtf8("textLabel"));
        textLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(textLabel, 8, 0, 1, 1);

        commandLabel = new QLabel(displayGroupBox);
        commandLabel->setObjectName(QString::fromUtf8("commandLabel"));
        commandLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(commandLabel, 2, 0, 5, 1);

        fontLabel = new QLabel(displayGroupBox);
        fontLabel->setObjectName(QString::fromUtf8("fontLabel"));

        gridLayout->addWidget(fontLabel, 1, 0, 1, 1);

        maxWidthSpinBox = new QSpinBox(displayGroupBox);
        maxWidthSpinBox->setObjectName(QString::fromUtf8("maxWidthSpinBox"));
        maxWidthSpinBox->setMinimum(10);
        maxWidthSpinBox->setMaximum(9999);
        maxWidthSpinBox->setSingleStep(5);
        maxWidthSpinBox->setValue(200);

        gridLayout->addWidget(maxWidthSpinBox, 9, 1, 1, 2);

        textLineEdit = new QLineEdit(displayGroupBox);
        textLineEdit->setObjectName(QString::fromUtf8("textLineEdit"));

        gridLayout->addWidget(textLineEdit, 8, 1, 1, 2);

        iconLabel = new QLabel(displayGroupBox);
        iconLabel->setObjectName(QString::fromUtf8("iconLabel"));
        iconLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(iconLabel, 7, 0, 1, 1);

        iconBrowseButton = new QPushButton(displayGroupBox);
        iconBrowseButton->setObjectName(QString::fromUtf8("iconBrowseButton"));
        iconBrowseButton->setAutoDefault(false);

        gridLayout->addWidget(iconBrowseButton, 7, 2, 1, 1);

        autoRotateCheckBox = new QCheckBox(displayGroupBox);
        autoRotateCheckBox->setObjectName(QString::fromUtf8("autoRotateCheckBox"));

        gridLayout->addWidget(autoRotateCheckBox, 0, 0, 1, 3);

        commandPlainTextEdit = new QPlainTextEdit(displayGroupBox);
        commandPlainTextEdit->setObjectName(QString::fromUtf8("commandPlainTextEdit"));
        commandPlainTextEdit->setMinimumSize(QSize(0, 52));
        commandPlainTextEdit->setBaseSize(QSize(0, 50));

        gridLayout->addWidget(commandPlainTextEdit, 2, 1, 1, 2);

        maxWidthLabel = new QLabel(displayGroupBox);
        maxWidthLabel->setObjectName(QString::fromUtf8("maxWidthLabel"));
        maxWidthLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(maxWidthLabel, 9, 0, 1, 1);

        frame = new QFrame(displayGroupBox);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMinimumSize(QSize(0, 0));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(0);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        repeatCheckBox = new QCheckBox(frame);
        repeatCheckBox->setObjectName(QString::fromUtf8("repeatCheckBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(repeatCheckBox->sizePolicy().hasHeightForWidth());
        repeatCheckBox->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(repeatCheckBox);

        repeatTimerSpinBox = new QSpinBox(frame);
        repeatTimerSpinBox->setObjectName(QString::fromUtf8("repeatTimerSpinBox"));
        repeatTimerSpinBox->setEnabled(false);
        sizePolicy1.setHeightForWidth(repeatTimerSpinBox->sizePolicy().hasHeightForWidth());
        repeatTimerSpinBox->setSizePolicy(sizePolicy1);
        repeatTimerSpinBox->setMinimum(1);
        repeatTimerSpinBox->setMaximum(86400);
        repeatTimerSpinBox->setSingleStep(1);
        repeatTimerSpinBox->setValue(5);

        horizontalLayout->addWidget(repeatTimerSpinBox);


        gridLayout->addWidget(frame, 5, 1, 1, 2);


        verticalLayout_2->addLayout(gridLayout);


        verticalLayout->addWidget(displayGroupBox);

        groupBox = new QGroupBox(LXQtCustomCommandConfiguration);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        clickLabel = new QLabel(groupBox);
        clickLabel->setObjectName(QString::fromUtf8("clickLabel"));
        clickLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(clickLabel, 0, 0, 1, 1);

        wheelUpLineEdit = new QLineEdit(groupBox);
        wheelUpLineEdit->setObjectName(QString::fromUtf8("wheelUpLineEdit"));

        gridLayout_2->addWidget(wheelUpLineEdit, 2, 1, 1, 1);

        wheelDownLineEdit = new QLineEdit(groupBox);
        wheelDownLineEdit->setObjectName(QString::fromUtf8("wheelDownLineEdit"));

        gridLayout_2->addWidget(wheelDownLineEdit, 3, 1, 1, 1);

        clickLineEdit = new QLineEdit(groupBox);
        clickLineEdit->setObjectName(QString::fromUtf8("clickLineEdit"));

        gridLayout_2->addWidget(clickLineEdit, 0, 1, 1, 1);

        wheelUpLabel = new QLabel(groupBox);
        wheelUpLabel->setObjectName(QString::fromUtf8("wheelUpLabel"));
        wheelUpLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(wheelUpLabel, 2, 0, 1, 1);

        wheelDownLabel = new QLabel(groupBox);
        wheelDownLabel->setObjectName(QString::fromUtf8("wheelDownLabel"));
        wheelDownLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(wheelDownLabel, 3, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(LXQtCustomCommandConfiguration);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Reset);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(autoRotateCheckBox, fontButton);
        QWidget::setTabOrder(fontButton, commandPlainTextEdit);
        QWidget::setTabOrder(commandPlainTextEdit, runWithBashCheckBox);
        QWidget::setTabOrder(runWithBashCheckBox, repeatCheckBox);
        QWidget::setTabOrder(repeatCheckBox, repeatTimerSpinBox);
        QWidget::setTabOrder(repeatTimerSpinBox, iconLineEdit);
        QWidget::setTabOrder(iconLineEdit, iconBrowseButton);
        QWidget::setTabOrder(iconBrowseButton, textLineEdit);
        QWidget::setTabOrder(textLineEdit, maxWidthSpinBox);
        QWidget::setTabOrder(maxWidthSpinBox, clickLineEdit);
        QWidget::setTabOrder(clickLineEdit, wheelUpLineEdit);
        QWidget::setTabOrder(wheelUpLineEdit, wheelDownLineEdit);

        retranslateUi(LXQtCustomCommandConfiguration);
        QObject::connect(buttonBox, SIGNAL(accepted()), LXQtCustomCommandConfiguration, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), LXQtCustomCommandConfiguration, SLOT(reject()));

        QMetaObject::connectSlotsByName(LXQtCustomCommandConfiguration);
    } // setupUi

    void retranslateUi(QDialog *LXQtCustomCommandConfiguration)
    {
        LXQtCustomCommandConfiguration->setWindowTitle(QCoreApplication::translate("LXQtCustomCommandConfiguration", "Custom Command Configuration", nullptr));
        displayGroupBox->setTitle(QCoreApplication::translate("LXQtCustomCommandConfiguration", "Display", nullptr));
        iconLineEdit->setPlaceholderText(QCoreApplication::translate("LXQtCustomCommandConfiguration", "Use icon from theme or browse file", nullptr));
        runWithBashCheckBox->setText(QCoreApplication::translate("LXQtCustomCommandConfiguration", "Run with \"bash -c\"", nullptr));
        fontButton->setText(QCoreApplication::translate("LXQtCustomCommandConfiguration", "Select Font", nullptr));
        textLabel->setText(QCoreApplication::translate("LXQtCustomCommandConfiguration", "Text", nullptr));
        commandLabel->setText(QCoreApplication::translate("LXQtCustomCommandConfiguration", "Command", nullptr));
        fontLabel->setText(QCoreApplication::translate("LXQtCustomCommandConfiguration", "Font", nullptr));
        maxWidthSpinBox->setSuffix(QCoreApplication::translate("LXQtCustomCommandConfiguration", " px", nullptr));
        textLineEdit->setText(QCoreApplication::translate("LXQtCustomCommandConfiguration", "%1", nullptr));
        textLineEdit->setPlaceholderText(QCoreApplication::translate("LXQtCustomCommandConfiguration", "Use %1 to display command output", nullptr));
        iconLabel->setText(QCoreApplication::translate("LXQtCustomCommandConfiguration", "Icon", nullptr));
        iconBrowseButton->setText(QCoreApplication::translate("LXQtCustomCommandConfiguration", "Browse", nullptr));
        autoRotateCheckBox->setText(QCoreApplication::translate("LXQtCustomCommandConfiguration", "Autorotate when the panel is vertical", nullptr));
        commandPlainTextEdit->setPlainText(QCoreApplication::translate("LXQtCustomCommandConfiguration", "echo Configure...", nullptr));
        commandPlainTextEdit->setPlaceholderText(QCoreApplication::translate("LXQtCustomCommandConfiguration", "Command to run", nullptr));
        maxWidthLabel->setText(QCoreApplication::translate("LXQtCustomCommandConfiguration", "Max Width", nullptr));
        repeatCheckBox->setText(QCoreApplication::translate("LXQtCustomCommandConfiguration", "Repeat command after:", nullptr));
        repeatTimerSpinBox->setSuffix(QCoreApplication::translate("LXQtCustomCommandConfiguration", " second(s)", nullptr));
        groupBox->setTitle(QCoreApplication::translate("LXQtCustomCommandConfiguration", "Mouse Commands", nullptr));
        clickLabel->setText(QCoreApplication::translate("LXQtCustomCommandConfiguration", "Click", nullptr));
        wheelUpLineEdit->setPlaceholderText(QCoreApplication::translate("LXQtCustomCommandConfiguration", "Command to run", nullptr));
        wheelDownLineEdit->setPlaceholderText(QCoreApplication::translate("LXQtCustomCommandConfiguration", "Command to run", nullptr));
        clickLineEdit->setPlaceholderText(QCoreApplication::translate("LXQtCustomCommandConfiguration", "Command to run", nullptr));
        wheelUpLabel->setText(QCoreApplication::translate("LXQtCustomCommandConfiguration", "Wheel Up", nullptr));
        wheelDownLabel->setText(QCoreApplication::translate("LXQtCustomCommandConfiguration", "Wheel Down", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LXQtCustomCommandConfiguration: public Ui_LXQtCustomCommandConfiguration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LXQTCUSTOMCOMMANDCONFIGURATION_H
