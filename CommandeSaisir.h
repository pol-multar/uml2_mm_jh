#ifndef DEF_SAISIR
#define DEF_SAISIR

#include "Commande.h"
#include <string>

class CommandeSaisir : public Commande{

public:
     static CommandeSaisir monExemplaire;

    CommandeSaisir(std::string cs):Commande(cs){};
    CommandeSaisir():Commande("SAISIR"){};
    Commande* constructeurVirtuel();

};


#endif