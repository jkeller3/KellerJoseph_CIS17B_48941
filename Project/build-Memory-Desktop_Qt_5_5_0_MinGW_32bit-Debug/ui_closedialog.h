/********************************************************************************
** Form generated from reading UI file 'closedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOSEDIALOG_H
#define UI_CLOSEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_CloseDialog
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CloseDialog)
    {
        if (CloseDialog->objectName().isEmpty())
            CloseDialog->setObjectName(QStringLiteral("CloseDialog"));
        CloseDialog->resize(205, 95);
        buttonBox = new QDialogButtonBox(CloseDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(-160, 50, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(CloseDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CloseDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CloseDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CloseDialog);
    } // setupUi

    void retranslateUi(QDialog *CloseDialog)
    {
        CloseDialog->setWindowTitle(QApplication::translate("CloseDialog", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class CloseDialog: public Ui_CloseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOSEDIALOG_H
