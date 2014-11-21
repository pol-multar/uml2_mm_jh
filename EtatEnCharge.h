#ifndef DEF_ETATEENCHARGE
#define DEF_ETATEENCHARGE

#include "EtatEnRoute.h"

class EtatEnCharge: public EtatEnRoute
{
public:
	static EtatEnCharge* Instance() {
		static EtatEnCharge _instance; return &_instance;
	};

    virtual void avancer(int x, int y);

    virtual void tourner(std::string direction);

    virtual int peser();

	virtual void rencontrerPlot(Plot p){
		this = EtatEnChargeFacePlot::Instance();
	};

protected:
	EtatEnCharge() {};
private:
	EtatEnCharge(const EtatEnCharge&);
	EtatEnCharge& operator=(const EtatEnCharge&);
};


#endif