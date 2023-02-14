/** 
* @file               AgacDugum.hpp
* @description        Ağaç Yapısıyla Organizma Ekrana Çıkartma
* @course             Veri Yapıları 1-C Grubu
* @assignment         2.Ödev
* @date               20.11.2022
* @author             Yusuf İslam Bil yusuf.bil@ogr.sakarya.edu.tr
*/
#ifndef AgacDugum_hpp
#define AgacDugum_hpp
#include "DugumDoku.hpp"
class AgacDugum
{
public:
    AgacDugum(DugumDoku* dokuadresi);
    int veri;
    AgacDugum* sol;
    AgacDugum* sag;
    DugumDoku* dokuadresi;
private:
};



#endif