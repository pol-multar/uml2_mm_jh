#ifndef DEF_COMMANDE
#define DEF_COMMANDE

#include <string>

class Commande{

public:
    static map<string,Commande*>& commandesInscrites();
    static Commande* nouvelleCommande(string c);

protected:
    Commande(std::string c);
    virtual Commande* constructeurVirtuel()=0;

};


#endif