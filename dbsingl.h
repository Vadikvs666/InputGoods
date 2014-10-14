#ifndef DBSINGL_H
#define DBSINGL_H

# include "QtSql/QSqlDatabase"
# include "QtSql/QSqlTableModel"
# include "QSqlQueryModel"
# include "QSqlQuery"
# include "QString"
#include "QMessageBox"



class DBSingl
{
private:
  static DBSingl * p_instance;
  // Конструкторы и оператор присваивания недоступны клиентам
  DBSingl(QString ConString="");
  DBSingl( const DBSingl& );
  DBSingl& operator=( DBSingl& );
  QSqlDatabase database;


public:
  static DBSingl * getInstance(QString Con) {
      if(!p_instance)

          p_instance = new DBSingl(Con);


           return p_instance;


  }
    QSqlQueryModel *SelectOrganisation();
    QString  QueryOneAnswer(QString q);
    QSqlQueryModel *Select(QString query);
    QString too(QString s)
    {
        return "\""+s+"\"";
    }

    QString toop(QString s)
    {
        QString temp="\'"+s+"\'";
        return temp.toUtf8();
    }
    void Setdb(QString con);
    bool status;
    QString GetPostById(int id);
    bool InsertGoodsToSiteFromPriceCsv(QString query);
   int k;
};



#endif // DBSINGL_H
