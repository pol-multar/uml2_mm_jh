#include "EtatEnCharge.h"
#include "EtatEnChargeFacePlot.h"

EtatEnCharge* EtatEnCharge::Instance() {
	static EtatEnCharge _instance; return &_instance;
};

EtatRobot* EtatEnCharge::avancer(){
	return EtatEnCharge::Instance();
};

EtatRobot* EtatEnCharge::tourner(){
	return EtatEnCharge::Instance();
};

EtatRobot* EtatEnCharge::peser(){
	return EtatEnCharge::Instance();
};

EtatRobot* EtatEnCharge::rencontrerPlot(){
	return EtatEnChargeFacePlot::Instance();
};
