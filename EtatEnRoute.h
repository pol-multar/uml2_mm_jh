#ifndef DEF_ETATENROUTE
#define DEF_ETATENROUTE

#include "EtatRobot.h"
#include "EtatEnChargeFacePlot.h"
#include "EtatEnCharge.h"
#include "EtatAVide.h"
#include "EtatAVideFacePlot.h"


class EtatEnRoute: public EtatRobot
{
public:
	virtual EtatRobot* avancer(){
        throw ETATROBOT_EXCEPTION();
    }:

	virtual EtatRobot* tourner(){
        throw ETATROBOT_EXCEPTION();
    }:

	virtual EtatRobot* saisir(){
        throw ETATROBOT_EXCEPTION();
    }:

	virtual EtatRobot* poser(){
        throw ETATROBOT_EXCEPTION();
    }:

	virtual EtatRobot* peser(){
        throw ETATROBOT_EXCEPTION();
    }:

	virtual EtatRobot* rencontrerPlot(){
        throw ETATROBOT_EXCEPTION();
    }:

	virtual EtatRobot* evaluerPlot(){
        throw ETATROBOT_EXCEPTION();
    }:

    virtual EtatRobot* figer(){
    	return EtatFige::Instance(this);
    };
};


#endif