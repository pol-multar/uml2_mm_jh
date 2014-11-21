#ifndef DEF_ETATROB
#define DEF_ETATROB

#include <string>
#include "Position.h"
#include "Plot.h"
#include "Objet.h"

class EtatRobot{
public:
	virtual void avancer(int x, int y)=0;

    virtual void tourner(std::string direction)=0;

    virtual void saisir(Objet obj)=0;

    virtual void poser()=0;

    virtual int peser()=0;

    virtual void rencontrerPlot(Plot p)=0;

    virtual int evaluerPlot()=0;

    virtual void figer()=0;

    virtual void repartir();
};

#endif