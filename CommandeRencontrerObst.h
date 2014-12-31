#ifndef DEF_RENCONTREROBST
#define DEF_RENCONTREROBST

#include "Commande.h"
#include <string>
#include "Invocateur.h"
#include "Robot.h"

class CommandeRencontrerObst : public Commande{
protected:
	Plot* plot;
	bool sauv = false;
	Robot* sauvRobot;
public:
     static CommandeRencontrerObst monExemplaire;

    CommandeRencontrerObst(std::string cro):Commande(cro){};
	CommandeRencontrerObst(Invocateur* inv);
    CommandeRencontrerObst():Commande("RENCONTREROBST"){};
	Commande* constructeurVirtuel(Invocateur* inv);
	virtual void execute(void);
	virtual void desexecute(void);
	virtual bool reversible(void);
};


#endif