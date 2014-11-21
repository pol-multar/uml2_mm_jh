#ifndef DEF_ETATEAVIDEFACEPLOT
#define DEF_ETATEAVIDEFACEPLOT

#include "EtatEnRoute.h"

class EtatAVideFacePlot: public EtatEnRoute
{
public:
	static EtatAVideFacePlot* Instance() {
		static EtatAVideFacePlot _instance; return &_instance;
	};

	virtual EtatRobot* tourner(){
		return EtatAVide::Instance();
    };

    virtual EtatRobot* saisir(){
		return EtatEnChargeFacePlot::Instance();
    };

    virtual EtatRobot* evaluerPlot(){
		return EtatAVideFacePlot::Instance();
    };

protected:
	EtatAVideFacePlot() {};
private:
	EtatAVideFacePlot(const EtatAVideFacePlot&);
	EtatAVideFacePlot& operator=(const EtatAVideFacePlot&);
};


#endif