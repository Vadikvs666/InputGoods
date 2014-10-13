/********************************************************************************
** Form generated from reading UI file 'listorgform.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTORGFORM_H
#define UI_LISTORGFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListOrgForm
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *EditButt;
    QPushButton *SelectButt;
    QPushButton *CloseButton;
    QTableView *orgView;

    void setupUi(QWidget *ListOrgForm)
    {
        if (ListOrgForm->objectName().isEmpty())
            ListOrgForm->setObjectName(QStringLiteral("ListOrgForm"));
        ListOrgForm->resize(399, 322);
        horizontalLayoutWidget = new QWidget(ListOrgForm);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 260, 381, 51));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        EditButt = new QPushButton(horizontalLayoutWidget);
        EditButt->setObjectName(QStringLiteral("EditButt"));

        horizontalLayout->addWidget(EditButt);

        SelectButt = new QPushButton(horizontalLayoutWidget);
        SelectButt->setObjectName(QStringLiteral("SelectButt"));

        horizontalLayout->addWidget(SelectButt);

        CloseButton = new QPushButton(horizontalLayoutWidget);
        CloseButton->setObjectName(QStringLiteral("CloseButton"));

        horizontalLayout->addWidget(CloseButton);

        orgView = new QTableView(ListOrgForm);
        orgView->setObjectName(QStringLiteral("orgView"));
        orgView->setGeometry(QRect(10, 10, 381, 241));

        QVBoxLayout *main = new QVBoxLayout;
        main->addWidget(orgView);
        main->addLayout(horizontalLayout);

        ListOrgForm->setLayout(main);

        retranslateUi(ListOrgForm);

        QMetaObject::connectSlotsByName(ListOrgForm);
    } // setupUi

    void retranslateUi(QWidget *ListOrgForm)
    {
        ListOrgForm->setWindowTitle(QApplication::translate("ListOrgForm", "\320\236\321\200\320\263\320\260\320\275\320\270\320\267\320\260\321\206\320\270\320\270", 0));
        EditButt->setText(QApplication::translate("ListOrgForm", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", 0));
        SelectButt->setText(QApplication::translate("ListOrgForm", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", 0));
        CloseButton->setText(QApplication::translate("ListOrgForm", "\320\267\320\260\320\272\321\200\321\213\321\202\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class ListOrgForm: public Ui_ListOrgForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTORGFORM_H
