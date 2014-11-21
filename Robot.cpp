#include <string>
#include "Position.h"
#include "Plot.h"
#include "Objet.h"
#include "EtatRobot.h"
#include "Robot.h"

Robot::Robot(EtatRobot *etat): _etat(etat) {};

void Robot::SetEtat(EtatRobot *etat) {
	this->_etat = etat;
}

void Robot::avancer(int x, int y){
	_etat =_etat->avancer();
	_position.setX(x);
	_position.setY(y);
};

void Robot::tourner(std::string direction){
	_etat=_etat->tourner();
	Plot p;
	_direction = direction;
	_plot = p;
};

void Robot::saisir(Objet obj){
	_etat=_etat->avancer();
	_obj = obj;
};

void Robot::poser(){
	Objet obj;
	_etat =_etat->poser();
	_obj = obj;
};

int Robot::peser(){
	_etat=_etat->peser();
	return _obj.getPoids();
};

void Robot::rencontrerPlot(Plot p){
	_etat =_etat->rencontrerPlot();
	_plot = p;
};

int Robot::evaluerPlot(){
	_etat=_etat->evaluerPlot();
	return _plot.getHauteur();
};

void Robot::figer(){
	_etat=_etat->figer();
};

void Robot::repartir(){
	_etat=_etat->repartir();
};

void Robot::afficher(){
};