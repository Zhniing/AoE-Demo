#pragma once
#include <vector>
#include "Unit.cpp"
#include "Archer.cpp"
#include "Berserker.cpp"
#include "CombatResult.h"

using namespace std;

// In charge of the memeory apply
class Game
{
public:
    Game() {}
    ~Game() {}
    combatRes Combat(vector<Unit *> &p_a,
                     int a_i,
                     vector<Unit *> &p_b,
                     int b_i);
    template<typename T>
    vector<Unit*> generateParty(int num);
    void PartyMemFree(vector<Unit*> p);

private:
    //vector< vector< Unit* > > Partys;

};

