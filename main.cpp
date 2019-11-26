#include <iostream>
#include "Trajet.h"
#include "TSimple.h"
#include "TCompose.h"

int main ()
{
  //
  Trajet* t= new Trajet ("Lyon","Paris");
  //t->Afficher();
  
  TSimple* a = new TSimple("Orléans", "Toulouse", "trotinnette");
  
  TSimple* b = new TSimple("Toulouse", "Lyon", "voiture");
  
  TCompose* c = new TCompose("Orléans","B");
  c->Ajouter(a);
  c->Ajouter(b);
  //a->Afficher();
  //b->Afficher();
  //c->Afficher();
  TCompose* d = new TCompose("Orléans","B");
  d->Ajouter(c);
  d->Ajouter(a);
  d->Afficher();
  
  
  delete c;
  delete a;
  delete t;
  
  return 0;
}