#ifndef _BUDYNEK_HPP
#define _BUDYNEK_HPP

#include <math.h>
#include <iostream>
#include "Podstawa.hpp"

class cBudynek : public cPodstawa
{
private:

public:
    cBudynek(int,float,char);
    void Rysuj(void);

};

#endif
