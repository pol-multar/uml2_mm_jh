#include <string>
#include "Robot.h"
#include "Observable.h"

using namespace std;

Robot::Robot(EtatRobot *etat) : _etat(etat) {
};

void Robot::SetEtat(EtatRobot *etat) {
    this->_etat = etat;
}

void Robot::avancer(int x, int y) {
    _etat = _etat->avancer();
    _position.setX(x);
    _position.setY(y);
    _ordre = "avancer";
    notify();
};

void Robot::tourner(std::string direction) {
    if (direction == "EAST" || direction == "WEST" || direction == "SOUTH" || direction == "NORTH") {
        _etat = _etat->tourner();
        Plot p;
        _direction = direction;
        _plot = p;
        _ordre = "tourner";
        notify();
    }
    else {
        throw EtatRobot::ETATROBOT_EXCEPTION();
    }
};

void Robot::saisir(Objet obj) {
    _etat = _etat->saisir();
    _obj = obj;
    _ordre = "saisir";
    notify();
};

void Robot::poser() {
    Objet obj;
    _etat = _etat->poser();
    _obj = obj;
    _ordre = "poser";
    notify();
};

int Robot::peser() {
    _etat = _etat->peser();
    _ordre = "peser";
    notify();
    return _obj.getPoids();
};

void Robot::rencontrerPlot(Plot p) {
    _etat = _etat->rencontrerPlot();
    _plot = p;
    _ordre = "rencontrerPlot";
    notify();
};

int Robot::evaluerPlot() {
    _etat = _etat->evaluerPlot();
    _ordre = "evaluerPlot";
    notify();
    return _plot.getHauteur();
};

void Robot::figer() {
    _etat = _etat->figer();
    _ordre = "figer";
    _estFig = true;
    notify();
};

void Robot::repartir() {
    _etat = _etat->repartir();
    _ordre = "repartir";
    _estFig = false;
    notify();
};

/**
* La méthode afficher trace le robot dans ses différents états,
* afin de visualiser son comportement. Cette trace comporte, pour chaque ordre donné au robot :
* - L'ordre donné
* - L' état du robot après exécution de cette ordre :
*   ¤Position, direction, le fait qu'il tient ou non un objet avec l'identification de l'objet par son poids,
*    le fait qu'il soit ou non face à un plot avec identification du plot par sa hauteur
*   ¤Le fait qu'il soit figé ou en attente d'ordre
*
*/
void Robot::afficher() {

};

string Robot::statut() {
    string infos = "";
    infos += "Ordre donné : " + _ordre + "\n";
    infos += "Position : X: " + to_string(_position.getX()) + " Y : " + to_string(_position.getX()) + "\n";
    infos += "Direction : " + _direction + "\n";
    if (_obj.getPoids() != 0) {
        infos += "Tiens un objet de poids : " + to_string(_obj.getPoids()) + "\n";
    }
    if (_plot.getHauteur() != 0) {
        infos += "En face d'un plot de hauteur" + to_string(_plot.getHauteur()) + "\n";
    }
    if (_estFig) {
        infos += "Est figé \n";
    } else {
        infos += "Est en attente d'ordre \n";
    }
    return infos;
}


