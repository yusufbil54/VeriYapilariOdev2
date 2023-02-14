/** 
* @file               ikiliAramaAgaci.hpp
* @description        Ağaç Yapısıyla Organizma Ekrana Çıkartma
* @course             Veri Yapıları 1-C Grubu
* @assignment         2.Ödev
* @date               20.11.2022
* @author             Yusuf İslam Bil yusuf.bil@ogr.sakarya.edu.tr
*/
#ifndef ikiliAramaAgaci_hpp
#define ikiliAramaAgaci_hpp
#include "AgacDugum.hpp"
class ikiliAramaAgaci
{

public:
    ikiliAramaAgaci();
    void Siralama(AgacDugum* aktif); // deneme final icin
    bool varmi(int veri); 
    void ekle(DugumDoku* doku,AgacDugum* aktifDugum);
    void sil(int aranan, AgacDugum* &aktif);
    int yukseklik(AgacDugum* aktifDugum);
    int enBuyuk(AgacDugum* aktif);
    void postOrder(AgacDugum* aktif);
    AgacDugum* kok;
    AgacDugum* postOrderDizi[20];
    int sira=0;
    int sira2=0;
    AgacDugum* siralamaDizi[30];
    bool varmi(int veri,AgacDugum* aktif);
private:


};
#endif