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

using namespace std;

cBudynek Budynek(5000);
cJednostka Jednostka(1);

void init()
{

}


void display()
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glPushMatrix();
	Budynek.Rysuj();
	Jednostka.Rysuj();
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
	glutPostRedisplay();
}

void keyDown(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 27:
		exit(0);
		break;
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
	glutInitWindowSize(600, 600);
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
