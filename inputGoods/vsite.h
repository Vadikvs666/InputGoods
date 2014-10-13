#ifndef VSITE_H
#define VSITE_H

#include <QWidget>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include "dbsingl.h"
#include "QString"
#include "../products/products.h"
#include "../products/listelem.h"
#include <iostream>
#include <fstream>
#include <algorithm>
#include <iterator>
#include <string>
#include <conio.h>
# include "QFileDialog"
#include <QMenuBar>

class VSite : public QWidget
{
    Q_OBJECT
public:
    explicit VSite(QWidget *parent = 0);
    QPushButton *VCloseButton;
    QPushButton *VConnectButton;
    QPushButton *VGetMaxButton;
    QPushButton *VAddDataButton;
    DBSingl *BD;
    ListElem<Products> *prod;


signals:
    void buy();

public slots:
    void CloseSend();
    void on_VCloseButton_clicked();
    void on_VConnectButton_clicked();
    void on_VGetMaxButton_clicked();
    void on_VAddDataButton_clicked();

};
QString CreateValidWebFileName(QString str);
QString IS(int k);
QString remK(QString str);
#endif // VSITE_H
