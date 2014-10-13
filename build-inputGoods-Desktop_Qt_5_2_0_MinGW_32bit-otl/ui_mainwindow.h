/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *SearchGoods;
    QPushButton *VSiteButton;
    QPushButton *CloseButton;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(215, 153);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        verticalLayoutWidget = new QWidget(MainWindow);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, -10, 211, 151));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        SearchGoods = new QPushButton(verticalLayoutWidget);
        SearchGoods->setObjectName(QStringLiteral("SearchGoods"));

        verticalLayout->addWidget(SearchGoods);

        VSiteButton = new QPushButton(verticalLayoutWidget);
        VSiteButton->setObjectName(QStringLiteral("VSiteButton"));

        verticalLayout->addWidget(VSiteButton);

        CloseButton = new QPushButton(verticalLayoutWidget);
        CloseButton->setObjectName(QStringLiteral("CloseButton"));

        verticalLayout->addWidget(CloseButton);


        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\237\320\276\321\201\321\202\321\203\320\277\320\273\320\265\320\275\320\270\320\265 \320\242\320\234\320\246", 0));
        SearchGoods->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272 \320\270\320\267 \321\201\320\270\321\201\321\202\320\265\320\274\321\213 \320\277\320\265\321\200\320\265\320\264\320\265\320\273\320\272\320\270 \321\201\321\207\320\265\321\202\320\276\320\262", 0));
        VSiteButton->setText(QApplication::translate("MainWindow", "\320\240\320\260\320\261\320\276\321\202\320\260 \321\201 \321\201\320\260\320\271\321\202\320\276\320\274", 0));
        CloseButton->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
