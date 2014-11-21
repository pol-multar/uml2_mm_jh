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
	virtual void avancer(int x, int y);

	virtual void tourner(std::string direction);

	virtual void saisir(Objet obj);

	virtual void poser();

	virtual int peser();

	virtual void rencontrerPlot(Plot p);

	virtual int evaluerPlot();

    virtual void figer(){
    	//TODO
    };
};


#endif