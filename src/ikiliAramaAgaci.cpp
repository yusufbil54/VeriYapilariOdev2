/** 
* @file               ikiliAramaAgaci.cpp
* @description        Ağaç Yapısıyla Organizma Ekrana Çıkartma
* @course             Veri Yapıları 1-C Grubu
* @assignment         2.Ödev
* @date               20.11.2022
* @author             Yusuf İslam Bil yusuf.bil@ogr.sakarya.edu.tr
*/
#include "AgacDugum.hpp"
#include "ikiliAramaAgaci.hpp"
#include <iostream>
#include <iomanip>
using namespace std;
ikiliAramaAgaci::ikiliAramaAgaci()
{
    kok=0;
}
bool ikiliAramaAgaci::varmi(int veri)
{
    return varmi(veri,kok);
}
bool ikiliAramaAgaci::varmi(int veri,AgacDugum* aktif)
{
    if(aktif->veri < veri)
    {
        if(aktif->sag)
        {
            return varmi(veri,aktif->sag);
        }
        return false;
    }
    else if(aktif->veri>veri)
    {
        if(aktif->sol)
        {
            return varmi(veri,aktif->sol);
        }
        return false;
    }
    else
    {
        return true;
    }
    
}
void ikiliAramaAgaci::ekle(DugumDoku* doku,AgacDugum* aktifDugum)
{   
    if(aktifDugum->veri>=doku->hucreadresi->veri)
    {
        if(aktifDugum->sol)
        {
            ekle(doku,aktifDugum->sol);
        }
        else
        {
            aktifDugum->sol=new AgacDugum(doku);
            aktifDugum=aktifDugum->sol;
        }
    }
    else if(aktifDugum->veri<doku->hucreadresi->veri)
    {
        if(aktifDugum->sag)
        {
            ekle(doku,aktifDugum->sag);
        }
        else
        {
            aktifDugum->sag=new AgacDugum(doku);
            aktifDugum=aktifDugum->sag;
        }
    }
    else
    {
        return;
    }
}
void ikiliAramaAgaci::sil(int aranan, AgacDugum* &aktif)
{  
    if(aktif==0)
    {
        
        return;
    }
    if(aktif->veri>aranan)
    {   
        sil(aranan,aktif->sol);
    }
    else if(aktif->veri<aranan)
    {   
        sil(aranan,aktif->sag);
    }
    else
    {  
        if(aktif->sag && aktif->sol)
        {
            aktif->veri=enBuyuk(aktif->sol);
            sil(aktif->veri,aktif->sol);
            
        }
        else
        {   
            AgacDugum* silinecek=aktif;
            if(aktif->sol==0)
            {
                aktif=aktif->sag;
            }
            else if(aktif->sag==0)
            {
                aktif=aktif->sol;
            }
            else
            {
                
                aktif=0;
            }
            delete silinecek;
        }
    }

}
int ikiliAramaAgaci::yukseklik(AgacDugum* aktifDugum)
{
    if(aktifDugum)
    {
        return 1+max(yukseklik(aktifDugum->sol), yukseklik(aktifDugum->sag));
    }
    return -1;
}
int ikiliAramaAgaci::enBuyuk(AgacDugum* aktif)
{
    if(aktif->sag)
    {
        return enBuyuk(aktif->sag);
    }
    return aktif->veri;
}
void ikiliAramaAgaci::postOrder(AgacDugum* aktif)
{
    if(aktif)
    {
        postOrder(aktif->sol);
        postOrder(aktif->sag);
        postOrderDizi[sira]=aktif;
        sira++;
    }

}

void ikiliAramaAgaci::Siralama(AgacDugum* aktif)
{
    AgacDugum* kokDeger=aktif;
    if(aktif)
    {
        
        Siralama(aktif->sag);

        cout<<aktif->veri<<" ";
        
        Siralama(aktif->sol);
    }
    
}