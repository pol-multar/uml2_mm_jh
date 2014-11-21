#ifndef DEF_ETATENROUTE
#define DEF_ETATENROUTE

#include "EtatRobot.h"
#include "EtatFige.h"


class EtatEnRoute: public EtatRobot
{
public:
    virtual EtatRobot* figer(){
    	return EtatFige::Instance(this);
    };
};


#endif