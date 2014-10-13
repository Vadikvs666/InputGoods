#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include "searchpost.h"
#include "dbsingl.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

signals:
    void goodbuy();

private slots:
    void on_CloseButton_clicked();



    void on_SearchGoods_clicked();

    void on_VSiteButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
