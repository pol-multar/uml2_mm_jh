#include "CommandeRepartir.h"
#include "Commande.h"

using namespace std;

CommandeRepartir CommandeRepartir::monExemplaire("REPARTIR");

CommandeRepartir::CommandeRepartir(Invocateur* inv) :Commande(inv->getRobot()){
};

Commande* CommandeRepartir::constructeurVirtuel(Invocateur* inv) {
	return new CommandeRepartir(inv);
}

void CommandeRepartir::execute() {
	sauvRobot = robot;
	sauv = true;
	robot->repartir();
}

bool CommandeRepartir::reversible() {
	if (sauv)
		return true;
	return false;
}

void CommandeRepartir::desexecute() {
	if (CommandeRepartir::reversible()){
		robot = sauvRobot;
	}
}