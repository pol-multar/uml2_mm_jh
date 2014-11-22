#include "Robot.h"
#include "EtatAVide.h"
#include "EtatAVideFacePlot.h"
#include "EtatEnCharge.h"
#include "EtatEnChargeFacePlot.h"
#include <iostream>
using namespace std;


int main(){
	Plot p1(10);
	Plot p2(15);
	Plot p3(20);
	Objet obj1(10);
	Objet obj2(20);
	Objet obj3(30);
	EtatRobot* etatcommencer = EtatAVide::Instance();
	Robot robot(etatcommencer);
	robot.avancer(5, 5);
	robot.tourner("EAST");
	try{
		robot.tourner("EST");
	}
	catch(EtatRobot::ETATROBOT_EXCEPTION){
		cerr<<"Je ne peux pas tourner à EST."<<endl;
	}
	try{
		robot.evaluerPlot();
	}
	catch(EtatRobot::ETATROBOT_EXCEPTION){
		cerr<<"Il n'a pas de plot."<<endl;
	}
	try{
		robot.poser();
	}
	catch(EtatRobot::ETATROBOT_EXCEPTION){
		cerr<<"Rien à poser."<<endl;
	}
	try{
		robot.peser();
	}
	catch(EtatRobot::ETATROBOT_EXCEPTION){
		cerr<<"Rien à peser."<<endl;
	}
	try{
		robot.saisir(obj1);
	}
	catch(EtatRobot::ETATROBOT_EXCEPTION){
		cerr<<"Rien à saisir."<<endl;
	}
	robot.rencontrerPlot(p1);
	robot.evaluerPlot();
	robot.saisir(obj1);
	robot.peser();
	robot.tourner("WEST");
	robot.avancer(2, 4);
	robot.rencontrerPlot(p2);
	robot.poser();
	robot.figer();
	robot.repartir();
	robot.tourner("SOUTH");
	
	return 0;
}
