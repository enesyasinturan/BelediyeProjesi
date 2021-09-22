#include "hat.h"

QString hat::getDurak1() const
{
    return durak1;
}

void hat::setDurak1(const QString &value)
{
    durak1 = value;
}

QString hat::getDurak2() const
{
    return durak2;
}

void hat::setDurak2(const QString &value)
{
    durak2 = value;
}

QString hat::getHatAdi() const
{
    return hatAdi;
}

void hat::setHatAdi(const QString &value)
{
    hatAdi = value;
}

int hat::getMesafe() const
{
    return mesafe;
}

void hat::setMesafe(int value)
{
    mesafe = value;
}

hat::hat()
{

}

void hat::hatTanimla(QString durak1, QString durak2, QString hatAdi, int mesafe)
{
    this->durak1 = durak1;
    this->durak2 = durak2;
    this->hatAdi = hatAdi;
    this->mesafe = mesafe;
}
