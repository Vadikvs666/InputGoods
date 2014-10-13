#ifndef LISTORG_H
#define LISTORG_H

#include <QWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

class listOrg : public QWidget
{
    Q_OBJECT
public:
    explicit listOrg(QWidget *parent = 0);
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *EditButt;
    QPushButton *SelectButt;
    QPushButton *CloseButton;
    QTableView *orgView;


signals:
    void selected(int);

public slots:
    void OnSelectButton_Pressed();


};

#endif // LISTORG_H
