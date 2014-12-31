#ifndef DEF_FIGER
#define DEF_FIGER

#include "Commande.h"
#include <string>
#include "Invocateur.h"
#include "Robot.h"

class CommandeFiger : public Commande{
protected:
	bool sauv = false;
	Robot* sauvRobot;
public:
     static CommandeFiger monExemplaire;

    CommandeFiger(std::string cf):Commande(cf){};
	CommandeFiger(Invocateur* inv);
	CommandeFiger() :Commande("FIGER"){};
	Commande* constructeurVirtuel(Invocateur* inv);
	virtual void execute(void);
	virtual void desexecute(void);
	virtual bool reversible(void);
};


#endif