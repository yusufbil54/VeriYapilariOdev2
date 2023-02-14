/** 
* @file               Sistem.cpp
* @description        Ağaç Yapısıyla Organizma Ekrana Çıkartma
* @course             Veri Yapıları 1-C Grubu
* @assignment         2.Ödev
* @date               20.11.2022
* @author             Yusuf İslam Bil yusuf.bil@ogr.sakarya.edu.tr
*/
#include <iostream>
#include "Sistem.hpp"
using namespace std;
Sistem::Sistem()
{
    ilk=0;
}
Sistem::~Sistem()
{
    DugumSistem* gec=ilk;
    while(gec!=0)
    {
        DugumSistem* sil=gec;
        gec=gec->sonraki;
        delete sil;
    }
}
void Sistem::ekle(AgacDugum* organadresi)
{  
    DugumSistem* yeniDugum=new DugumSistem(organadresi);
    if(ilk==0)
    {
        ilk=yeniDugum;     
    }
    else
    {
        DugumSistem* gec=ilk;
        while (gec->sonraki!=0)
        {
            gec=gec->sonraki;
        }
        gec->sonraki=yeniDugum;
        yeniDugum->onceki=gec;
    }
}
void Sistem::onuneEkle(int sira,AgacDugum* organadresi,DugumSistem* adres)
{   
    DugumSistem* aktifDugum=dugumGetir(sira,adres);
    if(aktifDugum)
    {   
        DugumSistem* aktifOnceki=aktifDugum->onceki;
        DugumSistem* yeniDugum=new DugumSistem(organadresi);
        aktifDugum->onceki=yeniDugum;                                              
        yeniDugum->sonraki=aktifDugum;
        yeniDugum->onceki=aktifOnceki;
        if(aktifOnceki)
        {
            aktifOnceki->sonraki=yeniDugum;
        }
        else
        {
            ilk=yeniDugum;
        }
    }
}
DugumSistem* Sistem::dugumGetir(int sira, DugumSistem* adres)
{  
    DugumSistem* gec=adres;
    while (sira>=0 && gec!=0)
    {
        if(sira==0)
        {                                
            return gec;
        }

        gec= gec->sonraki;
        sira--;
    }
    return 0;
}