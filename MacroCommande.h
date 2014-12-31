#ifndef DEF_MACROCOMMANDE
#define DEF_MACROCOMMANDE

#include "Commande.h"
#include <string>
#include "Invocateur.h"
#include "Robot.h"

class MacroCommande : public Commande{
protected:
	bool sauv = false;
	Robot* sauvRobot;
	Invocateur* invocateur;
	static list<string> commands;
	static string FIN_MARCO;
public:
	static MacroCommande monExemplaire;

	MacroCommande(std::string cp) :Commande(cp){};
	MacroCommande(Invocateur* inv);
	Commande* constructeurVirtuel(Invocateur* inv);
	virtual void execute(void);
	virtual void desexecute(void);
	virtual bool reversible(void);
};


#endif