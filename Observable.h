#ifndef DEF_OBSERVABLE
#define DEF_OBSERVABLE
#include <set>
#include <string>

class IObserver;

class Observable
{
private:
    std::set<IObserver*> _list_observers;

public:
    virtual ~Observable();

    void addObserver(IObserver* observer);

    void removeObserver(IObserver* observer);

    virtual std::string statut(void) =0;

    void notify(void);

};

#endif