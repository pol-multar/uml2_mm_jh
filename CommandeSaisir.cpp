#include "CommandeSaisir.h"
#include "Commande.h"

using namespace std;

CommandeSaisir CommandeSaisir::monExemplaire("SAISIR");

CommandeSaisir::CommandeSaisir(Invocateur* inv) :Commande(inv->getRobot()){
	int poid = inv->getInt();
	objet = new Objet(poid);
};

Commande* CommandeSaisir::constructeurVirtuel(Invocateur* inv) {
	return new CommandeSaisir(inv);
}

void CommandeSaisir::execute() {
	sauvRobot = robot;
	sauv = true;
	robot->saisir(*objet);
}

bool CommandeSaisir::reversible() {
	if (sauv)
		return true;
	return false;
}

void CommandeSaisir::desexecute() {
	if (CommandeSaisir::reversible()){
		robot = sauvRobot;
	}
}