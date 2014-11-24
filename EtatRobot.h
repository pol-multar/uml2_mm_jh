#ifndef DEF_ETATROB
#define DEF_ETATROB

#include <string>


class EtatRobot{
public:
    class ETATROBOT_EXCEPTION: public std::exception{};

    static EtatRobot* getInit();

	virtual EtatRobot* avancer();

    virtual EtatRobot* tourner();

    virtual EtatRobot* saisir();

    virtual EtatRobot* poser();

    virtual EtatRobot* peser();

    virtual EtatRobot* rencontrerPlot();

    virtual EtatRobot* evaluerPlot();

    virtual EtatRobot* figer();

    virtual EtatRobot* repartir();


};

#endif