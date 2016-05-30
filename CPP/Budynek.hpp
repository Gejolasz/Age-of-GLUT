#ifndef _BUDYNEK_HPP
#define _BUDYNEK_HPP

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
#include "Podstawa.hpp"

class cBudynek : public cPodstawa
{
private:

public:
    cBudynek(int);
    void Rysuj(void);

};

#endif
