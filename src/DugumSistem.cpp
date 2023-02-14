/** 
* @file               DugumSistem.cpp
* @description        Ağaç Yapısıyla Organizma Ekrana Çıkartma
* @course             Veri Yapıları 1-C Grubu
* @assignment         2.Ödev
* @date               20.11.2022
* @author             Yusuf İslam Bil yusuf.bil@ogr.sakarya.edu.tr
*/
#include <iostream>
#include "DugumSistem.hpp"

DugumSistem::DugumSistem(AgacDugum* organadresi)
{
    this->organadresi=organadresi;
    this->veri=organadresi->veri;
    sonraki=0;
    onceki=0;
}