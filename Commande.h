#ifndef DEF_COMMANDE
#define DEF_COMMANDE

#include <string>
#include <map>

#include "Invocateur.h"

class Commande{

public:
    static std::map<std::string,Commande*>& commandesInscrites();
    static Commande* nouvelleCommande(std::string c);

protected:
    Commande(std::string c);
    virtual Commande* constructeurVirtuel()=0;
    virtual void execute(void)=0;
    virtual void desexecute(void)=0;
    virtual bool reversible(void)=0;

};


#endif