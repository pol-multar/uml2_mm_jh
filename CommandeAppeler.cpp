#include "CommandeAppeler.h"
#include "Commande.h"

using namespace std;

CommandeAppeler CommandeAppeler::monExemplaire("APPELER");

CommandeAppeler::CommandeAppeler(Invocateur* inv) :MacroCommande(inv){
};

Commande* CommandeAppeler::constructeurVirtuel(Invocateur* inv) {
	return new CommandeAppeler(inv);
}

void CommandeAppeler::execute() {
	string nom;
	cout << "Nom de Macro Appele:" << endl;
	nom = invocateur->getCommande();
	if (commandesInscrites().find(nom) == commandesInscrites().end()){
		throw Commande::Unvalid_Commande_Exception();
	}
	cout << "Executer Macro" <<nom<< endl;
	commandesInscrites()[nom]->execute();
	cout << "Termine." << endl;
}

bool CommandeAppeler::reversible() {
	if (sauv)
		return true;
	return false;
}

void CommandeAppeler::desexecute() {
	if (CommandeAppeler::reversible()){
		robot = sauvRobot;
	}
}