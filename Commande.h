#ifndef DEF_COMMANDE
#define DEF_COMMANDE

#include <string>
#include <map>

class Commande{

public:
    static std::map<std::string,Commande*>& commandesInscrites();
    static Commande* nouvelleCommande(std::string c);

protected:
    Commande(std::string c);
    virtual Commande* constructeurVirtuel()=0;

};


#endif