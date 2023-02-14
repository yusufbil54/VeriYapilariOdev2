/** 
* @file               Sistem.hpp
* @description        Ağaç Yapısıyla Organizma Ekrana Çıkartma
* @course             Veri Yapıları 1-C Grubu
* @assignment         2.Ödev
* @date               20.11.2022
* @author             Yusuf İslam Bil yusuf.bil@ogr.sakarya.edu.tr
*/
#ifndef Sistem_HPP
#define Sistem_HPP
#include "DugumSistem.hpp"
class Sistem
{
public:
    Sistem();
    ~Sistem();
    void ekle(AgacDugum* organadresi);
    void onuneEkle(int sira,AgacDugum* organadresi,DugumSistem* adres);
    DugumSistem* dugumGetir(int sira, DugumSistem* adres);
    DugumSistem* ilk;
};

#endif