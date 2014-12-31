#ifndef DEF_REPARTIR
#define DEF_REPARTIR

#include "Commande.h"
#include <string>
#include "Invocateur.h"
#include "Robot.h"

class CommandeRepartir : public Commande{
protected:
	bool sauv = false;
	Robot* sauvRobot;
public:
     static CommandeRepartir monExemplaire;

    CommandeRepartir(std::string cr):Commande(cr){};
	CommandeRepartir(Invocateur* inv);
    CommandeRepartir():Commande("REPARTIR"){};
	Commande* constructeurVirtuel(Invocateur* inv);
	virtual void execute(void);
	virtual void desexecute(void);
	virtual bool reversible(void);
};


#endif