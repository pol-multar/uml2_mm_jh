#ifndef DEF_ETATFIGE
#define DEF_ETATFIGE

#include "EtatRobot.h"

class EtatFige:public EtatRobot
{
public:
	void setHistorique(EtatRobot* etat);

	static EtatFige* Instance();

	virtual EtatRobot* repartir();
protected:
	EtatFige() {};
private:
	EtatRobot* _etatDernier;
	EtatFige(const EtatFige&);
	EtatFige& operator=(const EtatFige&);
};


#endif