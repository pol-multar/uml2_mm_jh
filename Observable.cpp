#include <string>
#include <set>
#include "IObserver.h"
#include "Observable.h"
using namespace std;



void Observable::notify(void)
{
    //Notifier tous les obsevers
    for(std::set<IObserver*>::const_iterator it = _list_observers.begin(); it != _list_observers.end(); ++it){
        (*it)->update(this);
    }
}

void Observable::addObserver(IObserver* observer)
{
    // Ajouter un observer a la liste
    _list_observers.insert(observer);
}

void Observable::removeObserver(IObserver* observer)
{
    // Enlever un observer a la liste
    _list_observers.erase(observer);
}

Observable::~Observable() {
    for(std::set<IObserver*>::const_iterator it = _list_observers.begin(); it != _list_observers.end(); ++it){
        (*it)->delObs(this);
    }
}