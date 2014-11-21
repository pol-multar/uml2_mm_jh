#ifndef DEF_ROBOT
#define DEF_ROBOT

#include <string>

class Robot {
private:
    std::string _direction;
    Position _position;
    Plot _plot;
    Objet _obj;
    EtatRobot *_etat;

public:
    Robot(EtatRobot *etat);

    void SetEtat(EtatRobot *etat);

    void avancer(int x, int y);

    void tourner(std::string direction);

    void saisir(Objet obj);

    void poser();

    int peser();

    void rencontrerPlot(Plot p);

    int evaluerPlot();

    void figer();

    void repartir();

    void afficher();

};

#endif