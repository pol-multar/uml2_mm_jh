#ifndef DEF_ETATROB
#define DEF_ETATROB

#include <string>
#include "Position.h"
#include "Plot.h"
#include "Objet.h"
#include "EtatRobot.h"

class EtatRobot{
public:
    class ETATROBOT_EXCEPTION: public std::exception{};

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
        throw ETATROBOT_EXCEPTION();
    };

    virtual EtatRobot* repartir(){
        throw ETATROBOT_EXCEPTION();
    }:

    
};

#endif