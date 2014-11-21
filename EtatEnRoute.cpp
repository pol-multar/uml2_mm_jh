#include "EtatEnRoute.h"
#include "EtatFige.h"

EtatRobot* EtatRobot::figer(){
	return EtatFige::Instance(this);
};