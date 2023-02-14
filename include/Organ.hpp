/** 
* @file               Organ.hpp
* @description        Ağaç Yapısıyla Organizma Ekrana Çıkartma
* @course             Veri Yapıları 1-C Grubu
* @assignment         2.Ödev
* @date               20.11.2022
* @author             Yusuf İslam Bil yusuf.bil@ogr.sakarya.edu.tr
*/
#ifndef Organ_HPP
#define Organ_HPP
#include "ikiliAramaAgaci.hpp"
class Organ
{
public:
    Organ();
    ~Organ();
    void ekleOrgan(DugumDoku* doku,AgacDugum* aktifDugum);
    ikiliAramaAgaci* agac;
};

#endif