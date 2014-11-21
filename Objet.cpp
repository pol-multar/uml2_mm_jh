#include "Objet.h"

int Objet::getPoids(){
	return poids;
};

Objet Objet::operator=(Objet obj){
	poids = obj.getPoids();
	return *this;
};