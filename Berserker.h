#pragma once
#include "Unit.h"

class Berserker : public Unit
{
public:
    Berserker(int, int);
    ~Berserker() {}
    void attack(Unit *);

private:

};

