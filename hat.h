#ifndef HAT_H
#define HAT_H
#include "QString"


class hat
{
private:
    QString durak1;
    QString durak2;
    QString hatAdi;
    int mesafe;

public:
    hat();
    void hatTanimla(QString durak1,QString durak2, QString hatAdi, int mesafe);

    QString getDurak1() const;
    void setDurak1(const QString &value);
    QString getDurak2() const;
    void setDurak2(const QString &value);
    QString getHatAdi() const;
    void setHatAdi(const QString &value);
    int getMesafe() const;
    void setMesafe(int value);
};

#endif // HAT_H
