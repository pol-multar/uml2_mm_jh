#ifndef DEF_FIGER
#define DEF_FIGER

#include "Commande.h"
#include <string>

class CommandeFiger : public Commande{

public:
     static CommandeFiger monExemplaire;

    CommandeFiger(std::string cf):Commande(cf){};
    CommandeFiger():Commande("FIGER"){};
    Commande* constructeurVirtuel();

};


#endif