#ifndef DEF_ETATEENCHARGEPLOT
#define DEF_ETATEENCHARGEPLOT

#include "EtatEnRoute.h"


class EtatEnChargeFacePlot: public EtatEnRoute
{
public:
	static EtatEnChargeFacePlot* Instance();

    virtual EtatRobot* tourner(std::string direction);
	
	virtual EtatRobot* poser();

    virtual EtatRobot* peser();

protected:
	EtatEnChargeFacePlot() {};
private:
	EtatEnChargeFacePlot(const EtatEnChargeFacePlot&);
	EtatEnChargeFacePlot& operator=(const EtatEnChargeFacePlot&);
};


#endif