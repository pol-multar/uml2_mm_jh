#include "Invocateur.h"
#include "Robot.h"
#include <algorithm>
void Invocateur::run(string c, Robot* r) {
	robot = r;
	try{
		commande = commande->nouvelleCommande(c, this);
		executer();
	} catch(exception& e) {
		cerr<<e.what()<<endl;
	}
};

void Invocateur::executer() {
	commande->execute();
};

int Invocateur::getInt() {
	int n;
	if (cin >> n)
		return n;
	return 0;
};

string Invocateur::getString() {
	string s;
	if (cin >> s)
		return s;
	return 0;
};

Robot* Invocateur::getRobot(){
	return robot;
};

string Invocateur::getCommande(){
	string commande;
	cin >> commande;
	std::transform(commande.begin(), commande.end(), commande.begin(), ::toupper);
	return commande;
}

string Invocateur::statut() {
	return robot->statut();
}