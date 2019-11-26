/*************************************************************************
                           TCompose  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <TCompose> (fichier TCompose.h) ----------------
#if ! defined ( XXX_H )
#define XXX_H

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

    TCompose (TSimple* trajet);
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~TCompose ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées
void ajouter(TSimple ts);
//----------------------------------------------------- Attributs protégés
TSimple* ts;
TCompose* next;
};

//-------------------------------- Autres définitions dépendantes de <Xxx>

#endif // XXX_H

