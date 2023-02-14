/** 
* @file               Doku.hpp
* @description        Ağaç Yapısıyla Organizma Ekrana Çıkartma
* @course             Veri Yapıları 1-C Grubu
* @assignment         2.Ödev
* @date               20.11.2022
* @author             Yusuf İslam Bil yusuf.bil@ogr.sakarya.edu.tr
*/
#ifndef Doku_HPP
#define Doku_HPP
#include "DugumDoku.hpp"
class Doku
{
public:
    Doku();
    ~Doku();
    void ekle(DugumHucre* hucreadresi);
    void cikar();
    void yazdir();
    DugumDoku* ilk;

};
#endif