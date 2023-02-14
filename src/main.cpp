/** 
* @file               main.cpp
* @description        Ağaç Yapısıyla Organizma Ekrana Çıkartma
* @course             Veri Yapıları 1-C Grubu
* @assignment         2.Ödev
* @date               20.11.2022
* @author             Yusuf İslam Bil yusuf.bil@ogr.sakarya.edu.tr
*/
#include<iostream>
#include<iomanip>
#include <stdio.h>
#include<fstream>
#include "Radix.hpp"
#include "Hucre.hpp"
#include "Doku.hpp"
#include "Organ.hpp"
#include "Sistem.hpp"
#include "ikiliAramaAgaci.hpp"
#include "Kontrol.hpp"
#include "Organizma.hpp"
#include "DinamikDizi.hpp"
using namespace std;
int main()
{  
   ifstream dosya("veri.txt");
   if(dosya.is_open())
   {
    int sayac=0;
    int sayacSistem=0;
    int sayacOrganizma=0;
    string satir="";
    AgacDugum* sistemDizi[100]; 
    DinamikDizi* dizi=new DinamikDizi();
    Organizma* organizma=new Organizma();
    while(getline(dosya,satir))
    { 
      if(sayac<20)
      {
        stringstream ss(satir);
        int siradakiSayi=0;
        int satirUzunluk=0;
        while(ss>>siradakiSayi)
        {
          satirUzunluk++;
        }
        dizi->diziolustur(satirUzunluk);
        stringstream ss2(satir);
        siradakiSayi=0;
        int i=0;
        while(ss2>>siradakiSayi)
        {
        
          dizi->adres[i]=siradakiSayi;
          i++;
        }
        Radix *radix = new Radix(dizi->adres,satirUzunluk);
        int *siraliSayilar = radix->sirala();
      
        Hucre* hucre=new Hucre();
        for(int i=0;i<satirUzunluk;i++)
        {
          hucre->ekle(siraliSayilar[i]);
        }
        DugumHucre* gecicidoku[20];
        DugumHucre* hucregec=hucre->ilk;
        for(int i=0;i<satirUzunluk; i++)
        { 
          if(i==satirUzunluk/2)
          {  
            gecicidoku[sayac]=hucregec; 
          }
          hucregec=hucregec->sonraki; 
        } 

        if(sayac==19)
        { 
          Doku* doku=new Doku();
          for(int i=0;i<20; i++)
          {   
            doku->ekle(gecicidoku[i]);  
          }  
          ikiliAramaAgaci* agac=new ikiliAramaAgaci(); 
          Organ* organ=new Organ();
          
          DugumDoku* dokugec=doku->ilk;
          agac->kok=new AgacDugum(dokugec);
          dokugec=dokugec->sonraki; 
          for(int i=0; i<19; i++)
          { 
            organ->ekleOrgan(dokugec,agac->kok);
            dokugec=dokugec->sonraki;
          } 
          system("pause");
          agac->Siralama(agac->kok);
          system("pause");
          

          
          sistemDizi[sayacSistem]=agac->kok;
          sayacSistem++;
          if(sayacSistem==100)
          { 
            Sistem* sistem=new Sistem();
            for (int i = 0; i < 100; i++)
            { 
              sistem->ekle(sistemDizi[i]);
            }
            organizma->ekle(sistem->ilk);
            sayacOrganizma++;
            sayacSistem=0;
          }
          sayac=-1;
        }
      }
      sayac++;
    }
    Kontrol* kontrol=new Kontrol();
    DugumOrganizma* gec=organizma->ilk;
    DugumSistem* gecSis=organizma->ilk->sistemadresi;
    char ch1=' ';
    char ch2='#';
    system("cls");
    cout<<setw(43)<<"ORGANIZMA\n"<<endl;
    for(int i=0; i<sayacOrganizma; i++)
    {
      for(int j=0; j<100; j++)
      { 
        int dengefarki=abs(kontrol->solYukseklik(gecSis->organadresi) - kontrol->sagYukseklik(gecSis->organadresi));
        if(dengefarki<2)
        {
          organizma->yazdir(ch1);
        }
        else if(dengefarki>=2)
        {
          organizma->yazdir(ch2);
        }
        gecSis=gecSis->sonraki;
      } 
      cout<<endl;
      gec=gec->sonraki;
      if(i+1!=sayacOrganizma)
      {
        gecSis=gec->sistemadresi;
      }
      
    }
    char enter;
    enter=getchar();
    ikiliAramaAgaci* agac=new ikiliAramaAgaci();
    if(int(enter)==10)
    { 
      system("cls");
      cout<<setw(45)<<"ORGANIZMA MUTASYON\n"<<endl;
      for(int i=0; i<sayacOrganizma; i++)
      {
        for(int j=0; j<100; j++)
        { 
          if(organizma->ilk->sistemadresi->organadresi->veri%50==0)
          {
            agac->postOrder(organizma->ilk->sistemadresi->organadresi);
            AgacDugum* aktif=0;
            for(int i=0; i<19; i++)
            {
              aktif=agac->postOrderDizi[i];
              agac->sil(aktif->veri,organizma->ilk->sistemadresi->organadresi);
            }
            int gecicipost=0;
            for(int a=0; a<20; a++)
            { 
              DugumHucre* gec=agac->postOrderDizi[a]->dokuadresi->hucreadresi;
              DugumHucre* gecici=0;
              int sayachucre=1;
              while (gec->onceki!=0)  
              {
                gec=gec->onceki;
                    
              } 
              gecici=gec;                                      
              while(gec->sonraki!=0)
              {
                gec=gec->sonraki;
                sayachucre++;
              }
              gec=gecici;
              dizi->diziolustur(sayachucre);
              for(int z=0; z<sayachucre; z++)
              { 
                if(gec->veri%2==0)
                { 
                  gec->veri=gec->veri/2;
                  dizi->adres[z]=gec->veri;
                }
                else
                { 
                  dizi->adres[z]=gec->veri;
                }
                gec=gec->sonraki; 
              } 
              gec=gecici;
              
              Radix *radix = new Radix(dizi->adres,sayachucre);
              int *siraliSayilar = radix->sirala();
              for(int y=0; y<sayachucre; y++)
              {
                gec->veri=siraliSayilar[y]; 
                if(y==sayachucre/2)
                { 
                  organizma->ilk->sistemadresi->organadresi->dokuadresi->hucreadresi->veri=gec->veri;
                  if(a==0)
                  {
                    gecicipost=gec->veri;
                  }
                  if(a==19)
                  {
                    agac->postOrderDizi[19]->veri=gec->veri;
                    organizma->ilk->sistemadresi->organadresi->veri=gec->veri; 
                    organizma->ilk->sistemadresi->veri=gec->veri;
                    organizma->ilk->veri=gec->veri;
                  }
                }
                gec=gec->sonraki;
              } 
            }
            int gecicikok=agac->postOrderDizi[19]->veri;  
            agac->postOrderDizi[19]->veri=gecicipost;
            organizma->ilk->sistemadresi->organadresi->dokuadresi=organizma->ilk->sistemadresi->organadresi->dokuadresi->sonraki;
            for(int i=0; i<19; i++)
            {
              if(i==18)
              {
                organizma->ilk->sistemadresi->organadresi->dokuadresi->hucreadresi->veri=gecicikok;
              }
              agac->ekle(organizma->ilk->sistemadresi->organadresi->dokuadresi,agac->postOrderDizi[19]);
              organizma->ilk->sistemadresi->organadresi->dokuadresi=organizma->ilk->sistemadresi->organadresi->dokuadresi->sonraki;
              
              
            } 
            agac->sira=0;
            }
            int dengefarki= abs(kontrol->solYukseklik(organizma->ilk->sistemadresi->organadresi) - kontrol->sagYukseklik(organizma->ilk->sistemadresi->organadresi));
            if(dengefarki<2)
            {
              organizma->yazdir(ch1);
            }
            else if(dengefarki>=2)
            {
              organizma->yazdir(ch2);
            }
            organizma->ilk->sistemadresi=organizma->ilk->sistemadresi->sonraki;  
        }
         cout<<endl;
        organizma->ilk=organizma->ilk->sonraki;
      }
    }
    }
  dosya.close();
}