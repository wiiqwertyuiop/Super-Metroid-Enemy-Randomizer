#include "Randomizer.h"
#include "Tables/RoomTable.h"
#include "Tables/EnemyTable.h"

// seed

// stuck in walls / find a way to orient wall shooters?

// --- test ---

// --- release ---

// All of one enemy?
// random speed? aka waver
// PUU not working + other mutli piece enemies
//    https://metroidconstruction.com/SMMM/
//
// too many of certain sprites. can we get rid of some?
// Room TESTY(0x1A0009, 0x1A001E, 0x108002, 0x1080D4);
// logic? - eg early game

namespace Randomizer
{
    auto changeHeaderData(Room curRoom)
    {
        map<int, Enemy> replaceMap;
        int i = curRoom.getHeaderDataBeg();

        while (!(ROM[i] == 0xFF && ROM[i + 1] == 0xFF) && i < curRoom.getHeaderDataEnd())
        {
            int r = getRand(sizeof(EnemyTable) / sizeof(Enemy) - 1);
            int enemyToReplaceID = (ROM[i] << 8) + ROM[i + 1];
            Enemy newEnemy = EnemyTable[r];

            replaceMap[enemyToReplaceID] = newEnemy;
            ROM[i] = newEnemy.ID[0];
            ROM[++i] = newEnemy.ID[1];

            // Palette data
            // Not sure how this works yet so currently just increments it
            ROM[++i] = (1 + i) - curRoom.getHeaderDataBeg();
            ROM[++i] = 0;
            i++;
        }
        return replaceMap;
    }

    void replaceEnemy(int spriteData, Enemy newEnemy)
    {
        ROM[spriteData] = newEnemy.ID[0];
        ROM[++spriteData] = newEnemy.ID[1];

        // X and Y pos
        ++spriteData;
        ++spriteData;
        ++spriteData;
        ++spriteData;

        ROM[++spriteData] = newEnemy.Orientation[0]; // oo oo - Oritentation
        ROM[++spriteData] = newEnemy.Orientation[1];

        ROM[++spriteData] = newEnemy.Special[0]; // TEMP - Special properties
        ROM[++spriteData] = newEnemy.Special[1]; // TEMP

        ROM[++spriteData] = newEnemy.SpecialGFX[0];
        ROM[++spriteData] = newEnemy.SpecialGFX[1];

        ROM[++spriteData] = newEnemy.Speed[0]; // Speed
        ROM[++spriteData] = newEnemy.Speed[1];

        ROM[++spriteData] = newEnemy.Speed2[0]; // Speed 2
        ROM[++spriteData] = newEnemy.Speed2[1];
    }

    void randomizeEnemies(Room curRoom)
    {
        //  Change the sprite header data, and get a replacement map for enemies
        auto replaceMap = changeHeaderData(curRoom);

        // Loop through sprite data in this room
        int spriteData = curRoom.getSpriteDataBeg();
        while (spriteData < curRoom.getSpriteDataEnd() - 3)
        {
            // Make sure we have a valid ID
            // and do a check so we don't replace shutter sprites
            int oldEnemyID = (ROM[spriteData] << 8) + ROM[spriteData + 1];
            if (replaceMap.count(oldEnemyID) && ROM[spriteData + 1] != 0xD5 && oldEnemyID != 0xFFD4)
            {
                replaceEnemy(spriteData, replaceMap[oldEnemyID]);
            }
            spriteData += 16; // next block
        }
        // Set enemies required to clear room to 0
        ROM[curRoom.getSpriteDataEnd()] = 0;
    }

    void randomize()
    {
        // Loop through all rooms and randomize enemies
        for (Room room : RoomTable)
        {
            randomizeEnemies(room);
        }
    }
}

int getRand(int max)
{
    random_device rd;  // obtain a random number from hardware
    mt19937 gen(rd()); // seed the generator
    uniform_int_distribution<> distr(0, max);
    return distr(gen);
}