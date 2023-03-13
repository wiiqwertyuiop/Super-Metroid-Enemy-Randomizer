#include "Randomizer.h"
#include "RoomTable.h"

#include <iostream>

vector<unsigned char> ROM;

int getNumbOfAllowedEnemies(int dataBeg, int dataEnd)
{
    int numbOfAllowedEnemies = 0;
    for (int i = dataBeg; i < dataEnd; i += 4)
    {
        if (ROM[i] == 0xFF && ROM[i + 1] == 0xFF)
        {
            return numbOfAllowedEnemies;
        }
        numbOfAllowedEnemies++;
    }
    return 0;
}

vector<unsigned char> randomizeROM()
{
    std::random_device rd;  // obtain a random number from hardware
    std::mt19937 gen(rd()); // seed the generator
    std::uniform_int_distribution<> distr(0, sizeof(RoomTable) / sizeof(RoomTable[0]) - 1);

    auto roomToChange = RoomTable[19];
    int orgHeaderData = roomToChange[0];
    // int enemiesWeCanChange = getNumbOfAllowedEnemies(roomToChange[0], roomToChange[1], ROM);

    int RAND_TEMP = 126; // distr(gen);
    auto roomToTakeFrom = RoomTable[RAND_TEMP];
    auto newHeaderData = roomToTakeFrom[0];

    ROM[orgHeaderData] = ROM[newHeaderData + 4];
    ROM[orgHeaderData + 1] = ROM[newHeaderData + 1 + 4];
    ROM[orgHeaderData + 2] = ROM[newHeaderData + 2 + 4];
    ROM[orgHeaderData + 3] = ROM[newHeaderData + 3 + 4];
    return ROM;
}

void readAsROM(vector<unsigned char> buffer)
{
    ROM = buffer;
}