#include "CommandeEvaluerObst.h"
#include "Commande.h"

using namespace std;

CommandeEvaluerObst CommandeEvaluerObst::monExemplaire("EVALUEROBST");


CommandeEvaluerObst::CommandeEvaluerObst(Invocateur* inv) :Commande(inv->getRobot()){
};

Commande* CommandeEvaluerObst::constructeurVirtuel(Invocateur* inv) {
	return new CommandeEvaluerObst(inv);
}

void CommandeEvaluerObst::execute() {
	sauvRobot = robot;
	sauv = true;
	robot->evaluerPlot();
}

bool CommandeEvaluerObst::reversible() {
	if (sauv)
		return true;
	return false;
}

void CommandeEvaluerObst::desexecute() {
	if (CommandeEvaluerObst::reversible()){
		robot = sauvRobot;
	}
}