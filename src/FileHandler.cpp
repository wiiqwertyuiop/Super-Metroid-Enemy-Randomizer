#include "FileHandler.h"

vector<unsigned char> openFile(string fileName)
{
    fstream file(fileName, ios::in | ios::binary | ios::ate);

    if (!file)
    {
        throw runtime_error("Error opening: [" + fileName + "]");
    }

    auto fileSize = file.tellg();
    if (fileSize == 0 || fileSize > 67108864)
    {
        throw runtime_error("Not a ROM file?: [" + fileName + "]");
    }

    file.seekg(0, ios::beg);
    vector<unsigned char> buffer(fileSize);

    if (!file.read((char *)buffer.data(), fileSize))
    {
        throw runtime_error("Error: " + errno);
    }

    return buffer;
}