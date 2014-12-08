#ifndef DEF_POSER
#define DEF_POSER

#include "Commande.h"
#include <string>

class CommandePoser : public Commande{

public:
     static CommandePoser monExemplaire;

    CommandePoser(std::string cp):Commande(cp){};
    CommandePoser():Commande("POSER"){};
    Commande* constructeurVirtuel();

};


#endif