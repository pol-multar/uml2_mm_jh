#include "CommandePeserObjer.h"
#include "Commande.h"

using namespace std;

CommandePeserObjer CommandePeserObjer::monExemplaire("PESEROBJET");

CommandePeserObjer
Commande* CommandePeserObjer::constructeurVirtuel() {
    return new CommandePeserObjer();
}