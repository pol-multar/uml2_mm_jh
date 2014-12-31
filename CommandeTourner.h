#ifndef DEF_TOURNER
#define DEF_TOURNER

#include "Commande.h"
#include <string>
#include "Robot.h"

class CommandeTourner : public Commande{
protected:
	string direction;
	bool sauv = false;
	Robot* sauvRobot;
public:
     static CommandeTourner monExemplaire;

    CommandeTourner(std::string ct):Commande(ct){};
	CommandeTourner(Invocateur* inv);
    CommandeTourner():Commande("TOURNER"){};
	Commande* constructeurVirtuel(Invocateur* inv);
	virtual void execute(void);
	virtual void desexecute(void);
	virtual bool reversible(void);
};


#endif