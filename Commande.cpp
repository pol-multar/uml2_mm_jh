#include "Commande.h"


using namespace std;

map<string,Commande*>& Commande::commandesInscrites() {
    static map<string,Commande*>* comInscrites=new map<string,Commande*>;
    return *comInscrites;
}

Commande* Commande::nouvelleCommande(string c,Invocateur* inv) {
	if (commandesInscrites().find(c) == commandesInscrites().end())
	{
		throw Commande::Unknown_Commande_Exception();
	}
	return commandesInscrites()[c]->constructeurVirtuel(inv);

}

Commande::Commande(string c) {
    commandesInscrites()[c]=this;
}

Commande::Commande(Robot* r): robot(r) {
}
