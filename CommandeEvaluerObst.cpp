#include "CommandeEvaluerObst.h"
#include "Commande.h"

using namespace std;

CommandeEvaluerObst CommandeEvaluerObst::monExemplaire("EVALUEROBST");


Commande* CommandeEvaluerObst::constructeurVirtuel() {
    return new CommandeEvaluerObst();
}