#include "EtatEnRoute.h"
#include "EtatFige.h"

EtatRobot* EtatEnRoute::figer(){
	EtatFige* etat;
	etat = EtatFige::Instance();
	etat->setHistorique(this);
	return etat;
};
