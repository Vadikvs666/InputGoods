#ifndef TOLATIN_H
#define TOLATIN_H

#include <QObject>
#include "QString"
#include "QMessageBox"

class toLatin : public QObject
{
    Q_OBJECT
public:
    explicit toLatin(QString str);

    QString Getresult(){
        return result;
    }

signals:

public slots:

private:
    QString result;

};

#endif // TOLATIN_H
