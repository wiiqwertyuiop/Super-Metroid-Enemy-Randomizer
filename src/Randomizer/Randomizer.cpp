#include "Randomizer.h"
#include "RoomTable.h"

#include <iostream>

void randomizeEnemies(vector<unsigned char> &ROM)
{
    std::random_device rd;  // obtain a random number from hardware
    std::mt19937 gen(rd()); // seed the generator
    std::uniform_int_distribution<> distr(0, sizeof(RoomTable) / sizeof(RoomTable[0]) - 1);

    return;
}