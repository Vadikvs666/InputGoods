#ifndef SEARCHPOST_H
#define SEARCHPOST_H

#include <QWidget>
#include "dbsingl.h"

namespace Ui {
class SearchPost;
}

class SearchPost : public QWidget
{
    Q_OBJECT

public:
    explicit SearchPost(QWidget *parent = 0);
    ~SearchPost();
signals:
    void buy();

private slots:
    void on_CloseButton_clicked();
    void OrgSelected(int org_id);

    void on_SelOrgButton_clicked();

    void on_CloseButton_pressed();
    void on_SearchButton_clicked();

public slots:

    void CloseSend();

private:
    Ui::SearchPost *ui;
    DBSingl *BD;
    int id_org;
};

#endif // SEARCHPOST_H
