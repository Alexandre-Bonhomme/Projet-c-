/*************************************************************************
                           TCompose  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <TCompose> (fichier TCompose.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel

#include "Trajet.h"
#include "TSimple.h"
#include "TCompose.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques

void TCompose::Ajouter(TSimple* ts) //ajouter un trajet simple
{
  liste[nbTrajet] = ts;
  nbTrajet ++;
  
}

void TCompose::Ajouter(TSimple** liste_ts) // ajouter une liste de trajet de simple
{
  
} 

void TCompose::Afficher() //affichage
{
  for(int i=0;i<nbTrajet;i++){
    liste[i]->Afficher();
  }
}


//-------------------------------------------- Constructeurs - destructeur

TCompose::TCompose (const char* depart,const char* arrivee):Trajet(depart,arrivee)
{
  nbTrajet = 0;
  liste = new TSimple* [10];
#ifdef MAP
    cout << "Appel au constructeur de <TCompose>" << endl;
#endif
} //----- Fin de TCompose


TCompose::~TCompose ()
{
  
#ifdef MAP
    cout << "Appel au destructeur de <TCompose>" << endl;
#endif
} //----- Fin de ~TCompose


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

