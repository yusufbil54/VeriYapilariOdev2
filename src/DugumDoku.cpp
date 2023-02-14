/** 
* @file               DugumDoku.cpp
* @description        Ağaç Yapısıyla Organizma Ekrana Çıkartma
* @course             Veri Yapıları 1-C Grubu
* @assignment         2.Ödev
* @date               20.11.2022
* @author             Yusuf İslam Bil yusuf.bil@ogr.sakarya.edu.tr
*/
#include "DugumDoku.hpp"
#include <iostream>
DugumDoku::DugumDoku(DugumHucre* hucreadresi)
{
    this->hucreadresi=hucreadresi;
    onceki=0;
    sonraki=0;
}