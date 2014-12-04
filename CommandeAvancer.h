#ifndef DEF_AVANCER
#define DEF_AVANCER

#include "Commande.h"
#include <string>

class CommandeAvancer : public Commande{

public:
     static CommandeAvancer monExemplaire;

    CommandeAvancer(std::string ca):Commande(ca){};
    CommandeAvancer():Commande("AVANCER"){};
    Commande* constructeurVirtuel();

};


#endif