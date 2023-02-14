/** 
* @file               DugumKuyruk.hpp
* @description        Ağaç Yapısıyla Organizma Ekrana Çıkartma
* @course             Veri Yapıları 1-C Grubu
* @assignment         2.Ödev
* @date               20.11.2022
* @author             Yusuf İslam Bil yusuf.bil@ogr.sakarya.edu.tr
*/
#ifndef DugumKuyruk_hpp
#define DugumKuyruk_hpp

class DugumKuyruk
{
public:
    DugumKuyruk(int veri);
    int veri;
    DugumKuyruk* sonraki;
};

#endif