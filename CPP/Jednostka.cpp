#include "Jednostka.hpp"


cJednostka::cJednostka(float _x, float speed,float range,int damage)
{
	x = _x;
	Range = range;
	Dmg = damage;
	MvSpd = speed;
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

	glVertex2d(0- 0.5, -0.5);
	glVertex2d(0, 0.5);
	glVertex2d(0 + 0.5, -0.5);

	glEnd();

	glPopMatrix();
}
int cJednostka::Damage()
{
	return Dmg;
}
