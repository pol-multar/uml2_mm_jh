#include "CommandeTourner.h"
#include "Commande.h"

using namespace std;

CommandeTourner CommandeTourner::monExemplaire("TOURNER");


Commande* CommandeTourner::constructeurVirtuel() {
    return new CommandeTourner();
}