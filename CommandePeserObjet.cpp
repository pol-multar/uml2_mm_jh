#include "CommandePeserObjet.h"
#include "Commande.h"

using namespace std;

CommandePeserObjet CommandePeserObjet::monExemplaire("PESEROBJET");

CommandePeserObjet::CommandePeserObjet(Invocateur* inv) :Commande(inv->getRobot()){
};

Commande* CommandePeserObjet::constructeurVirtuel(Invocateur* inv) {
	return new CommandePeserObjet(inv);
}

void CommandePeserObjet::execute() {
	sauvRobot = robot;
	sauv = true;
	robot->peser();
}

bool CommandePeserObjet::reversible() {
	if (sauv)
		return true;
	return false;
}

void CommandePeserObjet::desexecute() {
	if (CommandePeserObjet::reversible()){
		robot = sauvRobot;
	}
}