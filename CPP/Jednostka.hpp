#ifndef _JEDNOSTKA_HPP
#define _JEDNOSTKA_HPP

#include <math.h>
#include <iostream>

class cJednostka
{
private:
    int BaseHP;
    int BaseDmg;
    int BaseDef;
    int BaseMvSpd;
    int BaseRange;

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

    int Value;//ile hajsy za zabicie
    int Exp;//ile expa za zabicie
public:
    cJednostka(bool,cGracz);//(1arg - melee/ranged,Gracz) //w konstruktorze będzie przeliczanie HP,DMG,etc. z BaseHP,BaseDMG,etc. i pDef,pMvSpd,etc.
    ~cJednostka();//to je destruktor

    float Polozenie(void);
    bool Kolizja(cJednostka);
    void Ruch(cJednostka);
    void czyZasieg(cJednostka);
    //bool Kolizja(cJednostka);
    //void Ruch(cJednostka);
    //void czyZasieg(cJednostka);
    void minusHP(int);
    //2 metody zwracające siano za zabicie tej jednostki oraz expa dla przeciwnika!!
};

#endif
