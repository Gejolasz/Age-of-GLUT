#include "Jednostka.hpp"


cJednostka::cJednostka(float _x, float _MvSpd, char _Player)
{
	x = _x;
	MvSpd = _MvSpd;
}

cJednostka::~cJednostka()
{
	
}


void cJednostka::Rysuj()
{
	glPushMatrix();
	
	glColor3f(0.50, 0.50, 0.0);
	glTranslated(x, 0.0, 0.0);
	glBegin(GL_POLYGON);

	glVertex2d(-0.5, -0.5);
	glVertex2d(0, 0.5);
	glVertex2d(0.5, -0.5);

	glEnd();

	glPopMatrix();
}