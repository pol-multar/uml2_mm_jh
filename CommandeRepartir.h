#ifndef DEF_REPARTIR
#define DEF_REPARTIR

#include "Commande.h"
#include <string>

class CommandeRepartir : public Commande{

public:
     static CommandeRepartir monExemplaire;

    CommandeRepartir(std::string cr):Commande(cr){};
    CommandeRepartir():Commande("REPARTIR"){};
    Commande* constructeurVirtuel();

};


#endif