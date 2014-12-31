#include "CommandePoser.h"
#include "Commande.h"

using namespace std;

CommandePoser CommandePoser::monExemplaire("POSER");

CommandePoser::CommandePoser(Invocateur* inv) :Commande(inv->getRobot()){
};

Commande* CommandePoser::constructeurVirtuel(Invocateur* inv) {
	return new CommandePoser(inv);
}

void CommandePoser::execute() {
	sauvRobot = robot;
	sauv = true;
	robot->poser();
}

bool CommandePoser::reversible() {
	if (sauv)
		return true;
	return false;
}

void CommandePoser::desexecute() {
	if (CommandePoser::reversible()){
		robot = sauvRobot;
	}
}