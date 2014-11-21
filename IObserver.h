#include <string>

class IObserver
{
public:
    virtual void update(std::string data) = 0;
};
