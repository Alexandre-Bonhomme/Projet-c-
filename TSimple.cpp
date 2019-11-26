/*************************************************************************
                           TSimple  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <TSimple> (fichier TSimple.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Trajet.h"
#include "TSimple.h"

//----------------------------------------------------- Méthodes publiques
void TSimple::Afficher()
{
  Trajet::Afficher();
  cout<<MT<<endl;
} //----- Fin de Méthode

//-------------------------------------------- Constructeurs - destructeur

TSimple::TSimple (const char* depart,const char* arrivee, const char* moyenT):Trajet(depart,arrivee)
{
  MT=moyenT;
  
#ifdef MAP
    cout << "Appel au constructeur de <TSimple>" << endl;
#endif
} //----- Fin de TSimple


TSimple::~TSimple ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <TSimple>" << endl;
#endif
} //----- Fin de ~TSimple


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

