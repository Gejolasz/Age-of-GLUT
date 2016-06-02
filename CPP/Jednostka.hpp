#ifndef _JEDNOSTKA_HPP
#define _JEDNOSTKA_HPP

#include "Podstawa.hpp"

class cJednostka : public cPodstawa
{
private:
	int Value;//ile golda za zabicie
	int Exp;//ile exp za zabicie

public:
	cJednostka(float,float,float,int,int);
	~cJednostka();
	int Damage();
	int ileHP();


	void Rysuj();
};

#endif
