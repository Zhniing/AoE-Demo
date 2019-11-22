#include <vector>
#include "Unit.cpp"
#include "Archer.cpp"
#include "Berserker.cpp"

int main()
{
    Unit * Gilgamesh = new Archer(10,7);
    Unit * Lancelot = new Berserker(10, 5);
    std::vector<Unit*> Party1;
    Party1.push_back(Gilgamesh);
    Party1.push_back(Lancelot);
    
    Gilgamesh->attack(Lancelot);
    printf("G hp: %d, L hp: %d\n", Gilgamesh->getHp(), Lancelot->getHp());
    Gilgamesh->attack(Lancelot);
    //printf("G hp: %d, L hp: %d\n", Gilgamesh->getHp(), Lancelot->getHp());
    delete Gilgamesh;
    //delete Lancelot;
    return 0;
}

