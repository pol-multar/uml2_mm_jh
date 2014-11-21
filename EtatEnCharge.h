#ifndef DEF_ETATEENCHARGE
#define DEF_ETATEENCHARGE

#include "EtatEnRoute.h"

class EtatEnCharge: public EtatEnRoute
{
public:
	static EtatEnCharge* Instance() ;

    virtual EtatRobot* avancer();

    virtual EtatRobot* tourner();

    virtual EtatRobot* peser();

	virtual EtatRobot* rencontrerPlot();

protected:
	EtatEnCharge() {};
private:
	EtatEnCharge(const EtatEnCharge&);
	EtatEnCharge& operator=(const EtatEnCharge&);
};


#endif