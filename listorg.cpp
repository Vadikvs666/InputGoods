#include "listorg.h"
#include "dbsingl.h"
#include "mainwindow.h"
#include "params.h"

#include <QtWidgets/QHBoxLayout>
#include <QModelIndex>

listOrg::listOrg(QWidget *parent) :
    QWidget(parent)
{

    horizontalLayout = new QHBoxLayout();
    EditButt = new QPushButton();
  //  horizontalLayout->addWidget(EditButt);
    SelectButt = new QPushButton();
    horizontalLayout->addWidget(SelectButt);
    CloseButton = new QPushButton();
    horizontalLayout->addWidget(CloseButton);
    orgView = new QTableView();


    QVBoxLayout *main = new QVBoxLayout;
    main->addWidget(orgView);
    main->addLayout(horizontalLayout);
    setLayout(main);


    EditButt->setText("Edit");
    SelectButt->setText("Выбрать");
    CloseButton->setText("Close");

    DBSingl *BD;
    params *param;
    param=new params();
    BD->getInstance(param->GetConnectionString());
    QString query="SELECT * FROM"+BD->too("Postavschiki");
    BD->Select(query)->setHeaderData(1, Qt::Horizontal, "Организация",2);
     BD->Select(query)->setHeaderData(2, Qt::Horizontal,"ИНН",0);
    orgView->setModel( BD->Select(query));
    orgView->hideColumn(0);
   // orgView->setColumnWidth(1,orgView->width());

    QObject::connect(CloseButton,SIGNAL(clicked()),this,SLOT(close()), Qt::AutoConnection);
    QObject::connect(SelectButt,SIGNAL(clicked()),this,SLOT(OnSelectButton_Pressed()), Qt::AutoConnection);
}

void listOrg::OnSelectButton_Pressed()
{


    QModelIndex myIndex1;
    myIndex1=listOrg::orgView->currentIndex();
    QVariant myData; //Сюда положим данные из ячейки
    QModelIndex myIndex;
    myIndex = listOrg::orgView->model()->index(myIndex1.row(), 0, QModelIndex()); // row, column это интересующая вас ячейка
    myData = listOrg::orgView->model()->data( myIndex, 0);
    emit selected(myData.toInt());
    this->close();


}
