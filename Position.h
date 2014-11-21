#ifndef DEF_POS
#define DEF_POS

class Position {

private:
    int x;
    int y;

public:
	Position(int X=0, int Y=0);

    void setX(int nX);

    void setY(int nY);

    int getX();

    int getY();

};

#endif