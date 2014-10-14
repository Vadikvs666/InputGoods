#ifndef VVSRESULT_H
#define VVSRESULT_H

#include <QWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

class VVSResult : public QWidget
{
    Q_OBJECT
public:
    explicit VVSResult(QWidget *parent = 0);
    VVSResult(QString data);
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *VhorizontalLayout;
    QPushButton *VShowDoc;
    QPushButton *VCloseButton;
    QTableView *VView;

signals:

public slots:
private:
    void VCreateForm();

};

#endif // VVSRESULT_H
