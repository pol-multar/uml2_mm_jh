#ifndef DEF_ETATEENCHARGEPLOT
#define DEF_ETATEENCHARGEPLOT

#include "EtatEnRoute.h"


class EtatEnChargeFacePlot: public EtatEnRoute
{
public:
	static EtatEnChargeFacePlot* Instance() {
		static EtatEnChargeFacePlot _instance; return &_instance;
	};

    virtual EtatRobot* tourner(std::string direction){
		return EtatEnCharge::Instance();
    };
	
	virtual EtatRobot* poser(){
		return EtatAVideFacePlot::Instance();
    };

    virtual EtatRobot* peser(){
		return EtatEnChargeFacePlot::Instance();
    };

protected:
	EtatEnChargeFacePlot() {};
private:
	EtatEnChargeFacePlot(const EtatEnChargeFacePlot&);
	EtatEnChargeFacePlot& operator=(const EtatEnChargeFacePlot&);
};


#endif