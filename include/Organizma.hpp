/** 
* @file               Organizma.hpp
* @description        Ağaç Yapısıyla Organizma Ekrana Çıkartma
* @course             Veri Yapıları 1-C Grubu
* @assignment         2.Ödev
* @date               20.11.2022
* @author             Yusuf İslam Bil yusuf.bil@ogr.sakarya.edu.tr
*/
#ifndef Organizma_HPP
#define Organizma_HPP
#include "DugumOrganizma.hpp"
class Organizma
{
public:
    Organizma();
    ~Organizma();
    void yazdir(char ch);
    void ekle(DugumSistem* sistemadresi);
    DugumOrganizma* ilk;
};
#endif