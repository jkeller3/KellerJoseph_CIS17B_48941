/********************************************************************************
** Form generated from reading UI file 'findcrap.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDCRAP_H
#define UI_FINDCRAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_findCrap
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *goButton;

    void setupUi(QWidget *findCrap)
    {
        if (findCrap->objectName().isEmpty())
            findCrap->setObjectName(QStringLiteral("findCrap"));
        findCrap->resize(400, 300);
        verticalLayout = new QVBoxLayout(findCrap);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textEdit = new QTextEdit(findCrap);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(findCrap);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(findCrap);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        goButton = new QPushButton(findCrap);
        goButton->setObjectName(QStringLiteral("goButton"));

        horizontalLayout->addWidget(goButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(findCrap);

        QMetaObject::connectSlotsByName(findCrap);
    } // setupUi

    void retranslateUi(QWidget *findCrap)
    {
        findCrap->setWindowTitle(QApplication::translate("findCrap", "findCrap", 0));
        label->setText(QApplication::translate("findCrap", "Search for:", 0));
        goButton->setText(QApplication::translate("findCrap", "Go!", 0));
    } // retranslateUi

};

namespace Ui {
    class findCrap: public Ui_findCrap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDCRAP_H
