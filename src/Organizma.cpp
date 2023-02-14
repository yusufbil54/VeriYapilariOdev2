/** 
* @file               Organizma.cpp
* @description        Ağaç Yapısıyla Organizma Ekrana Çıkartma
* @course             Veri Yapıları 1-C Grubu
* @assignment         2.Ödev
* @date               20.11.2022
* @author             Yusuf İslam Bil yusuf.bil@ogr.sakarya.edu.tr
*/
#include "Organizma.hpp"
#include <iostream>
#include <iomanip>
using namespace std;
Organizma::Organizma()
{
    ilk=0;
}
Organizma::~Organizma()
{
    DugumOrganizma* gec=ilk;
    while(gec!=0)
    {
        DugumOrganizma* sil=gec;
        gec=gec->sonraki;
        delete sil;
    }
}
void Organizma::yazdir(char ch)
{
    cout<<ch;
}
void Organizma::ekle(DugumSistem* sistemadresi)
{  
    DugumOrganizma* yeniDugum=new DugumOrganizma(sistemadresi);
    if(ilk==0)
    {
        ilk=yeniDugum;     
    }
    else
    {
        DugumOrganizma* gec=ilk;
        while (gec->sonraki!=0)
        {
            gec=gec->sonraki;
        }
        gec->sonraki=yeniDugum;
        yeniDugum->onceki=gec;
    }
}