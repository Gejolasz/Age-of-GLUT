#include "Jednostka.hpp"



cJednostka::cJednostka(float _x, float speed,float range,int damage, int _hp)
{
	x = _x;
	Range = range;
	Dmg = damage;
	MvSpd = speed;
	HP = _hp;
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

	glPushMatrix();
	glTranslatef(x,1.5f,0.0f);
	glBegin(GL_POLYGON);
	glColor3f(1.0f,0.0f,0.0f);
	glVertex2f(-HP/500.0, -0.125);
	glVertex2f(-HP/500.0,0.125);
	glVertex2f(HP/500.0,0.125);
	glVertex2f(HP/500.0,-0.125);
	glEnd();
	glPopMatrix();
}
int cJednostka::Damage()
{
	return Dmg;
}
int cJednostka::ileHP()
{
	return HP;
}
