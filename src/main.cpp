#include "FileHandler.h"
#include "Randomizer/Randomizer.h"

int main()
{
    // TODO: GET INPUT
    char const *fileName = "Z:\\wiiqw\\Documents\\workspaces\\SM_EnemyRando\\ROM.smc";
    readAsROM(openFile(fileName));
    writeFile(randomizeROM(), "Z:\\wiiqw\\Documents\\workspaces\\SM_EnemyRando\\SuperMetroid\\output.smc");
    return 0;
}
