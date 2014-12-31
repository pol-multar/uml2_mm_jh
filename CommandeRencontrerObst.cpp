#include "CommandeRencontrerObst.h"
#include "Commande.h"

using namespace std;

CommandeRencontrerObst CommandeRencontrerObst::monExemplaire("RENCONTREROBST");

CommandeRencontrerObst::CommandeRencontrerObst(Invocateur* inv) :Commande(inv->getRobot()){
	int h = inv->getInt();
	plot = new Plot(h);
};

Commande* CommandeRencontrerObst::constructeurVirtuel(Invocateur* inv) {
	return new CommandeRencontrerObst(inv);
}

void CommandeRencontrerObst::execute() {
	sauvRobot = robot;
	sauv = true;
	robot->rencontrerPlot(*plot);
}

bool CommandeRencontrerObst::reversible() {
	if (sauv)
		return true;
	return false;
}

void CommandeRencontrerObst::desexecute() {
	if (CommandeRencontrerObst::reversible()){
		robot = sauvRobot;
	}
}