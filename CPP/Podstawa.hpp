#ifndef _PODSTAWA_HPP
#define _PODSTAWA_HPP

#include <math.h>
#include <iostream>

class cPodstawa
{
protected:
    int HP;
    int Dmg;
    int Def;
    int MvSpd;
    int Range;

    float x;

    int pEvo;

public:
    float Polozenie(void);
    bool Kolizja(cPodstawa);
    void Ruch(cPodstawa);
    void czyZasieg(cPodstawa);
    void minusHP(int);
};

#endif
