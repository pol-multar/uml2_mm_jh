#ifndef DEF_PESEROBJET
#define DEF_PESEROBJET

#include "Commande.h"
#include <string>

class CommandePeserObjet : public Commande{

public:
     static CommandePeserObjet monExemplaire;

    CommandePeserObjet(std::string cpo):Commande(cpo){};
    CommandePeserObjet():Commande("PESEROBJET"){};
    Commande* constructeurVirtuel();

};


#endif