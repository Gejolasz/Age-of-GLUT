#include "Podstawa.hpp"


float cPodstawa::Polozenie()
{
    return x;
}
bool cPodstawa::Kolizja(cPodstawa Obj)
{
    if(abs(Obj.Polozenie() - x) <= 50)//szerokosc jednostki = 50
    {
        return 1;
    }
    else
    return 0 ;
}

void cPodstawa::Ruch(cPodstawa Obj)
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

void cPodstawa::ileDef()
{
    Def = Def + pDef;
}

int cPodstawa::ileDmg()
{
    Dmg = Dmg + pDmg;
}
void cPodstawa::ileMvSpd()
{
    MvSpd = MvSpd + pMvSpd;
}
