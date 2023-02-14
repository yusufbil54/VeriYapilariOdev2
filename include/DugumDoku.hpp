/** 
* @file               DugumDoku.hpp
* @description        Ağaç Yapısıyla Organizma Ekrana Çıkartma
* @course             Veri Yapıları 1-C Grubu
* @assignment         2.Ödev
* @date               20.11.2022
* @author             Yusuf İslam Bil yusuf.bil@ogr.sakarya.edu.tr
*/
#ifndef DugumDoku_HPP
#define DugumDoku_HPP
#include "DugumHucre.hpp"
class DugumDoku
{
public:
    DugumDoku(DugumHucre* hucreadresi);
    DugumDoku* sonraki;
    DugumDoku* onceki;
    DugumHucre* hucreadresi;
};
#endif