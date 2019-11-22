#include "Unit.h"

Unit::Unit(int hp, int ap=0)
{
    this->hp = hp;
    this->ap = ap;
}

bool Unit::alive()
{
    return hp > 0;
}

void Unit::setHp(int hp)
{
    this->hp = hp;
}

void Unit::setAp(int ap)
{
    this->ap = ap;
}

int Unit::getHp() const
{
    return hp;
}

int Unit::getAp() const
{
    return ap;
}

void Unit::attack(Unit *)
{
    printf("unit attack\n");
}

int Unit::hurt(Unit *e)
{
    this->hp -= e->getAp(); // if dead
    //if (this->hp <= 0)
    //{
    //    delete this;
    //    return 0;
    //}
    return this->hp;
}
