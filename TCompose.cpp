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
#include <string.h>

//------------------------------------------------------ Include personnel

#include "Trajet.h"
#include "TSimple.h"
#include "TCompose.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques

void TCompose::Ajouter(TSimple* ts) //ajouter un trajet simple
{
  if(strcmp(ts->GetDepart(),posActuelle) == 0){
    liste[nbTrajet] = ts;
    nbTrajet ++;
    posActuelle =(char*) ts->GetArrivee();
  }else{
    cout <<"Ajout invalide" << endl;
  }
}

void TCompose::Ajouter(TCompose* tc) // ajouter une liste de trajet de simple
{
  if(strcmp(tc->GetDepart(),posActuelle) == 0){
    int nbTS = tc->GetNbTrajet();
    TSimple ** ListeTS = tc->GetListe();
    for(int i=0;i<nbTS;i++){
      liste[nbTrajet+i] = ListeTS[i];
    }
    nbTrajet = nbTrajet + nbTS;
    posActuelle =(char*) tc->GetArrivee();
  }else{
    cout <<"Ajout invalide" << endl;
  }
} 

void TCompose::Afficher() //affichage
{
  for(int i=0;i<nbTrajet;i++){
    liste[i]->Afficher();
  }
}

TSimple** TCompose::GetListe() 
{
  return liste;
}

int TCompose::GetNbTrajet() 
{
  return nbTrajet;
}


//-------------------------------------------- Constructeurs - destructeur

TCompose::TCompose (const char* depart,const char* arrivee):Trajet(depart,arrivee)
{
  nbTrajet = 0;
  liste = new TSimple* [10];
  posActuelle = (char*) depart;
  
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

