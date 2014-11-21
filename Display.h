#include <string>
#include "IObserver.h"
#include "common_defs.h"

class Display : public IObserver
{
void update(std::string data){
    OUT("Evenement");
    OUT(data);
}
};