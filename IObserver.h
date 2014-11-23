#ifndef DEF_IOBSERVER
#define DEF_IOBSERVER
#include <string>
#include <set>

class Observable;

class IObserver
{
private:
    std::set<Observable*> _list_observables;

public:
    virtual ~IObserver()=0;

    void addObs(Observable* obs);

    void delObs(Observable* obs);

    virtual void update(Observable* obs);
};

#endif