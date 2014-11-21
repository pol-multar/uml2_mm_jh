#ifndef DEF_OBJ
#define DEF_OBJ

class Objet {

private:
    int poids;


public:

    int getPoids(){
    	return poids;
    };

    Objet operator=(Objet obj){
    	poids = obj.getPoids();
    	return *this;
    };

};

#endif