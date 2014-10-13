#ifndef PARAMS_H
#define PARAMS_H
#include "QString.h"
#include "QFile.h"
#include "QFileDialog"
#include "QInputDialog"
#include "QTextStream"
#include "QWidget"

#include "QObject"

class params :public QWidget
{

private:



  QString ConnectionString;
  QString password;
  QString user;
  QString driver;
  QString path;


public:
   params();

  QString GetConnectionString(){return ConnectionString;}
  QString GetPassword(){return password;}
  QString GetUser(){return user;}
  QString GetDriver(){return driver;}
  QString GetPath(){return path;}
  void LoadDB();
  void init();
  QString addslash(QString str);
};

#endif // PARAMS_H




