#ifndef DEF_ETATFIGE
#define DEF_ETATFIGE

#include "EtatRobot.h"

class EtatFige:public EtatRobot
{
public:
	static EtatFige* Instance(EtatRobot* etat);

	virtual EtatRobot* repartir();
protected:
	EtatFige() {};
private:
	static EtatRobot* _etatDernier;
	EtatFige(const EtatFige&);
	EtatFige& operator=(const EtatFige&);
	};
};


#endif