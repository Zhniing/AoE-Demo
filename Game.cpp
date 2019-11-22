#include "Game.h"

using namespace std;

combatRes Game::Combat(vector<Unit *> &p_a, int a_i, vector<Unit *> &p_b, int b_i)
{
    Unit* a = p_a[a_i];
    Unit* b = p_b[b_i];
    a->attack(b);
    if ( !a->alive() )
    {
        delete a;
        p_a.erase(p_a.begin() + a_i);
        return Adead;
    }
    if ( !b->alive() )
    {
        delete b;
        p_b.erase(p_b.begin() + b_i);
        return Bdead;
    }
    return Nodead;
}

template<typename T>
vector<Unit*> Game::generateParty(int num)
{
    vector<Unit*> party;
    for (int i=0; i<num; i++)
    {
        party.push_back(new T(10, 5));
    }
    return party;
}

void Game::PartyMemFree(vector<Unit*> p)
{
    vector<Unit*>::iterator it;
    for (it=p.begin(); it!=p.end(); it++)
    {
        delete *it;
        //p_a.erase(it);
    }
}
