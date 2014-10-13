/********************************************************************************
** Form generated from reading UI file 'searchpost.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHPOST_H
#define UI_SEARCHPOST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
# include <QLayout>
# include "QVBoxLayout"
# include "QVBoxLayout"

QT_BEGIN_NAMESPACE

class Ui_SearchPost
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *SelOrgButton;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox;
    QLineEdit *ArtikulSearch;
    QGroupBox *groupBox_2;
    QLineEdit *NameSearch;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QPushButton *SearchButton;
    QPushButton *CloseButton;


    void setupUi(QWidget *SearchPost)
    {
        if (SearchPost->objectName().isEmpty())
            SearchPost->setObjectName(QStringLiteral("SearchPost"));
        SearchPost->resize(438, 165);
        SearchPost->setAutoFillBackground(false);
        horizontalLayoutWidget = new QWidget(SearchPost);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 421, 31));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(horizontalLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
       // lineEdit->setEnabled(false);

        horizontalLayout->addWidget(lineEdit);

        SelOrgButton = new QPushButton(horizontalLayoutWidget);
        SelOrgButton->setObjectName(QStringLiteral("SelOrgButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SelOrgButton->sizePolicy().hasHeightForWidth());
        SelOrgButton->setSizePolicy(sizePolicy);
        SelOrgButton->setSizeIncrement(QSize(0, 0));
        SelOrgButton->setBaseSize(QSize(20, 0));

        horizontalLayout->addWidget(SelOrgButton);

        horizontalLayoutWidget_2 = new QWidget(SearchPost);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 40, 421, 71));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(horizontalLayoutWidget_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        ArtikulSearch = new QLineEdit(groupBox);
        ArtikulSearch->setObjectName(QStringLiteral("ArtikulSearch"));
        ArtikulSearch->setGeometry(QRect(10, 30, 181, 21));

        horizontalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(horizontalLayoutWidget_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        NameSearch = new QLineEdit(groupBox_2);
        NameSearch->setObjectName(QStringLiteral("NameSearch"));
        NameSearch->setGeometry(QRect(10, 30, 181, 21));

        horizontalLayout_2->addWidget(groupBox_2);

        horizontalLayoutWidget_3 = new QWidget(SearchPost);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(191, 110, 239, 51));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(horizontalLayoutWidget_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_3->addWidget(pushButton);

        SearchButton = new QPushButton(horizontalLayoutWidget_3);
        SearchButton->setObjectName(QStringLiteral("SearchButton"));

        horizontalLayout_3->addWidget(SearchButton);

        CloseButton = new QPushButton(horizontalLayoutWidget_3);
        CloseButton->setObjectName(QStringLiteral("CloseButton"));

        horizontalLayout_3->addWidget(CloseButton);
        QVBoxLayout *main = new QVBoxLayout;
        main->addLayout(horizontalLayout);
        main->addLayout(horizontalLayout_2);
        main->addLayout(horizontalLayout_3);
        SearchPost->setLayout(main);



        retranslateUi(SearchPost);

        QMetaObject::connectSlotsByName(SearchPost);
    } // setupUi

    void retranslateUi(QWidget *SearchPost)
    {
        SearchPost->setWindowTitle(QApplication::translate("SearchPost", "Form", 0));
        label->setText(QApplication::translate("SearchPost", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\236\321\200\320\263\320\260\320\275\320\270\320\267\320\260\321\206\320\270\321\216", 0));
        lineEdit->setText(QApplication::translate("SearchPost", "\320\223\320\260\320\273\320\260-\321\206\320\265\320\275\321\202\321\200", 0));
        SelOrgButton->setText(QApplication::translate("SearchPost", "...", 0));
        groupBox->setTitle(QApplication::translate("SearchPost", "\320\237\320\276\320\270\321\201\320\272 \320\277\320\276 \320\260\321\200\321\202\320\270\320\272\321\203\320\273\321\203", 0));
        groupBox_2->setTitle(QApplication::translate("SearchPost", "\320\237\320\276\320\270\321\201\320\272 \320\277\320\276 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\321\216", 0));
        pushButton->setText(QApplication::translate("SearchPost", "PushButton", 0));
        SearchButton->setText(QApplication::translate("SearchPost", "\320\230\321\201\320\272\320\260\321\202\321\214", 0));
        CloseButton->setText(QApplication::translate("SearchPost", "\320\222\321\213\321\205\320\276\320\264", 0));
    } // retranslateUi

};

namespace Ui {
    class SearchPost: public Ui_SearchPost {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHPOST_H
