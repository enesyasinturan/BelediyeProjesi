#include "durak.h"

QString durak::getDurakTuru() const
{
    return durakTuru;
}

void durak::setDurakTuru(const QString &value)
{
    durakTuru = value;
}

QString durak::getDurakAdi() const
{
    return durakAdi;
}

void durak::setDurakAdi(const QString &value)
{
    durakAdi = value;
}

durak::durak()
{
    this->durakTuru = "Otobüs Durağı";
    this->durakAdi = "Otobüs Durağı 1";
}

void durak::durakTanimla(QString durakTuru, QString durakAdi)
{
    this->durakTuru = durakTuru;
    this->durakAdi = durakAdi;
}
