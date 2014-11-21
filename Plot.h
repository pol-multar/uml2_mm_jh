#ifndef DEF_PLOT
#define DEF_PLOT

class Plot {

private:
    int _hauteur;


public:

    int getHauteur(){
    	return _hauteur;
    };

    Plot operator=(Plot p){
    	_hauteur = p.getHauteur();
    	return *this;
    };
};

#endif