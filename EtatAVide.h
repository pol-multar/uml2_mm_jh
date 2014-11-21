#ifndef DEF_ETATEAVIDE
#define DEF_ETATEAVIDE

#include "EtatEnRoute.h"

class EtatAVide: public EtatEnRoute
{

public:
	static EtatAVide* Instance();

    virtual EtatRobot* avancer();

    virtual EtatRobot* tourner();

    virtual EtatRobot* rencontrerPlot();
protected:
	EtatAVide() {};
private:
	EtatAVide(const EtatAVide&);
	EtatAVide& operator=(const EtatAVide&);
};


#endif