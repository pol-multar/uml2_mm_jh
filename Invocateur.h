#ifndef DEF_INV
#define DEF_INV
#include <string>
#include "Commande.h"
#include "Observable.h"
#include <iostream>

class Robot;
class Invocateur : public Observable{
private:
	Commande* commande;
	Robot* robot;
	void executer();
public:
	Invocateur(){};
	void run(string c, Robot* r);
	std::string getCommande();
	int getInt();
	std::string getString();
	Robot* getRobot();
	std::string statut(void);
};


#endif