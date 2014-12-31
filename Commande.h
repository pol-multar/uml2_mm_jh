#ifndef DEF_COMMANDE
#define DEF_COMMANDE

#include <string>
#include <map>
#include <list>
using namespace std;
class Invocateur;
class Robot;
class Commande{

public:
	Commande(Robot* r = 0);
    static map<string,Commande*>& commandesInscrites();
    static Commande* nouvelleCommande(string c,Invocateur* inv);
	class Commande_Exception : public exception {
	public:
		virtual const char* exception() const throw() {
			return "Exception!\n";
		}
	};
	class Unknown_Commande_Exception : public Commande_Exception {
	public:
		virtual const char* exception() const throw() {
			return "Unknown commande!\n";
		}
	};
	class Unvalid_Commande_Exception : public Commande_Exception {
	public:
		virtual const char* exception() const throw() {
			return "Unvalid commande!\n";
		}
	};
	virtual void execute(void) = 0;
	virtual void desexecute(void) = 0;
	virtual bool reversible(void) = 0;

protected:
	Robot* robot;
    Commande(string c);
    virtual Commande* constructeurVirtuel(Invocateur* inv)=0;

};


#endif