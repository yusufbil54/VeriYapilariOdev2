/** 
* @file               AgacDugum.cpp
* @description        Ağaç Yapısıyla Organizma Ekrana Çıkartma
* @course             Veri Yapıları 1-C Grubu
* @assignment         2.Ödev
* @date               20.11.2022
* @author             Yusuf İslam Bil yusuf.bil@ogr.sakarya.edu.tr
*/
#include "AgacDugum.hpp"
#include <iostream>
#include "DugumDoku.hpp"
using namespace std;
AgacDugum::AgacDugum(DugumDoku* dokuadresi)
{
    this->dokuadresi=dokuadresi;
    this->veri=dokuadresi->hucreadresi->veri;
    sol=0;
    sag=0;
}