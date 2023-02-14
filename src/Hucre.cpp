/** 
* @file               Hucre.cpp
* @description        Ağaç Yapısıyla Organizma Ekrana Çıkartma
* @course             Veri Yapıları 1-C Grubu
* @assignment         2.Ödev
* @date               20.11.2022
* @author             Yusuf İslam Bil yusuf.bil@ogr.sakarya.edu.tr
*/
#include <iostream>
#include <fstream>
#include <iomanip>
#include "Hucre.hpp"
#include "DugumHucre.hpp"
#include "Radix.hpp"
#include "Doku.hpp"
using namespace std;
Hucre::Hucre()
{  
  ilk=0;
}
Hucre::~Hucre()
{
    DugumHucre* gec=ilk;
    while(gec!=0)
    {
        DugumHucre* sil=gec;
        gec=gec->sonraki;
        delete sil;
    }
}
void Hucre::ekle(int veri)
{   
    DugumHucre* yeniDugum=new DugumHucre(veri);
    if(ilk==0)
    {
        ilk=yeniDugum;                  
    }
    else
    {
        DugumHucre* gec=ilk;
        while (gec->sonraki!=0)
        {
            gec=gec->sonraki;
        }
        gec->sonraki=yeniDugum;
        yeniDugum->onceki=gec;
    }
}






void Hucre::cikar()
{
    if(ilk==0)
    {
        return;
    }
    if(ilk->sonraki==0)
    {
        delete ilk;
        ilk=0;
    }
    else
    {
        DugumHucre* gec=ilk;                           //Yonetim Listesi düğümlerinin sonundan eleman çıkartır.
        while(gec->sonraki->sonraki!=0)
        {
            gec=gec->sonraki;

        }
        delete gec->sonraki;
        gec->sonraki=0;
    }
}
void Hucre::yazdir()
{
  DugumHucre* gec=ilk;
  while (gec!=0)
  {
    cout<<gec<<" adresindeki veri : "<<gec->veri<<endl;
    cout<<gec->onceki<<"  "<<gec->sonraki<<endl;
  }
  
}
