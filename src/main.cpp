#include "FileHandler/FileHandler.h"
#include "Randomizer/Randomizer.h"

int main()
{
    char const *fileName = "Z:\\wiiqw\\Documents\\SuperMetroid\\clean.smc";
    Randomizer::ROM = openFile(fileName);
    Randomizer::randomize();
    writeFile(Randomizer::ROM, "Z:\\wiiqw\\Documents\\SuperMetroid\\output.smc");
    return 0;
}
