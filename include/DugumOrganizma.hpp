/** 
* @file               DugumOrganizma.hpp
* @description        Ağaç Yapısıyla Organizma Ekrana Çıkartma
* @course             Veri Yapıları 1-C Grubu
* @assignment         2.Ödev
* @date               20.11.2022
* @author             Yusuf İslam Bil yusuf.bil@ogr.sakarya.edu.tr
*/
#ifndef DugumOrganizma_HPP
#define DugumOrganizma_HPP
#include "DugumSistem.hpp"
class DugumOrganizma
{
public:
    DugumOrganizma(DugumSistem* sistemadresi);
    DugumOrganizma* sonraki;
    DugumOrganizma* onceki;
    DugumSistem* sistemadresi;
    int veri;
};
#endif