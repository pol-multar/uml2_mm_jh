#ifndef DEF_EXAMPLE
#define DEF_EXAMPLE
#include "Observable.h"
#include <string>

class Exemple : public Observable
{
public:
    void message(std::string message){
        notify(message);
    }
};

#endif