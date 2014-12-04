#include "CommandeAvancer.h"
#include "Commande.h"

using namespace std;

CommandeAvancer CommandeAvancer::monExemplaire("AVANCER");


Commande* CommandeAvancer::constructeurVirtuel() {
    return new CommandeAvancer();
}