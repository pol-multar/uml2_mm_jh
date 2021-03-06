#ifndef DEF_POSER
#define DEF_POSER

#include "Commande.h"
#include <string>
#include "Invocateur.h"
#include "Robot.h"

class CommandePoser : public Commande{
protected:
	bool sauv = false;
	Robot* sauvRobot;
public:
     static CommandePoser monExemplaire;

    CommandePoser(std::string cp):Commande(cp){};
	CommandePoser(Invocateur* inv);
    CommandePoser():Commande("POSER"){};
	Commande* constructeurVirtuel(Invocateur* inv);
	virtual void execute(void);
	virtual void desexecute(void);
	virtual bool reversible(void);
};


#endif