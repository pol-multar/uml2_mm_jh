#ifndef DEF_ETATEAVIDEFACEPLOT
#define DEF_ETATEAVIDEFACEPLOT

#include "EtatEnRoute.h"

class EtatAVideFacePlot: public EtatEnRoute
{
public:
	static EtatAVideFacePlot* Instance() {
		static EtatAVideFacePlot _instance; return &_instance;
	};

	virtual void tourner(std::string direction);

    virtual void saisir(Objet obj);

    virtual int evaluerPlot();

protected:
	EtatAVideFacePlot() {};
private:
	EtatAVideFacePlot(const EtatAVideFacePlot&);
	EtatAVideFacePlot& operator=(const EtatAVideFacePlot&);
};


#endif