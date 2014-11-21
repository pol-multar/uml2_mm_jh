#include "Position.h"

Position::Position(int X, int Y) : x(X), y(Y) {};

void Position::setX(int nX){
	x = nX;
};

void Position::setY(int nY){
	y = nY;
};

int Position::getX(){
	return x;
};
int Position::getY(){
	return y;
};