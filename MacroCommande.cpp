#include "MacroCommande.h"
#include "Commande.h"
#include <list>
#include <string>

using namespace std;

list<string> MacroCommande::commands;
string MacroCommande::FIN_MARCO = "FINMACRO";

MacroCommande::MacroCommande(Invocateur* inv) :invocateur(inv){

};

Commande* MacroCommande::constructeurVirtuel(Invocateur* inv) {
	return new MacroCommande(inv);
}

void MacroCommande::execute() {
	sauvRobot = robot;
	sauv = true;
	string commande;
	while (!commands.empty()){
		commande = commands.front();
		commands.pop_front();
		cout << "Executer commande: " << commande << endl;
		invocateur->run(commande, invocateur->getRobot());
	}
}

bool MacroCommande::reversible() {
	if (sauv)
		return true;
	return false;
}

void MacroCommande::desexecute() {
	if (MacroCommande::reversible()){
		robot = sauvRobot;
	}
}