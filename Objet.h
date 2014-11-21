#ifndef DEF_OBJ
#define DEF_OBJ

class Objet {

private:
    int poids;


public:
	Objet(int p=0);
    int getPoids();

    Objet operator=(Objet obj);

};

#endif