#ifndef DEF_POS
#define DEF_POS

class Position {

private:
    int x;
    int y;

public:

    void setX(int nX){
    	x = nX;
    };

    void setY(int nY){
    	y = nY;
    };

    int getX(){
    	return x;
    };
    int getY(){
    	return y;
    };

};

#endif