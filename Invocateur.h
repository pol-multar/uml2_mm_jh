#ifndef DEF_INV
#define DEF_INV
#include <string>
#include "Commande.h"
#include "Observable.h"
#include <iostream>

using namespace std;
class Robot;
class Invocateur : public Observable{
private:
	Commande* commande;
	Robot* robot;
	void executer();
public:
	Invocateur();
	void run(string c, Robot* r);
	string getCommande();
	int getInt();
	string getString();
	Robot* getRobot();
};


#endif