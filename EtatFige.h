#ifndef DEF_ETATFIGE
#define DEF_ETATFIGE

#include "EtatRobot.h"

class EtatFige: virtual public EtatRobot
{
public:
	static EtatFige* Instance(EtatRobot* etat) {
		_etatDernier = etat;
		static EtatFige _instance;
		return &_instance;
	};

	virtual EtatRobot* repartir(){
		return _etatDernier;
	};
protected:
	EtatFige() {};
private:
	EtatRobot* _etatDernier;
	EtatFige(const EtatFige&);
	EtatFige& operator=(const EtatFige&);
	};
};


#endif