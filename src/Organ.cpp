/** 
* @file               Organ.cpp
* @description        Ağaç Yapısıyla Organizma Ekrana Çıkartma
* @course             Veri Yapıları 1-C Grubu
* @assignment         2.Ödev
* @date               20.11.2022
* @author             Yusuf İslam Bil yusuf.bil@ogr.sakarya.edu.tr
*/
#include <iostream>
#include "Organ.hpp"
using namespace std;
Organ::Organ()
{
    agac=0;
}
void Organ::ekleOrgan(DugumDoku* doku,AgacDugum* aktifDugum)
{
    agac->ekle(doku,aktifDugum);
}

