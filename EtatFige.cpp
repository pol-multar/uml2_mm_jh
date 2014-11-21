#include "EtatFige.h"

EtatFige* EtatFige::Instance(EtatRobot* etat) {
	_etatDernier = etat;
	static EtatFige _instance;
	return &_instance;
};

EtatRobot* EtatFige::repartir(){
	return _etatDernier;
};