#ifndef DEF_EVALUEROBST
#define DEF_EVALUEROBST

#include "Commande.h"
#include <string>
#include "Invocateur.h"
#include "Robot.h"

class CommandeEvaluerObst : public Commande{
protected:
	bool sauv = false;
	Robot* sauvRobot;
public:
     static CommandeEvaluerObst monExemplaire;

    CommandeEvaluerObst(std::string ca):Commande(ca){};
	CommandeEvaluerObst(Invocateur* inv);
    CommandeEvaluerObst():Commande("EVALUEROBST"){};
	Commande* constructeurVirtuel(Invocateur* inv);
	virtual void execute(void);
	virtual void desexecute(void);
	virtual bool reversible(void);
};


#endif