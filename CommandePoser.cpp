#include "CommandePoser.h"
#include "Commande.h"

using namespace std;

CommandePoser CommandePoser::monExemplaire("POSER");


Commande* CommandePoser::constructeurVirtuel() {
    return new CommandePoser();
}