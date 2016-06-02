#include "Budynek.hpp"
#include <iostream>


void cBudynek::Rysuj()
{
  glPushMatrix();
  glTranslatef(x,0.0f,0.0f);
  glColor3f(0.0f,0.68f,0.98f);
  glutSolidSphere(0.5f,50,50);
  glPopMatrix();
  glPushMatrix();
  glTranslatef(x,2.0f,0.0f);
  glBegin(GL_POLYGON);
  glColor3f(1.0f,0.0f,0.0f);
  glVertex2f(-HP/2500.0, -0.25);
  glVertex2f(-HP/2500.0,0.25);
  glVertex2f(HP/2500.0,0.25);
  glVertex2f(HP/2500.0,-0.25);
  glEnd();
  glPopMatrix();
}
cBudynek::cBudynek(int HaPe, float posX, char Player)
{
  HP = HaPe;
  Gracz = Player;
  x = posX;
  std::cout<<HP<<"\n";
}
