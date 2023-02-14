/** 
* @file               Kontrol.hpp
* @description        Ağaç Yapısıyla Organizma Ekrana Çıkartma
* @course             Veri Yapıları 1-C Grubu
* @assignment         2.Ödev
* @date               20.11.2022
* @author             Yusuf İslam Bil yusuf.bil@ogr.sakarya.edu.tr
*/
#ifndef Kontrol_HPP
#define Kontrol_HPP
#include "AgacDugum.hpp"
class Kontrol
{

public:
    Kontrol();
    int sagYukseklik(AgacDugum* aktifDugum);
    int solYukseklik(AgacDugum* aktifDugum);
    AgacDugum* kontrolkok;
};
#endif