#include "Randomizer.h"
#include "RoomTable.h"
#include "EnemyTable.h"

vector<unsigned char> ROM;

auto changeAllowedEnemies(int roomHeader)
{
    map<int, array<int, 2>> outMap;
    for (int i = roomHeader; ROM[i] != 0xFF && ROM[i + 1] != 0xFF; i += 4)
    {
        int replaceID = (ROM[i] << 8) + ROM[i + 1];
        int r = getRand(sizeof(EnemyTable) / sizeof(EnemyTable[0]) - 1);

        outMap[replaceID] = {EnemyTable[r][0], EnemyTable[r][1]};
        ROM[i] = EnemyTable[r][0];
        ROM[i + 1] = EnemyTable[r][1];
    }
    return outMap;
}

void randomizeEnemies(int *curRoom)
{
    auto replaceMap = changeAllowedEnemies(curRoom[0]);

    int endOfData = curRoom[3];
    for (int spriteData = curRoom[2]; spriteData < endOfData - 3; spriteData += 16)
    {
        int curID = (ROM[spriteData] << 8) + ROM[spriteData + 1];
        ROM[spriteData] = replaceMap[curID][0];
        ROM[spriteData + 1] = replaceMap[curID][1];

        ROM[spriteData + 9] = 0x20; // TEMP
    }
}

vector<unsigned char> randomizeROM()
{
    // space pirates need special gfx
    // dont do elevator rooms

    // logic?
    // too many of certain sprites. can we get rid of some?
    // ignore certain sprites
    // fix crashes
    // stuck in walls
    for (auto room : RoomTable)
    {
        randomizeEnemies(room);
    }
    return ROM;
}

void readAsROM(vector<unsigned char> buffer)
{
    ROM = buffer;
}

int getRand(int max)
{
    std::random_device rd;  // obtain a random number from hardware
    std::mt19937 gen(rd()); // seed the generator
    std::uniform_int_distribution<> distr(0, max);
    return distr(gen);
}
