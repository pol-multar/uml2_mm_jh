#ifndef DEF_EVALUEROBST
#define DEF_EVALUEROBST

#include "Commande.h"
#include <string>

class CommandeEvaluerObst : public Commande{

public:
     static CommandeEvaluerObst monExemplaire;

    CommandeEvaluerObst(std::string ca):Commande(ca){};
    CommandeEvaluerObst():Commande("EVALUEROBST"){};
    Commande* constructeurVirtuel();

};


#endif