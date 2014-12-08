#include "CommandeSaisir.h"
#include "Commande.h"

using namespace std;

CommandeSaisir CommandeSaisir::monExemplaire("SAISIR");


Commande* CommandeSaisir::constructeurVirtuel() {
    return new CommandeSaisir();
}