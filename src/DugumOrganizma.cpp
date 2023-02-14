/** 
* @file               DugumOrganizma.cpp
* @description        Ağaç Yapısıyla Organizma Ekrana Çıkartma
* @course             Veri Yapıları 1-C Grubu
* @assignment         2.Ödev
* @date               20.11.2022
* @author             Yusuf İslam Bil yusuf.bil@ogr.sakarya.edu.tr
*/
#include <iostream>
#include "DugumOrganizma.hpp"

DugumOrganizma::DugumOrganizma(DugumSistem* sistemadresi)
{
    this->sistemadresi=sistemadresi;
    this->veri=sistemadresi->veri;
    sonraki=0;
    onceki=0;
}