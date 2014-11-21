#include <string>
#include "IObserver.h"
#include "Observable.h"
using namespace std;



void Observable::notify(std::string data) const
{
    //Notifier tous les obsevers
    for(std::set<IObserver*>::const_iterator it = _list_observers.begin(); it != _list_observers.end(); ++it){
        (*it)->update(data);
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