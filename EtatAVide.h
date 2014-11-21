#ifndef DEF_ETATEAVIDE
#define DEF_ETATEAVIDE

#include "EtatEnRoute.h"

class EtatAVide: public EtatEnRoute
{

public:
	static EtatAVide* Instance() { 
		static EtatAVide _instance; return &_instance; 
	};
    virtual EtatRobot* avancer(){
		return EtatAVide::Instance();
    };

    virtual EtatRobot* tourner(){
		return EtatAVide::Instance();
    };

    virtual EtatRobot* rencontrerPlot(){
		return EtatAVideFacePlot::Instance();
    };
protected:
	EtatAVide() {};
private:
	EtatAVide(const EtatAVide&);
	EtatAVide& operator=(const EtatAVide&);
};


#endif