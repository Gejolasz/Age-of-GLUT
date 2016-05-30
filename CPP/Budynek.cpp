#include "Budynek.hpp"
#include <iostream>

void cBudynek::Rysuj()
{
  glPushMatrix();
  glColor3f(0.0f,0.68f,0.98f);
  glutSolidSphere(0.5f,50,50);

  std::cout<<HP;

  glPopMatrix();
}
cBudynek::cBudynek(int HaPe)
{
  HP = HaPe;
}
