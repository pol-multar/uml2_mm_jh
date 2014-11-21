#include "Robot.h"
#include "EtatRobot.h"
#include "EtatAVide.h"
#include "EtatAVideFacePlot.h"
#include "EtatEnCharge.h"
#include "EtatEnChargeFacePlot.h"
#include <iostream>

int main(){
	EtatRobot* etatcommencer = EtatAVide::Instance();
	Robot robot(etatcommencer);
    return 0;
}
