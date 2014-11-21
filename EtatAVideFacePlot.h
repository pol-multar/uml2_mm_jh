#ifndef DEF_ETATEAVIDEFACEPLOT
#define DEF_ETATEAVIDEFACEPLOT

#include "EtatEnRoute.h"

class EtatAVideFacePlot: public EtatEnRoute
{
public:
	static EtatAVideFacePlot* Instance();

	virtual EtatRobot* tourner();

    virtual EtatRobot* saisir();

    virtual EtatRobot* evaluerPlot();

protected:
	EtatAVideFacePlot() {};
private:
	EtatAVideFacePlot(const EtatAVideFacePlot&);
	EtatAVideFacePlot& operator=(const EtatAVideFacePlot&);
};


#endif