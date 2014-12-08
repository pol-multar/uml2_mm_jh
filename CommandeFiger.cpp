#include "CommandeFiger.h"
#include "Commande.h"

using namespace std;

CommandeFiger CommandeFiger::monExemplaire("FIGER");


Commande* CommandeFiger::constructeurVirtuel() {
    return new CommandeFiger();
}