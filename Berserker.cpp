#include "Berserker.h"

Berserker::Berserker(int hp, int ap=0) : Unit(hp, ap)
{

}

void Berserker::attack(Unit *e)
{
    int hp_e = e->hurt(this);
    printf("slash\n");
    if ( hp_e > 0  )
    {
        this->hurt(e);
    }
}
