#include "Randomizer.h"
#include "Tables/RoomTable.h"
#include "Tables/EnemyTable.h"

// TODO:
// SM room data compressed?

// Wall check
//  Move in 8 directions. Find closest opening. Move sprite there.
//  You can also tell which way the wall is like this for oreientation

// Give sprite difficulty?
// If too hard limit sprites?
// Or some other kind of logic

// --- Future ideas ---
// increase max seed number?
// option for replacing All of one enemy?
// random speed/speed2? aka waver
// PUU not working + other mutli piece enemies
//    https://metroidconstruction.com/SMMM/
//

namespace Randomizer
{
    mt19937 gen;
    unsigned int seed;
    bool haveSeed = false;
    vector<unsigned char> ROM;

    void initalize(vector<unsigned char> _ROM)
    {
        ROM = _ROM;
        if (!haveSeed)
        {
            random_device rd;
            seed = rd();
        }
        mt19937 _gen(seed);
        gen = _gen;
    }

    int getRandNumber(int max)
    {
        uniform_int_distribution<int> distr(0, max);
        return distr(gen);
    }

    auto changeHeaderData(Room curRoom)
    {
        map<int, Enemy> replaceMap;
        int i = curRoom.getHeaderDataBeg();

        while (!(ROM[i] == 0xFF && ROM[i + 1] == 0xFF) && i < curRoom.getHeaderDataEnd())
        {
            int enemyToReplaceID = (ROM[i] << 8) + ROM[i + 1];

            int r = getRandNumber(sizeof(EnemyTable) / sizeof(Enemy) - 1);
            Enemy newEnemy = EnemyTable[r];

            replaceMap[enemyToReplaceID] = newEnemy;
            ROM[i] = newEnemy.ID[0];
            ROM[++i] = newEnemy.ID[1];

            // Palette data
            // Not sure how this works yet so currently just increments it
            ROM[++i] = (i + 1) - curRoom.getHeaderDataBeg();
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
            // Make sure we have a valid ID.
            // Also do a check to ensure we don't replace shutter sprites
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

    vector<unsigned char> getROM()
    {
        return ROM;
    }

    void setSeed(unsigned int _seed)
    {
        seed = _seed;
        haveSeed = true;
    }

    int getSeed()
    {
        return seed;
    }
}