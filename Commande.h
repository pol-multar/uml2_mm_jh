#ifndef DEF_COMMANDE
#define DEF_COMMANDE

class Commande{

public:
    static map<string,Commande*>& commandesInscrites();
    static Commande* nouvelleCommande(string c);

protected:
    Commande(string c);
    virtual Commande* constructeurVirtuel()=0;

};


#endif