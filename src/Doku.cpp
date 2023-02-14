/** 
* @file               Doku.cpp
* @description        Ağaç Yapısıyla Organizma Ekrana Çıkartma
* @course             Veri Yapıları 1-C Grubu
* @assignment         2.Ödev
* @date               20.11.2022
* @author             Yusuf İslam Bil yusuf.bil@ogr.sakarya.edu.tr
*/
#include <iostream>
#include "Doku.hpp"
using namespace std;
Doku::Doku()
{
    ilk=0;
}
Doku::~Doku()
{
    DugumDoku* gec=ilk;
    while(gec!=0)
    {
        DugumDoku* sil=gec;
        gec=gec->sonraki;
        delete sil;
    }
}
void Doku::ekle(DugumHucre* hucreadresi)
{  
    DugumDoku* yeniDugum=new DugumDoku(hucreadresi);
    if(ilk==0)
    {
        ilk=yeniDugum;     
    }
    else
    {
        DugumDoku* gec=ilk;
        while (gec->sonraki!=0)
        {
            gec=gec->sonraki;
        }
        gec->sonraki=yeniDugum;
        yeniDugum->onceki=gec;
    }
}
void Doku::cikar()
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
        DugumDoku* gec=ilk;                   
        while(gec->sonraki->sonraki!=0)
        {
            gec=gec->sonraki;

        }
        delete gec->sonraki;
        gec->sonraki=0;
    }
}
void Doku::yazdir()
{
    DugumDoku* gec=ilk;
    while(gec!=0)
    {
      cout<<gec<<" doku" <<gec->hucreadresi->veri<<" veri"<<endl;  
      gec=gec->sonraki;
    }
    
}