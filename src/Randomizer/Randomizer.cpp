#include "Randomizer.h"
#include "RoomTable.h"
#include "EnemyTable.h"

vector<unsigned char> ROM;

auto changeAllowedEnemies(int roomHeader)
{
    map<int, array<int, 6>> outMap;
    for (int i = roomHeader; !(ROM[i] == 0xFF && ROM[i + 1] == 0xFF); i += 4)
    {
        int replaceID = (ROM[i] << 8) + ROM[i + 1];
        int r = getRand(sizeof(EnemyTable) / sizeof(EnemyTable[0]) - 1);

        outMap[replaceID] = {EnemyTable[r][0], EnemyTable[r][1]};
        ROM[i] = EnemyTable[r][0];
        ROM[i + 1] = EnemyTable[r][1];

        // Palette data
        ROM[i + 2] = (1 + i) - roomHeader;
        ROM[i + 3] = 0;
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
        int byteL = replaceMap[curID][0];
        int byteH = replaceMap[curID][1];

        // make sure valid ID
        // also check to not replace shutter sprites
        if (byteL && byteH && ROM[spriteData + 1] != 0xD5 && curID != 0xFFD4)
        {
            ROM[spriteData] = byteL;
            ROM[spriteData + 1] = byteH;

            // X and Y pos

            ROM[spriteData + 6] = 0; // oo oo - Oritentation
            ROM[spriteData + 7] = 0;

            ROM[spriteData + 8] = 0;    // TEMP - Special properties
            ROM[spriteData + 9] = 0x20; // TEMP

            if (byteH >= 0xF3)
            {
                ROM[spriteData + 10] = 0x04; // Special GFX
            }
            else
            {
                ROM[spriteData + 10] = 0;
            }
            ROM[spriteData + 11] = 0;

            ROM[spriteData + 12] = replaceMap[curID][2]; // Speed
            ROM[spriteData + 13] = replaceMap[curID][3];

            ROM[spriteData + 14] = replaceMap[curID][4]; // Speed 2
            ROM[spriteData + 15] = replaceMap[curID][5];
        }
    }
}

vector<unsigned char> randomizeROM()
{
    // something is not right with space pirate IDs
    // 79fba

    // logic?
    // too many of certain sprites. can we get rid of some?
    // stuck in walls
    // random speed? aka waver
    int testy[][4] = {{0x1A0067, 0x1A007C, 0x108261, 0x108363}};
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
