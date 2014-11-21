#ifndef DEF_ETATEAVIDE
#define DEF_ETATEAVIDE

#include "EtatEnRoute.h"

class EtatAVide: public EtatEnRoute
{

public:
	static EtatAVide* Instance() { 
		static EtatAVide _instance; return &_instance; 
	};
    virtual void avancer(int x, int y);

    virtual void tourner(std::string direction);

    virtual void rencontrerPlot(Plot p){
		this = EtatAVideFacePlot::Instance();
    };
protected:
	EtatAVide() {};
private:
	EtatAVide(const EtatAVide&);
	EtatAVide& operator=(const EtatAVide&);
};


#endif