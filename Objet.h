#ifndef DEF_OBJ
#define DEF_OBJ

class Objet {

private:
    int poids;


public:

    int getPoids();

    Objet operator=(Objet obj);

};

#endif