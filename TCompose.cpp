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
#include "TCompose.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
void TCompose::ajouter(TSimple ts) //ajouter un trajet simple
{
  
} 
void TCompose::ajouter(TSimple* liste_ts) // ajouter une liste de trajet de simple
{
  
} 
//----- Fin de Méthode


//-------------------------------------------- Constructeurs - destructeur

TCompose::TCompose ()
{
  
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

