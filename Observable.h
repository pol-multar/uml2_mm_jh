#include <set>
#include <string>

class Observable
{
private:
    std::set<IObserver*> _list_observers;

public:
    void notify(std::string data) const;

    void addObserver(IObserver* observer);

    void removeObserver(IObserver* observer);

};