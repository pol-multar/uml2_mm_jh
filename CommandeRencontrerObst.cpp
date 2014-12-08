#include "CommandeRencontrerObst.h"
#include "Commande.h"

using namespace std;

CommandeRencontrerObst CommandeRencontrerObst::monExemplaire("RENCONTREROBST");


Commande* CommandeRencontrerObst::constructeurVirtuel() {
    return new CommandeRencontrerObst();
}