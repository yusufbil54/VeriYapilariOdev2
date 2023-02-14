/** 
* @file               Hucre.hpp
* @description        Ağaç Yapısıyla Organizma Ekrana Çıkartma
* @course             Veri Yapıları 1-C Grubu
* @assignment         2.Ödev
* @date               20.11.2022
* @author             Yusuf İslam Bil yusuf.bil@ogr.sakarya.edu.tr
*/
#ifndef Hucre_HPP
#define Hucre_HPP
#include "DugumHucre.hpp"
class Hucre
{
public:
    Hucre();
    ~Hucre();
    void ekle(int veri);
    void cikar();
    void yazdir();  
    DugumHucre* ilk;            
};


#endif