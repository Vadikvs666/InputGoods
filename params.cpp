#include "params.h"
# include "QTextCodec"





params::params()
{
    QFile file("params.ini");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        params::LoadDB();

    }else
    {
        QTextStream in(&file);
        ConnectionString="";
        while (!in.atEnd()) {
            QString line = in.readLine();

            ConnectionString=ConnectionString+line+";";

        }
        file.close();
    }

}

void params::LoadDB()
{
     QFile file("params.ini");
    ConnectionString="";
    QString  fileName_params = QFileDialog::getOpenFileName(this, tr("Выберите файл с базой данной"),"/",tr("файл базы данных (*.mdb *.fdb)"));
    if(fileName_params!="")
    {
       QString r1(fileName_params.operator [](fileName_params.size()-3));
       QString r2(fileName_params.operator [](fileName_params.size()-2));
       QString r3( fileName_params.operator [](fileName_params.size()-1));
       QString type=r1+r2+r3;
       if(type.toLower()=="fdb")
       {

                file.open(QIODevice::WriteOnly);
                QTextStream stream(&file);
               // stream << tr("//В этом файле сохранены параметры подключения к базе данных")<<endl;
                stream << "DRIVER=Firebird/InterBase(r) driver"<<endl;
               ConnectionString=ConnectionString+"DRIVER=Firebird/InterBase(r) driver;";
                stream << "DBNAME="+addslash(fileName_params)<<endl;
                ConnectionString=ConnectionString+"DBNAME="+addslash(fileName_params)+";";
                bool ok;
                QString text = QInputDialog::getText(this, "База данных",
                                                        "Имя пользователя:", QLineEdit::Normal,
                                                        QDir::home().dirName(), &ok);
                if (ok && !text.isEmpty())
                       stream << "UID="+text<<endl;
                ConnectionString=ConnectionString+"UID="+text+";";
                 text = QInputDialog::getText(this, tr("База данных"),
                                                           tr("Пароль:"), QLineEdit::Password,
                                                           QDir::home().dirName(), &ok);
                 if (ok && !text.isEmpty())
                          stream << "PWD="+text<<endl;
                 ConnectionString=ConnectionString+"PWD="+text+";";
                 stream.flush();
                 file.close();



           }
            else if(type.toLower()=="mdb")
            {
                file.open(QIODevice::WriteOnly);
                QTextStream stream(&file);
              //  stream << tr("//В этом файле сохранены параметры подключения к базе данных")<<endl;
                stream << "DRIVER={Microsoft Access Driver (*.mdb)}"<<endl;
                 ConnectionString=ConnectionString+"DRIVER={Microsoft Access Driver (*.mdb)};";
                stream << "FIL={MS Access}"<<endl;
                ConnectionString=ConnectionString+"FIL={MS Access};";
                stream << "DBQ="+addslash(fileName_params)<<endl;
                ConnectionString=ConnectionString+"DBQ="+addslash(fileName_params)+";";
                bool ok;
          /*     QString text = QInputDialog::getText(this, tr("База данных"),
                                                   tr("Имя пользователя:"), QLineEdit::Normal,
                                                   "", &ok);
                if (ok && !text.isEmpty())
                  stream << "UID="+text<<endl;

               text = QInputDialog::getText(this, tr("База данных"),
                                                      tr("Пароль:"), QLineEdit::Password,
                                                      "", &ok);
                if (ok && !text.isEmpty())
                     stream << "PWD=="+text<<endl;  */
                stream.flush();
                file.close();
            }
        }

}

void params::init()
{

}

QString params::addslash(QString str)
{
    int len= str.length();
    QString temp="";
    for(int i=0;i<len;i++)
    {
        temp=temp+str[i];
        if(str[i]=='/')
        {
            temp=temp+'/';
        }
    }
    return temp;

}
