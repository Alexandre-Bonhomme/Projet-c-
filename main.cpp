#include <iostream>
#include "Trajet.h"
#include "TSimple.h"

int main ()
{
  //
  Trajet* t= new Trajet ("Lyon","Paris");
  t->Afficher();
  
  TSimple* a = new TSimple("Orléans", "Toulouse", "trotinnette");
  a->Afficher();
  
  TCompose* c = new TSimple();
  
  
  delete c;
  delete a;
  delete t;
  
  return 0;
}