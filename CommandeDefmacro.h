#ifndef DEF_DEFMACRO
#define DEF_DEFMACRO

#include "MacroCommande.h"
#include <string>
#include "Invocateur.h"
#include "Robot.h"

class CommandeDefmacro : public MacroCommande{
protected:
	bool sauv = false;
	Robot* sauvRobot;
public:
	static CommandeDefmacro monExemplaire;

	CommandeDefmacro(std::string cd) :MacroCommande(cd){};
	CommandeDefmacro(Invocateur* inv);
	CommandeDefmacro() :MacroCommande("DEFMACRO"){};
	Commande* constructeurVirtuel(Invocateur* inv);
	virtual void execute(void);
	virtual void desexecute(void);
	virtual bool reversible(void);
};


#endif