#include "Spanzuratoarea.h"

int main()
{
    Spanzuratoarea sp;

    do
    {
        sp.Intro();
        sp.getIncercare();
    }
    while(sp.Joc_nou());

    return 0;
}
