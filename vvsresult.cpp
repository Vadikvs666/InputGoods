#include "vvsresult.h"
#include "params.h"
#include "dbsingl.h"
#include "QMessageBox"


VVSResult::VVSResult(QWidget *parent) :
    QWidget(parent)
{
       VCreateForm();
}
VVSResult::VVSResult(QString data)

{
       VCreateForm();
       DBSingl *BD;
       params *param;
       param=new params();
       BD->getInstance(param->GetConnectionString());
       /*SELECT *
FROM "SchetePrih" INNER JOIN "TovarShetPrih" ON "SchetePrih"."Kod" = "TovarShetPrih"."KodShetPrih"
WHERE "TovarShetPrih"."NomerKod"='1'*/
       QString query="SELECT * FROM "+BD->too("SchetePrih")+" INNER JOIN "+BD->too("TovarShetPrih")+" ON "+BD->too("SchetePrih")+
               "."+BD->too("Kod")+" = "+BD->too("TovarShetPrih")+"."+BD->too("KodShetPrih")+" WHERE "+BD->too("TovarShetPrih")+"."+BD->too("NomerKod")+" ="+BD->toop(data);

       VView->setModel(BD->Select(query));
        connect(VCloseButton,SIGNAL(clicked()),this,SLOT(close()));

}

void  VVSResult::VCreateForm()
{
    VhorizontalLayout = new QHBoxLayout();
    VShowDoc = new QPushButton();
    VhorizontalLayout->addWidget(VShowDoc);
    VCloseButton = new QPushButton();
    VhorizontalLayout->addWidget(VCloseButton);
    VView = new QTableView();


    QVBoxLayout *main = new QVBoxLayout;
    main->addWidget(VView);
    main->addLayout(VhorizontalLayout);
    setLayout(main);


    VShowDoc->setText("Показать документ");
    VCloseButton->setText("Закрыть");
}
