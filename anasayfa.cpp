#include "anasayfa.h"
#include "ui_anasayfa.h"
#include <arac.h>
#include <durak.h>
#include <hat.h>
#include "qmessagebox.h"

AnaSayfa::AnaSayfa(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AnaSayfa)
{
    ui->setupUi(this);
//    ui->lineEdit->setPlaceholderText("Araç ismini giriniz...");

//    if (ui->lineEdit->text().isEmpty())
//        ui->lineEdit->setStyleSheet("QLineEdit { color: grey }");
//    else
//        ui->lineEdit->setStyleSheet("#QLineEdit { color: black}");

    ui->comboBoxDurak1->setDisabled(true);
    ui->comboBoxDurak2->setDisabled(true);

    ui->comboBoxHatlar->setDisabled(true);




}

AnaSayfa::~AnaSayfa()
{

    delete ui;
}


void AnaSayfa::on_pushButton_clicked()
{

}

void AnaSayfa::on_comboBoxAraclar_currentTextChanged(const QString &arg1)
{

}

int j = 0;
void AnaSayfa::on_pushButtonAracEkle_clicked()
{
    if(ui->lineEditAracAdi->text().isEmpty())
         QMessageBox::information(this,"Boş Alan Hatası","Araç adı boş bırakılamaz.");

    else
    {
        QString aracTuru = ui->comboBoxAraclar->currentText();
        QString aracAdi = ui->comboBoxAraclar->currentText();
        double aracUcreti = ui->doubleSpinBoxUlasimUcreti->value();

        arac aracNesnesi;

        aracNesnesi.aracTanimla(aracTuru, aracAdi, aracUcreti);

        ui->tableWidgetAraclar->insertRow(j);
        ui->tableWidgetAraclar->setItem(j,0, new QTableWidgetItem(ui->comboBoxAraclar->currentText()));
        ui->tableWidgetAraclar->setItem(j,1, new QTableWidgetItem(ui->lineEditAracAdi->text()));
        ui->tableWidgetAraclar->setItem(j,2, new QTableWidgetItem(ui->doubleSpinBoxUlasimUcreti->text()));

        j++;

        QMessageBox::information(this,"Kayıt","Araç başarıyla kayıt edildi.");
        ui->lineEditAracAdi->setText("");

    }
}

int k = 0;
void AnaSayfa::on_pushButtonDurakEkle_clicked()
{
    if(ui->lineEditDurakAdi->text().isEmpty())
         QMessageBox::information(this,"Boş Alan Hatası","Durak adı boş bırakılamaz.");

    else
    {
        QString durakTuru = ui->comboBoxDuraklar->currentText();
        QString durakAdi = ui->lineEditDurakAdi->text();

        durak durakNesnesi;

        durakNesnesi.durakTanimla(durakTuru, durakAdi);

        ui->tableWidgetDuraklar->insertRow(k);
        ui->tableWidgetDuraklar->setItem(k,0, new QTableWidgetItem(ui->comboBoxDuraklar->currentText()));
        ui->tableWidgetDuraklar->setItem(k,1, new QTableWidgetItem(ui->lineEditDurakAdi->text()));

        k++;


        ui->comboBoxDurak1->addItem(durakAdi);
        ui->comboBoxDurak2->addItem(durakAdi);
        ui->comboBoxDurak1->setEnabled(true);
        ui->comboBoxDurak2->setEnabled(true);

        QMessageBox::information(this,"Kayıt","Durak başarıyla kayıt edildi.");
        ui->lineEditDurakAdi->setText("");
    }
}

int l = 0;
void AnaSayfa::on_pushButtonHatEkle_clicked()
{
    if(ui->lineEditHatismi->text().isEmpty())
         QMessageBox::information(this,"Boş Alan Hatası","Hat adı boş bırakılamaz.");

    else
    {
        QString durak1 = ui->comboBoxDurak1->currentText();
        QString durak2 = ui->comboBoxDurak2->currentText();
        QString hatAdi = ui->lineEditHatismi->text();
        int mesafe = ui->spinBoxMesafe->value();

        hat hatNesnesi;

        hatNesnesi.hatTanimla(durak1,durak2, hatAdi, mesafe);

        ui->tableWidgetHatlar->insertRow(l);
        ui->tableWidgetHatlar->setItem(l,0,new QTableWidgetItem(ui->lineEditHatismi->text()));
        ui->tableWidgetHatlar->setItem(l,1,new QTableWidgetItem(ui->comboBoxDurak1->currentText()));
        ui->tableWidgetHatlar->setItem(l,2,new QTableWidgetItem(ui->comboBoxDurak2->currentText()));
        ui->tableWidgetHatlar->setItem(l,3,new QTableWidgetItem(ui->spinBoxMesafe->text()));

        l++;

        ui->comboBoxHatlar->setEnabled(true);

        ui->comboBoxHatlar->addItem(hatAdi);


        QMessageBox::information(this,"Kayıt","Hat başarıyla kayıt edildi.");
        ui->lineEditHatismi->setText("");
    }

}

int p = 0;
void AnaSayfa::on_pushButtonGunSonu_clicked()
{
    if(ui->comboBoxHatlar->currentText() == "")
        QMessageBox::information(this,"Boş Alan Hatası","Hat adı seçimsiz bırakılamaz.");

    else
    {
        ui->tableWidgetGunler->insertRow(p);
        ui->tableWidgetGunler->setItem(p,0,new QTableWidgetItem(ui->comboBoxHatlar->currentText()));
        ui->tableWidgetGunler->setItem(p,1,new QTableWidgetItem(ui->dateEditTarih->text()));
        ui->tableWidgetGunler->setItem(p,2,new QTableWidgetItem(ui->spinBoxYolcuSayisi->text()));

        p++;

        QMessageBox::information(this,"Kayıt","Gün raporu başarıyla kayıt edildi.");
        ui->spinBoxYolcuSayisi->setValue(0);
    }

}
