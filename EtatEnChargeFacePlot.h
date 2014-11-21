#ifndef DEF_ETATEENCHARGEPLOT
#define DEF_ETATEENCHARGEPLOT

#include "EtatEnRoute.h"


class EtatEnChargeFacePlot: public EtatEnRoute
{
public:
	static EtatEnChargeFacePlot* Instance() {
		static EtatEnChargeFacePlot _instance; return &_instance;
	};

    virtual void tourner(std::string direction);
	
	virtual void poser();

    virtual int peser();

protected:
	EtatEnChargeFacePlot() {};
private:
	EtatEnChargeFacePlot(const EtatEnChargeFacePlot&);
	EtatEnChargeFacePlot& operator=(const EtatEnChargeFacePlot&);
};


#endif