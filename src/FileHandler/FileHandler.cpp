#include "FileHandler.h"

void errorOut(string msg)
{
    cout << msg << endl;
    system("pause");
    exit(EXIT_FAILURE);
}

vector<unsigned char> openFile(string fileName)
{
    fstream file(fileName, ios::in | ios::binary | ios::ate);

    if (!file)
    {
        errorOut("Error opening: [" + fileName + "]");
    }

    auto fileSize = file.tellg();
    if (fileSize == 0 || fileSize > 67108864)
    {
        errorOut("Not a ROM file?: [" + fileName + "]");
    }

    file.seekg(0, ios::beg);
    vector<unsigned char> buffer(fileSize);

    if (!file.read((char *)buffer.data(), fileSize))
    {
        errorOut("Error: " + errno);
    }

    return buffer;
}

void writeFile(vector<unsigned char> output, string fileName)
{
    fstream file(fileName, ios::out | ios::binary | ios::trunc);

    if (!file)
    {
        errorOut("Error opening: [" + fileName + "]");
    }

    file.write((char *)output.data(), output.size());
    file.close();
}