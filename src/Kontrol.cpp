/** 
* @file               Kontrol.cpp
* @description        Ağaç Yapısıyla Organizma Ekrana Çıkartma
* @course             Veri Yapıları 1-C Grubu
* @assignment         2.Ödev
* @date               20.11.2022
* @author             Yusuf İslam Bil yusuf.bil@ogr.sakarya.edu.tr
*/
#include "Kontrol.hpp"
#include <iostream>
#include <iomanip>
using namespace std;
Kontrol::Kontrol()
{
    kontrolkok=0;
}
int Kontrol::sagYukseklik(AgacDugum* aktifDugum)
{
    if(aktifDugum)
    {
        return 1+sagYukseklik(aktifDugum->sag);
    }
    return -1;
}
int Kontrol::solYukseklik(AgacDugum* aktifDugum)
{
    if(aktifDugum)
    {
        return 1+solYukseklik(aktifDugum->sol);
    }
    return -1;
}