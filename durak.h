#ifndef DURAK_H
#define DURAK_H
#include "QString"

class durak
{
private:
    QString durakTuru;
    QString durakAdi;
public:
    durak();
    void durakTanimla(QString durakTuru, QString durakAdi);

    QString getDurakTuru() const;
    void setDurakTuru(const QString &value);

    QString getDurakAdi() const;
    void setDurakAdi(const QString &value);
};

#endif // DURAK_H
