#include "vsite.h"
#include "QIcon"
#include "tolatin.h"
# include "QTextCodec"

VSite::VSite(QWidget *parent) :
    QWidget(parent)
{


    this->setWindowTitle("WWW.HOZTOVATY-OMSK.RU");
    VCloseButton = new QPushButton();
    VCloseButton->setText("Закрыть");

    QObject::connect(VCloseButton,SIGNAL(clicked()),this,SLOT(on_VCloseButton_clicked()), Qt::AutoConnection);

    VConnectButton = new QPushButton();
    VConnectButton->setText("Открыть файл с прайсом");

    QObject::connect(VConnectButton,SIGNAL(clicked()),this,SLOT(on_VConnectButton_clicked()), Qt::AutoConnection);

    VGetMaxButton = new QPushButton();
    VGetMaxButton->setText("Максимальное id товара");

    QObject::connect(VGetMaxButton,SIGNAL(clicked()),this,SLOT(on_VGetMaxButton_clicked()), Qt::AutoConnection);

    VAddDataButton = new QPushButton();
    VAddDataButton->setText("Записать в бд сайта");
    VAddDataButton->setEnabled(false);

    QObject::connect(VAddDataButton,SIGNAL(clicked()),this,SLOT(on_VAddDataButton_clicked()), Qt::AutoConnection);

    QVBoxLayout *main = new QVBoxLayout;

    main->addWidget(VConnectButton);
    main->addWidget(VAddDataButton);
    main->addWidget(VCloseButton);




    this->setLayout(main);

}


void VSite::CloseSend()
{
    emit buy();
    this->close();
}
void VSite::on_VCloseButton_clicked()
{
    CloseSend();
}

void VSite::on_VConnectButton_clicked()
{
    prod=new ListElem<Products>;
    const char *f1;
    QString  fileName_DATA = QFileDialog::getOpenFileName(this, tr("Открыть файл"),"/home",tr("прайс (*.csv)"));
    f1=fileName_DATA.toUtf8();
    load_goods_csv(3,*prod,f1);
    QVariant temp =prod->count_elem();
    QString mess=temp.toString();
    QMessageBox::information(NULL,"Количество элементов в файле", mess,  QMessageBox::Ok);
    VAddDataButton->setEnabled(true);
}

void VSite::on_VGetMaxButton_clicked()
{
    BD->getInstance("hoztovarmoguta");
    QString query="SELECT Max(id) FROM mg_product";
    QMessageBox::information(NULL,"Количество элементов в бд", BD->QueryOneAnswer(query),  QMessageBox::Ok);
}

void VSite::on_VAddDataButton_clicked()
{
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
    BD->getInstance("hoztovarmoguta");

    if(prod->count_elem()>0)
    {
        for(int i=0;i<prod->count_elem();i++)
        {
            QSqlQuery query;
            QSqlQuery queryselect;
            QString title=remK(prod->it_elem(i).getTitle());
            QString querysel="SELECT id FROM mg_product WHERE title="+BD->toop(title);
            int idf=BD->QueryOneAnswer(querysel).toInt();

            if(idf==0)
            {
                QString queryMax="SELECT Max(id) FROM mg_product";
                int id=BD->QueryOneAnswer(queryMax).toInt()+1;
                query.prepare("INSERT INTO mg_product (`id`, `sort`, `cat_id`, `title`, `description`, `price`, `url`, `image_url`, `code`, `count`, `activity`, `meta_title`, `meta_keywords`, `meta_desc`, `old_price`, `recommend`, `new`, `related`, `inside_cat`, `1c_id`, `weight`, `link_electro`, `currency_iso`, `price_course`, `image_title`, `image_alt`, `1c_kod`)"
                              "VALUES ("+BD->toop(IS(id))+","+BD->toop(IS(id))+","+BD->toop("84")+","+ BD->toop(title)+","+ BD->toop(title)+","+BD->toop(prod->it_elem(i).getPriceS())+","+BD->toop(CreateValidWebFileName(prod->it_elem(i).getTitle()))+","+BD->toop("")+","+BD->toop(IS(id))+","+BD->toop("-1")+","+BD->toop("1")+","+ BD->toop(title)+","+ BD->toop(prod->it_elem(i).getTitle())+","+BD->toop(prod->it_elem(i).getTitle())+","+BD->toop(prod->it_elem(i).getPrevPriceS())+","+BD->toop("0")+","+BD->toop("0")+","+BD->toop("")+","+BD->toop("")+","+BD->toop(prod->it_elem(i).getId_1c())+","+BD->toop("0")+","+BD->toop("")+","+BD->toop("RUR")+","+BD->toop(prod->it_elem(i).getPriceS())+","+BD->toop("")+","+BD->toop("")+","+BD->toop(prod->it_elem(i).getId_1c())+")");
                query.exec();
           }
            else
            {
               query.prepare("UPDATE mg_product SET `price`="+BD->toop(prod->it_elem(i).getPriceS())+",`1c_id`="+BD->toop(prod->it_elem(i).getId_1c())+",`1c_kod`="+BD->toop(prod->it_elem(i).getId_1c())+" WHERE id="+BD->toop(IS(idf)));
               query.exec();
            }

        }
    }
}



QString CreateValidWebFileName(QString str)
{
    QString fn;
    int i, rU, rL;
    QString temp="АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЫЭЮЯ";
    QString validChars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890-";
    QString NotvalidChars = "_,.[]{}<>~!@#$%^&*+=?";
    QString rusUpper = temp.toUtf8();

    temp="абвгдеёжзийклмнопрстуфхцчшщыэюя";
    QString rusLower = temp.toUtf8();
    QStringList latUpper, latLower;
    latUpper <<"A"<<"B"<<"V"<<"G"<<"D"<<"E"<<"Jo"<<"Zh"<<"Z"<<"I"<<"J"<<"K"<<"L"<<"M"<<"N"
        <<"O"<<"P"<<"R"<<"S"<<"T"<<"U"<<"F"<<"H"<<"C"<<"Ch"<<"Sh"<<"Sh"<<"I"<<"E"<<"Ju"<<"Ja";
    latLower <<"a"<<"b"<<"v"<<"g"<<"d"<<"e"<<"jo"<<"zh"<<"z"<<"i"<<"j"<<"k"<<"l"<<"m"<<"n"
        <<"o"<<"p"<<"r"<<"s"<<"t"<<"u"<<"f"<<"h"<<"c"<<"ch"<<"sh"<<"sh"<<"i"<<"e"<<"ju"<<"ja";
    for (i=0; i < str.size(); ++i){
        if ( validChars.contains(str[i]) ){
            fn = fn + str[i];
        }else if (str[i] == ' '){  //replace spaces
            fn = fn + "-";
        }else{
            if(NotvalidChars.contains(str[i]))
            {
                fn=fn+"-";
            }else
            {
                rU = rusUpper.indexOf(str[i]);
                rL = rusLower.indexOf(str[i]);
                if (rU >= 0)         fn = fn + latUpper[rU];
                else if (rL >= 0)   fn = fn + latLower[rL];
             }
        }

    }
    if (fn.isEmpty() ) fn = "";
    return fn.toLower();
}
QString IS(int k)
{
    QVariant data=k;
    return data.toString();
}
QString remK(QString str)
{
    QString temp="";
    for(int i=0;i<str.length();i++)
    {
        if(str[i]!='"')
        {
            temp=temp+str[i];
        }
    }
    return temp;
}
