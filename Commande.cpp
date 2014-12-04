#include "Commande.h"
#include <string>

using namespace std;

map<string,Commande*> Commande::commandesInscrites() {
    static map<string,Commande*>* comInscrites=new map<string,Commande*>;
    return *comInscrites;
}

Commande* Commande::nouvelleCommande(string c) {
    return commandesInscrites()[c]->constructeurVirtuel();
}

Commande::Commande(string c) {
    commandesInscrites()[c]=this;
}