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
	_etat->avancer(x,y);
};

void Robot::tourner(std::string direction){
	_etat->tourner(direction);
};

void Robot::saisir(Objet obj){
	_etat->avancer(x,y);
};

void Robot::poser(){
	_etat->poser();
};

int Robot::peser(){
	_etat->peser();
};

void Robot::rencontrerPlot(Plot p){
	_etat->rencontrerPlot(p);
};

int Robot::evaluerPlot(){
	_etat->evaluerPlot();
};

void Robot::figer(){
	_etat->figer();
};

void Robot::repartir(){
	_etat->repartir();
};

void Robot::afficher(){
};