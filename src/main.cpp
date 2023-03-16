#include "FileHandler/FileHandler.h"
#include "Randomizer/Randomizer.h"

bool checkIfValidSeed(string input, unsigned int &output)
{
    try
    {
        output = stol(input);
    }
    catch (invalid_argument)
    {
        return false;
    }
    if (output < 0 || output > 4294967295)
    {
        return false;
    }
    return true;
}

void SuperMetroidEnemyRandomizer(string inputFile, string inputSeed)
{
    unsigned int user_seed;
    if (checkIfValidSeed(inputSeed, user_seed))
    {
        Randomizer::setSeed(user_seed);
    }

    Randomizer::initalize(openFile(inputFile));
    Randomizer::randomize();

    string outputFile = makeOutputName(inputFile, Randomizer::getSeed());
    writeFile(Randomizer::getROM(), outputFile);

    cout << "Successfully created: " << outputFile << endl;
}

int main(int argc, char *argv[])
{
    string fileName;
    if (argc == 1)
    {
        cout << "Enter ROM to use: ";
        cin >> fileName;
        cin.ignore();
    }
    else
    {
        fileName = argv[1];
    }

    string seedInput;
    if (argc == 3)
    {
        seedInput = argv[2];
    }
    else
    {
        cout << "Enter a valid seed. Enter anything else to have one auto generated for you: ";
        getline(cin, seedInput);
    }

    try
    {
        SuperMetroidEnemyRandomizer(fileName, seedInput);
    }
    catch (const std::runtime_error &re)
    {
        cout << re.what() << endl;
    }
    catch (const std::out_of_range &re)
    {
        cout << re.what() << endl;
    }
    catch (...)
    {
        cout << "Unknown error." << endl;
    }

    if (argc < 3)
    {
        system("pause");
    }
}
