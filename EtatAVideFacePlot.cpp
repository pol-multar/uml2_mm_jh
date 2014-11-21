#include "EtatAVideFacePlot.h"
#include "EtatAVide.h"
#include "EtatEnChargeFacePlot.h"

EtatAVideFacePlot* EtatAVideFacePlot::Instance() {
	static EtatAVideFacePlot _instance; return &_instance;
};

EtatRobot* EtatAVideFacePlot::tourner(){
	return EtatAVide::Instance();
};

EtatRobot* EtatAVideFacePlot::saisir(){
	return EtatEnChargeFacePlot::Instance();
};

EtatRobot* EtatAVideFacePlot::evaluerPlot(){
	return EtatAVideFacePlot::Instance();
};