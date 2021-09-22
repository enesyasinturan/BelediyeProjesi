#ifndef ARAC_H
#define ARAC_H
#include "QString"





class arac
{
private:
    QString aracAdi;
    QString aracTuru;
    double aracUcreti;

public:
    arac();
    void aracTanimla(QString aracAdi, QString aracTuru, double aracUcreti);

    QString getAracAdi() const;
    void setAracAdi(const QString &value);

    QString getAracTuru() const;
    void setAracTuru(const QString &value);

    double getAracUcreti() const;
    void setAracUcreti(double value);
};

#endif // ARAC_H
