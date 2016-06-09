#include "Podstawa.hpp"
#include <math.h>
#include <stdlib.h>


bool cPodstawa::Kolizja(cPodstawa Obj)
{
    if(abs(Obj.x-x)<=1)//szerokosc jednostki = 50
    {
        std::cout<< abs(Obj.x-x) <<" Kolizja!";
        return 1;

    }
    else
    {
      std::cout<<"| "<<Obj.x<<" - "<<x<<" = "<< abs(Obj.x-x)<< "\n";
      return 0 ;
    }

}

void cPodstawa::Ruch()
{
    x += MvSpd;
}

bool cPodstawa::czyZasieg(cPodstawa Obj)
{
    bool wZasiegu = 0;
    if(abs(Obj.x-x) <= Range)
    {
        return  1;
    }
    else
        return 0 ;
}

void cPodstawa::minusHP(int oDmg)
{
    HP = HP - oDmg;
    std::cout<<" HP: "<<HP<<"\n";
}
bool cPodstawa::czyKoliduje()
{
  return koliduje;
}
void cPodstawa::Kolizja(bool kolizja)
{
  koliduje = kolizja;
}
