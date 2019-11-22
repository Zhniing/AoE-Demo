#include "Game.cpp"

using namespace std;

int main()
{
    Game g;

    // Generate the partys
    vector< vector< Unit* > > Partys;
    Partys.push_back(g.generateParty<Archer>(5));
    Partys.push_back(g.generateParty<Berserker>(5));

    // The 2 parties selected to combat
    vector<Unit *> &p_a = Partys[0];
    vector<Unit *> &p_b = Partys[1];
    int a_i = rand() % p_a.size();
    int b_i = rand() % p_b.size();
    a_i = b_i = 0;
    g.Combat(p_a, a_i, p_b, b_i);
    cout << p_a[0]->getHp() << " "
         << p_b[0]->getHp() << endl;

    // close the game
    //int partyNum = Partys.size();
    vector< vector< Unit* > >::iterator it;  
    for (it=Partys.begin(); it!=Partys.end(); it++)
    {
        g.PartyMemFree(*it);
    }
    return 0;
}
