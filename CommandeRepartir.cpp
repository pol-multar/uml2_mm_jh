#include "CommandeRepartir.h"
#include "Commande.h"

using namespace std;

CommandeRepartir CommandeRepartir::monExemplaire("REPARTIR");


Commande* CommandeRepartir::constructeurVirtuel() {
    return new CommandeRepartir();
}