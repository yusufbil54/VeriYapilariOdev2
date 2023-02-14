/** 
* @file               DugumHucre.hpp
* @description        Ağaç Yapısıyla Organizma Ekrana Çıkartma
* @course             Veri Yapıları 1-C Grubu
* @assignment         2.Ödev
* @date               20.11.2022
* @author             Yusuf İslam Bil yusuf.bil@ogr.sakarya.edu.tr
*/
#ifndef DugumHucre_hpp
#define DugumHucre_hpp
#include <iostream>
using namespace std;
class DugumHucre
{
    public:  
        DugumHucre(int veri);
        int veri;
        DugumHucre* sonraki;
        DugumHucre* onceki;                    
};
#endif