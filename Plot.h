#ifndef DEF_PLOT
#define DEF_PLOT

class Plot {

private:
    int _hauteur;


public:
	Plot(int h = 0);

	int getHauteur();

    Plot operator=(Plot p);
};

#endif