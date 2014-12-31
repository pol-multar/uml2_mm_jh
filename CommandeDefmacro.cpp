#include "CommandeDefmacro.h"
#include "Commande.h"

using namespace std;

CommandeDefmacro CommandeDefmacro::monExemplaire("DEFMACRO");

CommandeDefmacro::CommandeDefmacro(Invocateur* inv) :MacroCommande(inv){
};

Commande* CommandeDefmacro::constructeurVirtuel(Invocateur* inv) {
	return new CommandeDefmacro(inv);
}

void CommandeDefmacro::execute() {
	sauvRobot = robot;
	sauv = true;
	string nom;
	cout << "Macro:" << endl;
	cout << "Nom de Macro:" << endl;
	nom = invocateur->getCommande();
	Commande::commandesInscrites()[nom] = new MacroCommande(invocateur);
	string nomCommande;
	cout << "Macro Commande:" << endl;
	nomCommande = invocateur->getCommande();
	while (nomCommande != FIN_MARCO){
		commands.push_back(nomCommande);
		cout << "Macro Commande:" << endl;
		nomCommande = invocateur->getCommande();
	}
	cout << "Fin de Macro." << endl;
}

bool CommandeDefmacro::reversible() {
	if (sauv)
		return true;
	return false;
}

void CommandeDefmacro::desexecute() {
	if (CommandeDefmacro::reversible()){
		robot = sauvRobot;
	}
}