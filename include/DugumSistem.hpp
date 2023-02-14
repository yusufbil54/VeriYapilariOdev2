/** 
* @file               DugumSistem.hpp
* @description        Ağaç Yapısıyla Organizma Ekrana Çıkartma
* @course             Veri Yapıları 1-C Grubu
* @assignment         2.Ödev
* @date               20.11.2022
* @author             Yusuf İslam Bil yusuf.bil@ogr.sakarya.edu.tr
*/
#ifndef DugumSistem_HPP
#define DugumSistem_HPP
#include "AgacDugum.hpp"
class DugumSistem
{
public:
    DugumSistem(AgacDugum* organadresi); 
    AgacDugum* organadresi;
    DugumSistem* sonraki;
    DugumSistem* onceki;
    int veri;
};


#endif