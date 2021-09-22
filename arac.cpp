#include "arac.h"
#include "QString"


QString arac::getAracAdi() const
{
    return aracAdi;
}

void arac::setAracAdi(const QString &value)
{
    aracAdi = value;
}

QString arac::getAracTuru() const
{
    return aracTuru;
}

void arac::setAracTuru(const QString &value)
{
    aracTuru = value;
}

double arac::getAracUcreti() const
{
    return aracUcreti;
}

void arac::setAracUcreti(double value)
{
    aracUcreti = value;
}

arac::arac()
{
    aracAdi = "Otobüs1";
    aracTuru = "Otobüs";
    aracUcreti = 1.00;
}

void arac::aracTanimla(QString aracAdi, QString aracTuru, double aracUcreti)
{
    this->aracAdi = aracAdi;
    this->aracTuru = aracTuru;
    this->aracUcreti = aracUcreti;
}
