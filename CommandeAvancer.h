#ifndef DEF_AVANCER
#define DEF_AVANCER

#include "Commande.h"
#include <string>
#include "Position.h"
class CommandeAvancer : public Commande{
protected:
	Position* position;
	bool sauv = false;
	Robot* sauvRobot;
public:
     static CommandeAvancer monExemplaire;

    CommandeAvancer(std::string ca):Commande(ca){};
	CommandeAvancer(Invocateur* inv);
    CommandeAvancer():Commande("AVANCER"){};
    Commande* constructeurVirtuel(Invocateur* inv);
	virtual void execute(void);
	virtual void desexecute(void);
	virtual bool reversible(void);
};


#endif