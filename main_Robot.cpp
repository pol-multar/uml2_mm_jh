#include "Robot.h"
#include "EtatAVide.h"
#include "EtatAVideFacePlot.h"
#include "EtatEnCharge.h"
#include "EtatEnChargeFacePlot.h"
#include <iostream>
#include "Display.h"
#include "Invocateur.h"
using namespace std;


int main(){

	Plot p1(10);
	Plot p2(15);
	Plot p3(20);
	Objet obj1(10);
	Objet obj2(20);
	Objet obj3(30);

	Display display;

	EtatRobot* etatcommencer = EtatRobot::getInit();
	Robot robot(etatcommencer);

	robot.addObserver(&display);

	Invocateur inv;

	inv.addObserver(&display);

	while (true)
	{
		MSG("Tapez une commande");

		string commande = inv.getCommande();
		inv.run(commande, &robot);
	}

	/*Plot p1(10);
	Plot p2(15);
	Plot p3(20);
	Objet obj1(10);
	Objet obj2(20);
	Objet obj3(30);

    Display display;

	EtatRobot* etatcommencer = EtatRobot::getInit();
	Robot robot(etatcommencer);
    robot.addObserver(&display);
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
	cout<<"maintenant je suis dans l'EtatAVideFacePlot."<<endl;
	robot.evaluerPlot();
	robot.saisir(obj1);
	cout<<"maintenant je suis dans l'EtatEnChargeFacePlot."<<endl;
	robot.peser();
	robot.tourner("WEST");
	cout<<"maintenant je suis dans l'EtatEnCharge."<<endl;
	robot.avancer(2, 4);
	robot.rencontrerPlot(p2);
	cout<<"maintenant je suis dans l'EtatEnChargeFacePlot."<<endl;
	robot.poser();
	cout<<"maintenant je suis dans l'EtatAVideFacePlot."<<endl;
	robot.figer();
	cout<<"maintenant je suis dans l'EtatFige."<<endl;
	robot.repartir();
	cout<<"maintenant je suis dans l'EtatAVideFacePlot."<<endl;
	robot.tourner("SOUTH");
	*/

	return 0;
}
