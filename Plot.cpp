#include "Plot.h"

Plot::Plot(int h) :_hauteur(h) {};

int Plot::getHauteur(){
	return _hauteur;
};

Plot Plot::operator=(Plot p){
	_hauteur = p.getHauteur();
	return *this;
};