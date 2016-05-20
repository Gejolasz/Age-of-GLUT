#include "Jednostka.hpp"


float cJednostka::Polozenie()
{
    return x;
}
bool cJednostka::Kolizja(cJednostka Obj)
{
    if(abs(Obj.Polozenie() - x) <= 50)//szerokosc jednostki = 50
    {
        return 1;
    }
    else
    return 0 ;
}

void cJednostka::Ruch(cJednostka Obj)
{
    if(this->Kolizja(Obj))
    {//jezeli kolizja to:
        x += MvSpd;
    }
    else
    {
    //nic
    }
}

void cJednostka::czyZasieg(cJednostka Obj)
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

void cJednostka::minusHP(int oDmg)
{
//jakieśtam przeliczanie dmg / pancerz
    HP = HP - oDmg;
}
