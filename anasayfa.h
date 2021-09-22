#ifndef ANASAYFA_H
#define ANASAYFA_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class AnaSayfa; }
QT_END_NAMESPACE

class AnaSayfa : public QMainWindow
{
    Q_OBJECT

public:
    AnaSayfa(QWidget *parent = nullptr);
    ~AnaSayfa();

private slots:
    void on_pushButton_clicked();

    void on_comboBoxAraclar_currentTextChanged(const QString &arg1);

    void on_pushButtonAracEkle_clicked();

    void on_pushButtonDurakEkle_clicked();

    void on_pushButtonHatEkle_clicked();

    void on_pushButtonGunSonu_clicked();

private:
    Ui::AnaSayfa *ui;
};
#endif // ANASAYFA_H
