#ifndef DEF_ETATEENCHARGE
#define DEF_ETATEENCHARGE

#include "EtatEnRoute.h"

class EtatEnCharge: public EtatEnRoute
{
public:
	static EtatEnCharge* Instance() {
		static EtatEnCharge _instance; return &_instance;
	};

    virtual EtatRobot* avancer(int x, int y){
    	return EtatEnCharge::Instance();
    };

    virtual EtatRobot* tourner(std::string direction){
    	return EtatEnCharge::Instance();
    };

    virtual EtatRobot* peser(){
    	return EtatEnCharge::Instance();
    };

	virtual EtatRobot* rencontrerPlot(Plot p){
		return EtatEnChargeFacePlot::Instance();
	};

protected:
	EtatEnCharge() {};
private:
	EtatEnCharge(const EtatEnCharge&);
	EtatEnCharge& operator=(const EtatEnCharge&);
};


#endif