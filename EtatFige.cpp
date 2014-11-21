#include "EtatFige.h"

void EtatFige::setHistorique(EtatRobot* etat){
	_etatDernier = etat;
};

EtatFige* EtatFige::Instance() {
	static EtatFige _instance;
	return &_instance;
};

EtatRobot* EtatFige::repartir(){
	return _etatDernier;
};