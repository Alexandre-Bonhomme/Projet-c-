/*************************************************************************
                           TCompose  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <TCompose> (fichier TCompose.h) ----------------
#if ! defined ( TCOMPOSE_H )
#define TCOMPOSE_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <TCompose>
//
//
//------------------------------------------------------------------------

class TCompose : public Trajet
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    TCompose ();
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~TCompose ();
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées
void ajouter(TSimple ts);    //Ajouter un trajet simple
void ajouter(TSimple* ts);   //Ajoute une liste de trajets simples
//----------------------------------------------------- Attributs protégés
TSimple liste [10];
};

//-------------------------------- Autres définitions dépendantes de <Tcompose>

#endif // TCOMPOSEE_H

