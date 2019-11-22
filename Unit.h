#pragma once
#include <iostream>

class Unit
{
public:
    Unit(int, int);
    virtual ~Unit() {}
    bool alive();
    void setHp(int);
    void setAp(int);
    int getHp() const;
    int getAp() const;
    virtual void attack(Unit *);
    int hurt(Unit *);
    // virtual void counterAtt(Unit *);

private:
    int hp; // Health Point
    int ap; // Attack Power
};

