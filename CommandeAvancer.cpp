#include "CommandeAvancer.h"
#include "Commande.h"

using namespace std;

CommandeAvancer CommandeAvancer::monExemplaire("AVANCER");


Commande* CommandeAvancer::constructeurVirtuel() {
    return new CommandeAvancer();
}

void CommandeAvancer::execute() {
}

bool CommandeAvancer::reversible() {
    //TODO modifier
    return true;
}

void CommandeAvancer::desexecute() {
    if(CommandeAvancer::reversible()){

    }
}