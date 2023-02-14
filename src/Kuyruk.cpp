/** 
* @file               Kuyruk.cpp
* @description        Ağaç Yapısıyla Organizma Ekrana Çıkartma
* @course             Veri Yapıları 1-C Grubu
* @assignment         2.Ödev
* @date               20.11.2022
* @author             Yusuf İslam Bil yusuf.bil@ogr.sakarya.edu.tr
*/
#include "Kuyruk.hpp"
#include <iomanip>
#include<stdexcept>
Kuyruk::Kuyruk()
{
    ilk=son=0;
    elemanSayisi=0;
}
Kuyruk::~Kuyruk()
{
    while(ilk!=0)
    {
        DugumKuyruk*gec= ilk;
        ilk=ilk->sonraki;
        delete gec;
    }
}
bool Kuyruk::bosmu()
{
    if(ilk==0)
        return true;
    return false;
}

void Kuyruk::ekle(int veri)
{
    if(ilk==0)
    {
        ilk=new DugumKuyruk(veri);
        son= ilk;

    }
    else
    {
        DugumKuyruk*yeni = new DugumKuyruk(veri);
        son->sonraki = yeni;
        son = yeni;

    }
    elemanSayisi++;
}
void Kuyruk::cikar()
{
    if(ilk!=0)
    {
        DugumKuyruk*gec = ilk->sonraki;
        delete ilk;
        ilk=gec;
        if(ilk==0)
            son=0;
        elemanSayisi--;
    }
}
int Kuyruk::getir()
{
    if(ilk!=0)
        return ilk->veri;
    throw std::out_of_range("Kuyruk Bos");
}

int Kuyruk::elemanSayisiGetir()
{
    return elemanSayisi;
}
