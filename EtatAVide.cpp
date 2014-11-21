#include "EtatAVide.h"
#include "EtatAVideFacePlot.h"

EtatAVide* EtatAVide::Instance() {
	static EtatAVide _instance; return &_instance;
};
EtatRobot* EtatAVide::avancer(){
	return EtatAVide::Instance();
};

EtatRobot* EtatAVide::tourner(){
	return EtatAVide::Instance();
};

EtatRobot* EtatAVide::rencontrerPlot(){
	return EtatAVideFacePlot::Instance();
};