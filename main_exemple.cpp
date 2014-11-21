#include "Display.h"
#include "Exemple.h"

int main()
{
    Display display;
    Exemple exemple;

    exemple.addObserver(&display);

    exemple.message("Reception d'un message");

    return 0;
}
