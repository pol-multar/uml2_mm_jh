#ifndef DEF_SAISIR
#define DEF_SAISIR

#include "Commande.h"
#include <string>
#include "Robot.h"
#include "Invocateur.h"

class CommandeSaisir : public Commande{
protected:
	Objet* objet;
	bool sauv = false;
	Robot* sauvRobot;
public:
     static CommandeSaisir monExemplaire;

    CommandeSaisir(std::string cs):Commande(cs){};
	CommandeSaisir(Invocateur* inv);
    CommandeSaisir():Commande("SAISIR"){};
	Commande* constructeurVirtuel(Invocateur* inv);
	virtual void execute(void);
	virtual void desexecute(void);
	virtual bool reversible(void);
};


#endif