#include "Podstawa.hpp"
#include <math.h>
#include <stdlib.h>


float cPodstawa::Polozenie()
{
    return x;
}
bool cPodstawa::Kolizja(cPodstawa Obj)
{
    if(abs(Obj.Polozenie()-x)<=5)//szerokosc jednostki = 50
    {
        std::cout<< abs(Obj.Polozenie()-x) <<" Kolizja!";
        return 1;

    }
    else
    {
      std::cout<<"| "<<Obj.Polozenie()<<" - "<<x<<" = "<< abs(Obj.Polozenie()-x)<< "\n";
      return 0 ;
    }

}

void cPodstawa::Ruch(float _MvSpd)
{
  MvSpd = _MvSpd;
    x += MvSpd;
}

void cPodstawa::czyZasieg(cPodstawa Obj)
{
    bool wZasiegu = 0;
    if(abs(Obj.Polozenie() - x) <= Range)
    {
        wZasiegu =  1;
    }
    else
        wZasiegu = 0 ;

    if(wZasiegu)
    {
        Obj.minusHP(Dmg);
    }
}

void cPodstawa::minusHP(int oDmg)
{
//jakieśtam przeliczanie dmg / pancerz
    HP = HP - oDmg;
}
