/** 
* @file               Radix.hpp
* @description        Ağaç Yapısıyla Organizma Ekrana Çıkartma
* @course             Veri Yapıları 1-C Grubu
* @assignment         2.Ödev
* @date               20.11.2022
* @author             Yusuf İslam Bil yusuf.bil@ogr.sakarya.edu.tr
*/
#ifndef Radix_hpp
#define Radix_hpp
#include "Kuyruk.hpp"

class Radix
{
public:
    Radix(int* sayilar,int adet);
    ~Radix();
    int* sirala();

private:
    int     maxBasamakSayisiGetir();
    int     basamakSayisiGetir(int sayi);
    void    kuyruklariYazdir();
    void    kuyrukUzunluklariGetir(int* uzunluklar);
    Kuyruk** kuyruklar;
    int*    sayilar;
    int     sayiAdedi;
};

#endif