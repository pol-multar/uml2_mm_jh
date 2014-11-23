#include "IObserver.h"
#include "Observable.h"
#include <string>
#include <set>
#include <iostream>

using namespace std;

void IObserver::update(Observable *obs) {
    cout << obs->statut() << endl;
}

IObserver::~IObserver() {
    for(std::set<Observable*>::const_iterator it = _list_observables.begin(); it != _list_observables.end(); ++it){
        (*it)->removeObserver(this);
    }
}

void IObserver::addObs(Observable *obs) {
    _list_observables.insert(obs);
}

void IObserver::delObs(Observable *obs) {
    _list_observables.erase(obs);
}