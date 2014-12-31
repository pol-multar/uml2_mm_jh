#ifndef DEF_APPELER
#define DEF_APPELER

#include "MacroCommande.h"
#include <string>
#include "Invocateur.h"
#include "Robot.h"

class CommandeAppeler : public MacroCommande{
protected:
	bool sauv = false;
	Robot* sauvRobot;
public:
	static CommandeAppeler monExemplaire;

	CommandeAppeler(std::string ca) :MacroCommande(ca){};
	CommandeAppeler(Invocateur* inv);
	CommandeAppeler() :MacroCommande("APPELER"){};
	Commande* constructeurVirtuel(Invocateur* inv);
	virtual void execute(void);
	virtual void desexecute(void);
	virtual bool reversible(void);
};


#endif