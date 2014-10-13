#include "dbsingl.h"
#include "QMessageBox"

DBSingl* DBSingl::p_instance = 0;


DBSingl::DBSingl(QString ConString)
{
    database = QSqlDatabase::addDatabase("QODBC");
    database.setDatabaseName(ConString);
    database.open();
    if (!database.isOpen())
    {
       QMessageBox::critical(NULL,"Ошибка", "Ошибка подключения к  базе данных :  "+ConString,  QMessageBox::Ok);
       status=false;
    }else status=true;

}

 QSqlQueryModel* DBSingl::SelectOrganisation()
{

    QSqlQueryModel * model;
    model = new  QSqlQueryModel;
    model->setQuery("SELECT "+too("kod")+", "+too("NazvanieFirmy")+" as "+too("Организация")+" FROM "+too("Postavschiki"));//для firebird

    return model;

 }

 QString DBSingl::QueryOneAnswer(QString q)
 {
    QSqlQuery query;
    QString result="";

   if (query.exec(q))
   {
        query.next();
        result =  query.value(0).toString();

    }
   return result;
 }

 QSqlQueryModel* DBSingl::Select(QString query)
{

    QSqlQueryModel * model;
    model = new  QSqlQueryModel;
    model->setQuery(query);
    return model;

 }

 void DBSingl::Setdb(QString con)
 {

     database.close();
     database = QSqlDatabase::addDatabase("QODBC");
     database.setDatabaseName(con);
     database.open();
     if (!database.isOpen())
     {
        QMessageBox::critical(NULL,"Ошибка", "Ошибка подключения к  базе данных",  QMessageBox::Ok);
     }
 }

 QString DBSingl::GetPostById(int id)
 {
     QSqlQuery query;
     QString result="";
     QVariant s=id;
   // QString query="SELECT * FROM "+BD->too("Postavschiki")+" WHERE "+BD->too("kod")+"="+BD->toop(v.toString());//для firebird
    if (query.exec("SELECT * FROM Postavschiki WHERE kod="+s.toString()))
    {
         query.next();
         result =  query.value("NazvanieFirmy").toString();

     }
    return result;
 }

 bool DBSingl::InsertGoodsToSiteFromPriceCsv(QString query)
 {
    // QSqlQuery query;

 }



