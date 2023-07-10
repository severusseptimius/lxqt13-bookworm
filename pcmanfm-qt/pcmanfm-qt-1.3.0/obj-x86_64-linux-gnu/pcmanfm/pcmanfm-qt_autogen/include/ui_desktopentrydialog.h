/********************************************************************************
** Form generated from reading UI file 'desktopentrydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DESKTOPENTRYDIALOG_H
#define UI_DESKTOPENTRYDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DesktopEntryDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *nameLabel;
    QLineEdit *nameEdit;
    QLabel *descriptionLabel;
    QLineEdit *descriptionEdit;
    QLabel *commentLabel;
    QLineEdit *commentEdit;
    QLabel *commandLabel;
    QHBoxLayout *horizontalLayout;
    QLineEdit *commandEdit;
    QToolButton *commandButton;
    QLabel *iconLabel;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *iconEdit;
    QToolButton *iconButton;
    QLabel *terminalLabel;
    QComboBox *terminalCombo;
    QLabel *typeLabel;
    QComboBox *typeCombo;
    QLabel *catLabel;
    QLineEdit *catEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DesktopEntryDialog)
    {
        if (DesktopEntryDialog->objectName().isEmpty())
            DesktopEntryDialog->setObjectName(QString::fromUtf8("DesktopEntryDialog"));
        DesktopEntryDialog->resize(400, 312);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("application-x-desktop");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        DesktopEntryDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(DesktopEntryDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        nameLabel = new QLabel(DesktopEntryDialog);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, nameLabel);

        nameEdit = new QLineEdit(DesktopEntryDialog);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setClearButtonEnabled(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, nameEdit);

        descriptionLabel = new QLabel(DesktopEntryDialog);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, descriptionLabel);

        descriptionEdit = new QLineEdit(DesktopEntryDialog);
        descriptionEdit->setObjectName(QString::fromUtf8("descriptionEdit"));
        descriptionEdit->setClearButtonEnabled(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, descriptionEdit);

        commentLabel = new QLabel(DesktopEntryDialog);
        commentLabel->setObjectName(QString::fromUtf8("commentLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, commentLabel);

        commentEdit = new QLineEdit(DesktopEntryDialog);
        commentEdit->setObjectName(QString::fromUtf8("commentEdit"));
        commentEdit->setClearButtonEnabled(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, commentEdit);

        commandLabel = new QLabel(DesktopEntryDialog);
        commandLabel->setObjectName(QString::fromUtf8("commandLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, commandLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        commandEdit = new QLineEdit(DesktopEntryDialog);
        commandEdit->setObjectName(QString::fromUtf8("commandEdit"));
        commandEdit->setClearButtonEnabled(true);

        horizontalLayout->addWidget(commandEdit);

        commandButton = new QToolButton(DesktopEntryDialog);
        commandButton->setObjectName(QString::fromUtf8("commandButton"));

        horizontalLayout->addWidget(commandButton);


        formLayout->setLayout(4, QFormLayout::FieldRole, horizontalLayout);

        iconLabel = new QLabel(DesktopEntryDialog);
        iconLabel->setObjectName(QString::fromUtf8("iconLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, iconLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        iconEdit = new QLineEdit(DesktopEntryDialog);
        iconEdit->setObjectName(QString::fromUtf8("iconEdit"));
        iconEdit->setText(QString::fromUtf8("application-x-desktop"));
        iconEdit->setClearButtonEnabled(true);

        horizontalLayout_2->addWidget(iconEdit);

        iconButton = new QToolButton(DesktopEntryDialog);
        iconButton->setObjectName(QString::fromUtf8("iconButton"));

        horizontalLayout_2->addWidget(iconButton);


        formLayout->setLayout(5, QFormLayout::FieldRole, horizontalLayout_2);

        terminalLabel = new QLabel(DesktopEntryDialog);
        terminalLabel->setObjectName(QString::fromUtf8("terminalLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, terminalLabel);

        terminalCombo = new QComboBox(DesktopEntryDialog);
        terminalCombo->addItem(QString());
        terminalCombo->addItem(QString());
        terminalCombo->setObjectName(QString::fromUtf8("terminalCombo"));

        formLayout->setWidget(6, QFormLayout::FieldRole, terminalCombo);

        typeLabel = new QLabel(DesktopEntryDialog);
        typeLabel->setObjectName(QString::fromUtf8("typeLabel"));

        formLayout->setWidget(7, QFormLayout::LabelRole, typeLabel);

        typeCombo = new QComboBox(DesktopEntryDialog);
        typeCombo->addItem(QString());
        typeCombo->addItem(QString());
        typeCombo->setObjectName(QString::fromUtf8("typeCombo"));

        formLayout->setWidget(7, QFormLayout::FieldRole, typeCombo);

        catLabel = new QLabel(DesktopEntryDialog);
        catLabel->setObjectName(QString::fromUtf8("catLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, catLabel);

        catEdit = new QLineEdit(DesktopEntryDialog);
        catEdit->setObjectName(QString::fromUtf8("catEdit"));
        catEdit->setClearButtonEnabled(true);

        formLayout->setWidget(3, QFormLayout::FieldRole, catEdit);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(DesktopEntryDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DesktopEntryDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), DesktopEntryDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DesktopEntryDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(DesktopEntryDialog);
    } // setupUi

    void retranslateUi(QDialog *DesktopEntryDialog)
    {
        DesktopEntryDialog->setWindowTitle(QCoreApplication::translate("DesktopEntryDialog", "Create Launcher", nullptr));
        nameLabel->setText(QCoreApplication::translate("DesktopEntryDialog", "Name:", nullptr));
#if QT_CONFIG(whatsthis)
        nameEdit->setWhatsThis(QCoreApplication::translate("DesktopEntryDialog", "Specific name of this launcher.", nullptr));
#endif // QT_CONFIG(whatsthis)
        nameEdit->setPlaceholderText(QString());
        descriptionLabel->setText(QCoreApplication::translate("DesktopEntryDialog", "Description:", nullptr));
#if QT_CONFIG(whatsthis)
        descriptionEdit->setWhatsThis(QCoreApplication::translate("DesktopEntryDialog", "A short description or generic name, like \"Web Browser\" or \"Home Directory\".\n"
"\n"
"It can be left empty.", nullptr));
#endif // QT_CONFIG(whatsthis)
        commentLabel->setText(QCoreApplication::translate("DesktopEntryDialog", "Comment:", nullptr));
#if QT_CONFIG(whatsthis)
        commentEdit->setWhatsThis(QCoreApplication::translate("DesktopEntryDialog", "A short comment.\n"
"\n"
"It can be left empty.", nullptr));
#endif // QT_CONFIG(whatsthis)
        commandLabel->setText(QCoreApplication::translate("DesktopEntryDialog", "Command:", nullptr));
        commandButton->setText(QCoreApplication::translate("DesktopEntryDialog", "...", nullptr));
        iconLabel->setText(QCoreApplication::translate("DesktopEntryDialog", "Icon:", nullptr));
#if QT_CONFIG(whatsthis)
        iconEdit->setWhatsThis(QCoreApplication::translate("DesktopEntryDialog", "Icon to display in file manager, menus, etc.", nullptr));
#endif // QT_CONFIG(whatsthis)
        iconButton->setText(QCoreApplication::translate("DesktopEntryDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        terminalLabel->setToolTip(QCoreApplication::translate("DesktopEntryDialog", "Run in terminal?", nullptr));
#endif // QT_CONFIG(tooltip)
        terminalLabel->setText(QCoreApplication::translate("DesktopEntryDialog", "Terminal:", nullptr));
        terminalCombo->setItemText(0, QCoreApplication::translate("DesktopEntryDialog", "No", nullptr));
        terminalCombo->setItemText(1, QCoreApplication::translate("DesktopEntryDialog", "Yes", nullptr));

#if QT_CONFIG(tooltip)
        terminalCombo->setToolTip(QCoreApplication::translate("DesktopEntryDialog", "Run in terminal?", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        terminalCombo->setWhatsThis(QCoreApplication::translate("DesktopEntryDialog", "Whether the launched program should run in a terminal window.", nullptr));
#endif // QT_CONFIG(whatsthis)
        typeLabel->setText(QCoreApplication::translate("DesktopEntryDialog", "Type:", nullptr));
        typeCombo->setItemText(0, QCoreApplication::translate("DesktopEntryDialog", "Application", nullptr));
        typeCombo->setItemText(1, QCoreApplication::translate("DesktopEntryDialog", "Link", nullptr));

#if QT_CONFIG(whatsthis)
        typeCombo->setWhatsThis(QCoreApplication::translate("DesktopEntryDialog", "Whether this is a link or executes a command.", nullptr));
#endif // QT_CONFIG(whatsthis)
        catLabel->setText(QCoreApplication::translate("DesktopEntryDialog", "Categories:", nullptr));
#if QT_CONFIG(whatsthis)
        catEdit->setWhatsThis(QCoreApplication::translate("DesktopEntryDialog", "Semicolon separated categories in which the entry should be shown if it is used by the DE's main menu (e.g., when put inside ~/.local/share/applications).\n"
"\n"
"It is needed only when you want to use the created file in the main menu. Otherwise, you could leave it empty.\n"
"\n"
"Examples: AudioVideo, Audio, Video, Development, Education, Game, Graphics, Network, Office, Settings, System, Utility, Qt.", nullptr));
#endif // QT_CONFIG(whatsthis)
    } // retranslateUi

};

namespace Ui {
    class DesktopEntryDialog: public Ui_DesktopEntryDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESKTOPENTRYDIALOG_H
