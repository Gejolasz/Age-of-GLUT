#if defined __APPLE__
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>
#else
//#include <GL/gl.h>
//#include <GL/glu.h>
#include <GL/freeglut.h>
#endif

#include "Podstawa.hpp"
#include "Budynek.hpp"
#include "Jednostka.hpp"

#include <stdlib.h>
#include <iostream>
#include <vector>

using namespace std;

cBudynek BudynekA(5000,18,'P');//hp,x,gracz; P strona
cBudynek BudynekB(5000,-18,'L');//hp,x,gracz; L strona
cJednostka JednostkaL(-16,0.05,5,2,500);
cJednostka JednostkaP(16,-0.05,5,2,500);

std::vector<cJednostka> JednostkiP;
std::vector<cJednostka> JednostkiL;

void init()
{

}


void display()
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glPushMatrix();
	BudynekA.Rysuj();
	BudynekB.Rysuj();
	JednostkaL.Rysuj();
	JednostkaP.Rysuj();
	for(int p = 0 ; p < JednostkiP.size();p++)
	{
			JednostkiP[p].Rysuj();
			JednostkiP[p].cPodstawa::Ruch();
	}

	for(int l = 0 ; l < JednostkiL.size();l++)
	{
			JednostkiL[l].Rysuj();
			JednostkiL[l].cPodstawa::Ruch();
	}


	glPopMatrix();

	glutPostRedisplay();
	glutSwapBuffers();
}


void loop()
{
	#if defined __APPLE__//if dla OSX
	system("sleep 0.001");
	#else//else WINDOWS etc.
	Sleep(1);
	#endif

	if(!JednostkaL.cPodstawa::Kolizja(BudynekA) and ! JednostkaL.cPodstawa::Kolizja(JednostkaP))
	{
		JednostkaL.cPodstawa::Ruch();
	}
	if(JednostkaL.cPodstawa::czyZasieg(BudynekA))
	BudynekA.minusHP(JednostkaL.Damage());
	if(JednostkaL.cPodstawa::czyZasieg(JednostkaP))
	JednostkaP.minusHP(JednostkaL.Damage());

	if(!JednostkaP.cPodstawa::Kolizja(BudynekB) and !JednostkaP.cPodstawa::Kolizja(JednostkaL))
	{
		JednostkaP.cPodstawa::Ruch();
	}
	if(JednostkaP.cPodstawa::czyZasieg(BudynekB))
	BudynekB.minusHP(JednostkaP.Damage());
	if(JednostkaP.cPodstawa::czyZasieg(JednostkaL))
	JednostkaL.minusHP(JednostkaP.Damage());


	glutPostRedisplay();
}

void keyDown(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 27:
		exit(0);
		break;
		case 'p':
		JednostkiP.push_back(cJednostka(16,-0.05,5,2,500));
		break;
		case 'l':
		JednostkiL.push_back(cJednostka(-16,0.05,5,2,500));
	}
}

void keyUp(unsigned char key, int x, int y)
{
	switch (key)
	{

	}
}

void mouseFunc(int x_d, int y_d)
{
	glutPostRedisplay();
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(800, 800);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Age of GLUT");

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glOrtho(-20.0, 20.0, -20.0, 20.0, -20.0, 20.0);

	glutDisplayFunc(display);
	glutKeyboardFunc(keyDown);
	glutKeyboardUpFunc(keyUp);
	glutPassiveMotionFunc(mouseFunc);
	glutIdleFunc(loop);

	init();
	glutMainLoop();

	return 1;
}
