#include "Jednostka.hpp"


cJednostka::cJednostka(float _x)
{
	x = _x;
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

	glVertex2d(x - 0.5, -0.5);
	glVertex2d(x, 0.5);
	glVertex2d(x + 0.5, -0.5);

	glEnd();

	glPopMatrix();
}