/*************************************************************************
                           Trajet
                             -------------------
    début                : $2019$
    copyright            : (C) $2019$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Trajet> (fichier Trajet.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include "Trajet.h"


//----------------------------------------------------- Méthodes publiques
void Trajet::Afficher()
{
  cout<<"depart: "<<depart;
  cout<<" arrivée: "<<arrivee<<endl;
}

//----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs
//Xxx & Xxx::operator = ( const Xxx & unXxx )
// Algorithme :
//
// {
// } //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur

/*Xxx::Xxx ( const Xxx & unXxx ) ----Trajet (constructeur de copie)
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Xxx>" << endl;
#endif
} //----- Fin de Trajet (constructeur de copie)
*/

Trajet::Trajet (const char* dep, const char* arr) {
  arrivee=arr;
  depart=dep;

#ifdef MAP
    cout << "Appel au constructeur de <Trajet>" << endl;
#endif
} //----- Fin de Xxx


Trajet::~Trajet ()
{
#ifdef MAP
    cout << "Appel au destructeur de <Xxx>" << endl;
#endif
} //----- Fin de ~Trajet


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

