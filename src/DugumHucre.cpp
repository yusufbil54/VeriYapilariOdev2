/** 
* @file               DugumHucre.cpp
* @description        Ağaç Yapısıyla Organizma Ekrana Çıkartma
* @course             Veri Yapıları 1-C Grubu
* @assignment         2.Ödev
* @date               20.11.2022
* @author             Yusuf İslam Bil yusuf.bil@ogr.sakarya.edu.tr
*/
#include <iostream>
#include "DugumHucre.hpp"
using namespace std;
DugumHucre::DugumHucre(int veri)
{           
    this->veri=veri;    
    onceki=sonraki=0;                                    
}
/*DugumHucre::~DugumHucre()
{
    cout<<this<<"silindi"<<endl;
}*/