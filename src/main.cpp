#include "FileHandler.h"

int main()
{
    // TODO: GET INPUT
    char const *fileName = "..\\ROM.smc";
    auto ROM = openFile(fileName);
    return 0;
}
