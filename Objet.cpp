#include "Objet.h"

Objet::Objet(int p) :poids(p){};

int Objet::getPoids(){
	return poids;
};

Objet Objet::operator=(Objet obj){
	poids = obj.getPoids();
	return *this;
};