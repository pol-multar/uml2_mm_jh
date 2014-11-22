#ifndef DEF_IOBSERVER
#define DEF_IOBSERVER
#include <string>

class IObserver
{
public:
    virtual void update(std::string data)=0;
};

#endif