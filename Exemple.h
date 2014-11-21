#include "Observable.h"
#include <string>

class Exemple : public Observable
{
public:
    void message(std::string message){
        notify(message);
    }
};