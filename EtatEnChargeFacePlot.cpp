#include "EtatEnChargeFacePlot.h"
#include "EtatAVideFacePlot.h"
#include "EtatEnCharge.h"

EtatEnChargeFacePlot* EtatEnChargeFacePlot::Instance() {
	static EtatEnChargeFacePlot _instance; return &_instance;
};

EtatRobot* EtatEnChargeFacePlot::tourner(){
	return EtatEnCharge::Instance();
};

EtatRobot* EtatEnChargeFacePlot::poser(){
	return EtatAVideFacePlot::Instance();
};

EtatRobot* EtatEnChargeFacePlot::peser(){
	return EtatEnChargeFacePlot::Instance();
};
