#include "CommandeAvancer.h"
#include "Commande.h"
#include "Invocateur.h"
#include "Robot.h"
using namespace std;

CommandeAvancer::CommandeAvancer(Invocateur* inv):Commande(inv->getRobot()){
	int x = inv->getInt();
	int y = inv->getInt();
	position = new Position(x, y);
};

CommandeAvancer CommandeAvancer::monExemplaire("AVANCER");

Commande* CommandeAvancer::constructeurVirtuel(Invocateur* inv) {
    return new CommandeAvancer(inv);
}

void CommandeAvancer::execute() {
	sauvRobot = robot;
	sauv = true;
	robot->avancer(position->getX(), position->getY());
}

bool CommandeAvancer::reversible() {
	if (sauv)
		return true;
	return false;
}

void CommandeAvancer::desexecute() {
    if(CommandeAvancer::reversible()){
		robot = sauvRobot;
    }
}