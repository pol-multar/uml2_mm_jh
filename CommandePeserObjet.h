#ifndef DEF_PESEROBJET
#define DEF_PESEROBJET

#include "Commande.h"
#include <string>
#include "Invocateur.h"
#include "Robot.h"

class CommandePeserObjet : public Commande{
protected:
	bool sauv = false;
	Robot* sauvRobot;
public:
     static CommandePeserObjet monExemplaire;

    CommandePeserObjet(std::string cpo):Commande(cpo){};
	CommandePeserObjet(Invocateur* inv);
    CommandePeserObjet():Commande("PESEROBJET"){};
	Commande* constructeurVirtuel(Invocateur* inv);
	virtual void execute(void);
	virtual void desexecute(void);
	virtual bool reversible(void);
};


#endif