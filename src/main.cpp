#include "FileHandler/FileHandler.h"
#include "Randomizer/Randomizer.h"

int main(int argc, char *argv[])
{
    string fileName = "Z:\\wiiqw\\Documents\\SuperMetroid\\clean.smc";

    if (argc == 1)
    {
        cout << "Enter ROM to use: ";
        cin >> fileName;
    }

    Randomizer::initalize(openFile(fileName));
    Randomizer::randomize();

    string outputFile = "Z:\\wiiqw\\Documents\\SuperMetroid\\output.smc";
    writeFile(Randomizer::getROM(), outputFile);

    cout << "Successfully created: " << outputFile << endl;

    if (argc == 1)
    {
        system("pause");
    }
    return 0;
}
