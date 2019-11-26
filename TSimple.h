/*************************************************************************
                           TSimple  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <TSimple> (fichier TSimple.h) ----------------
#if ! defined ( TSIMPLE_H )
#define TSIMPLE_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <TSimple>
//
//
//------------------------------------------------------------------------

class TSimple : public Trajet
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //
    virtual void Afficher();
    

//-------------------------------------------- Constructeurs - destructeur
    
    TSimple (const char* depart,const char* arrivee,const char* MT);
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~TSimple ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
const char* MT;
};

//-------------------------------- Autres définitions dépendantes de <TSimple>

#endif // TSIMPLE_H

