#pragma once
#include "Unit.h"

class Archer : public Unit
{
public:
    Archer(int, int);
    ~Archer() {}
    void attack(Unit *);

private:

};

