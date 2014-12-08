#ifndef DEF_TOURNER
#define DEF_TOURNER

#include "Commande.h"
#include <string>

class CommandeTourner : public Commande{

public:
     static CommandeTourner monExemplaire;

    CommandeTourner(std::string ct):Commande(ct){};
    CommandeTourner():Commande("TOURNER"){};
    Commande* constructeurVirtuel();

};


#endif