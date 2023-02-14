/** 
* @file               DinamikDizi.cpp
* @description        Ağaç Yapısıyla Organizma Ekrana Çıkartma
* @course             Veri Yapıları 1-C Grubu
* @assignment         2.Ödev
* @date               20.11.2022
* @author             Yusuf İslam Bil yusuf.bil@ogr.sakarya.edu.tr
*/
#include "DinamikDizi.hpp"
DinamikDizi::DinamikDizi()
{
    adres=0;
}
void DinamikDizi::diziolustur(int boyut)
{
    int* yeniAdres=new int[boyut];
    delete[] adres;
    adres=yeniAdres;
}