#ifndef _PODSTAWA_HPP
#define _PODSTAWA_HPP

#include <math.h>
#include <iostream>

class cPodstawa
{
private:
    int HP;
    int Dmg;
    int Def;
    int MvSpd;
    int Range;

    float x;

    int pEvo;
    int pDef;
    int pMvSpd;
    int pDmg;

public:
    float Polozenie(void);
    bool Kolizja(cPodstawa);
    void Ruch(cPodstawa);
    void czyZasieg(cPodstawa);
    void minusHP(int);
    void ileDef(void);
    int ileDmg(void);
    void ileMvSpd(void);
};

#endif
