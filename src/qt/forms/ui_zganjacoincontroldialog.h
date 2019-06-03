/********************************************************************************
** Form generated from reading UI file 'zganjacoincontroldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZGANJACOINCONTROLDIALOG_H
#define UI_ZGANJACOINCONTROLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ZXORNControlDialog
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *labelQuantity;
    QLabel *labelQuantity_int;
    QLabel *labelZXORN;
    QLabel *labelZXORN_int;
    QPushButton *pushButtonAll;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ZXORNControlDialog)
    {
        if (ZXORNControlDialog->objectName().isEmpty())
            ZXORNControlDialog->setObjectName(QStringLiteral("ZXORNControlDialog"));
        ZXORNControlDialog->resize(681, 384);
        ZXORNControlDialog->setMinimumSize(QSize(681, 384));
        gridLayout = new QGridLayout(ZXORNControlDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        labelQuantity = new QLabel(ZXORNControlDialog);
        labelQuantity->setObjectName(QStringLiteral("labelQuantity"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelQuantity);

        labelQuantity_int = new QLabel(ZXORNControlDialog);
        labelQuantity_int->setObjectName(QStringLiteral("labelQuantity_int"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelQuantity_int);

        labelZXORN = new QLabel(ZXORNControlDialog);
        labelZXORN->setObjectName(QStringLiteral("labelZXORN"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelZXORN);

        labelZXORN_int = new QLabel(ZXORNControlDialog);
        labelZXORN_int->setObjectName(QStringLiteral("labelZXORN_int"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelZXORN_int);

        pushButtonAll = new QPushButton(ZXORNControlDialog);
        pushButtonAll->setObjectName(QStringLiteral("pushButtonAll"));

        formLayout->setWidget(2, QFormLayout::LabelRole, pushButtonAll);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeWidget = new QTreeWidget(ZXORNControlDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(3, QStringLiteral("Confirmations"));
        __qtreewidgetitem->setText(2, QStringLiteral("zMRJA Public ID"));
        __qtreewidgetitem->setText(1, QStringLiteral("Denomination"));
        __qtreewidgetitem->setText(0, QStringLiteral("Select"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setMinimumSize(QSize(0, 250));
        treeWidget->setAlternatingRowColors(true);
        treeWidget->setSortingEnabled(true);
        treeWidget->setColumnCount(5);
        treeWidget->header()->setDefaultSectionSize(100);

        verticalLayout->addWidget(treeWidget);

        buttonBox = new QDialogButtonBox(ZXORNControlDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);


        retranslateUi(ZXORNControlDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ZXORNControlDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ZXORNControlDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ZXORNControlDialog);
    } // setupUi

    void retranslateUi(QDialog *ZXORNControlDialog)
    {
        ZXORNControlDialog->setWindowTitle(QApplication::translate("ZXORNControlDialog", "Select zXORN to Spend", Q_NULLPTR));
        labelQuantity->setText(QApplication::translate("ZXORNControlDialog", "Quantity", Q_NULLPTR));
        labelQuantity_int->setText(QApplication::translate("ZXORNControlDialog", "0", Q_NULLPTR));
        labelZXORN->setText(QApplication::translate("ZXORNControlDialog", "zMRJA", Q_NULLPTR));
        labelZXORN_int->setText(QApplication::translate("ZXORNControlDialog", "0", Q_NULLPTR));
        pushButtonAll->setText(QApplication::translate("ZXORNControlDialog", "Select/Deselect All", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("ZXORNControlDialog", "Is Spendable", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ZXORNControlDialog: public Ui_ZXORNControlDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZGANJACOINCONTROLDIALOG_H
