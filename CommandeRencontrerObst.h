#ifndef DEF_RENCONTREROBST
#define DEF_RENCONTREROBST

#include "Commande.h"
#include <string>

class CommandeRencontrerObst : public Commande{

public:
     static CommandeRencontrerObst monExemplaire;

    CommandeRencontrerObst(std::string cro):Commande(cro){};
    CommandeRencontrerObst():Commande("RENCONTREROBST"){};
    Commande* constructeurVirtuel();

};


#endif