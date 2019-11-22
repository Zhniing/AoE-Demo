#include "Archer.h"

Archer::Archer(int hp, int ap=0) : Unit(hp, ap)
{

}

void Archer::attack(Unit *e)
{
    int hp_e = e->hurt(this);
    printf("shoot\n");
    // shoot should be counter attack?
    if ( hp_e > 0 )
    {
        this->hurt(e);
    }
}
