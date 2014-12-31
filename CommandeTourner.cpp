#include "CommandeTourner.h"
#include "Commande.h"
#include "Invocateur.h"
using namespace std;

CommandeTourner CommandeTourner::monExemplaire("TOURNER");


CommandeTourner::CommandeTourner(Invocateur* inv) :Commande(inv->getRobot()){
	direction = inv->getString();
};

Commande* CommandeTourner::constructeurVirtuel(Invocateur* inv) {
	return new CommandeTourner(inv);
}

void CommandeTourner::execute() {
	sauvRobot = robot;
	sauv = true;
	robot->tourner(direction);
}

bool CommandeTourner::reversible() {
	if (sauv)
		return true;
	return false;
}

void CommandeTourner::desexecute() {
	if (CommandeTourner::reversible()){
		robot = sauvRobot;
	}
}