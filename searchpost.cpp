#include "searchpost.h"

#include "ui_searchpost.h"

#include "listorg.h"
#include "QFile.h"
#include "QFileDialog"
#include "QInputDialog"
#include "QTextStream"
#include "params.h"
#include "vvsresult.h"



SearchPost::SearchPost(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SearchPost)
{
    ui->setupUi(this);


    params *param;
    param= new params();
    BD->getInstance(param->GetConnectionString());
    id_org=3916348;
    ui->lineEdit->setText(BD->GetPostById(id_org));

}

SearchPost::~SearchPost()
{
    delete ui;
}

void SearchPost::on_CloseButton_clicked()
{
    emit buy();
    this->close();
}

void SearchPost::OrgSelected(int org_id)
{

    ui->lineEdit->setText(BD->GetPostById(org_id));
    id_org=org_id;

}

void SearchPost::on_SelOrgButton_clicked()
{
    listOrg *widget;
    widget =new  listOrg;
    QObject::connect(this,SIGNAL(buy()),widget,SLOT(close()));
    QObject::connect(widget,SIGNAL(selected(int)),this,SLOT(OrgSelected(int)));
    widget->show();
}

void SearchPost::on_CloseButton_pressed()
{

}

void SearchPost::CloseSend()
{
    emit buy();
    this->close();

}

void SearchPost::on_SearchButton_clicked()
{
    VVSResult *widget;
    widget =new VVSResult(ui->ArtikulSearch->text());
    QObject::connect(this,SIGNAL(buy()),widget,SLOT(close()));
    widget->show();

}
