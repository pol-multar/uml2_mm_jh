#include "CommandeFiger.h"
#include "Commande.h"

using namespace std;

CommandeFiger CommandeFiger::monExemplaire("FIGER");


CommandeFiger::CommandeFiger(Invocateur* inv) :Commande(inv->getRobot()){
};

Commande* CommandeFiger::constructeurVirtuel(Invocateur* inv) {
	return new CommandeFiger(inv);
}

void CommandeFiger::execute() {
	sauvRobot = robot;
	sauv = true;
	robot->figer();
}

bool CommandeFiger::reversible() {
	if (sauv)
		return true;
	return false;
}

void CommandeFiger::desexecute() {
	if (CommandeFiger::reversible()){
		robot = sauvRobot;
	}
}