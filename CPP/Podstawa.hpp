#ifndef _PODSTAWA_HPP
#define _PODSTAWA_HPP


#if defined __APPLE__
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>
#else
//#include <GL/gl.h>
//#include <GL/glu.h>
#include <GL/freeglut.h>
#endif


#include <math.h>
#include <iostream>

class cPodstawa
{
protected:
    int HP;
    int Dmg;
    int Def;
    float MvSpd;
    int Range;

    float x;

    int pEvo;

    char Gracz;

public:
    float Polozenie(void);
    bool Kolizja(cPodstawa);
    void Ruch();
    bool czyZasieg(cPodstawa);
    void minusHP(int);
};

#endif
