#include "FileHandler.h"
#include "Randomizer/Randomizer.h"

int main()
{
    // TODO: GET INPUT
    char const *fileName = "Z:\\wiiqw\\Documents\\workspaces\\SM_EnemyRando\\ROM.smc";
    auto ROM = openFile(fileName);
    randomizeEnemies(ROM);
    // writeFile(ROM, "output.smc");
    return 0;
}
