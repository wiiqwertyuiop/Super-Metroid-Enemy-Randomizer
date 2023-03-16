#include "FileHandler.h"

vector<unsigned char> openFile(string fileName)
{
    fstream file(fileName, ios::in | ios::binary | ios::ate);

    if (!file)
    {
        throw runtime_error("Error opening: [" + fileName + "]");
    }

    auto fileSize = file.tellg();
    if (fileSize < 3145728 || fileSize > 67108864)
    {
        throw runtime_error("Incorrect ROM size: [" + fileName + "]");
    }

    file.seekg(0, ios::beg);
    vector<unsigned char> buffer(fileSize);

    if (!file.read((char *)buffer.data(), fileSize))
    {
        throw runtime_error("Error: " + errno);
    }

    return buffer;
}

void writeFile(vector<unsigned char> output, string fileName)
{
    fstream file(fileName, ios::out | ios::binary | ios::trunc);

    if (!file)
    {
        throw runtime_error("Error opening: [" + fileName + "]");
    }

    file.write((char *)output.data(), output.size());
    file.close();
}

string makeOutputName(string inputFile, unsigned int seed)
{
    string fileName = filesystem::path(inputFile).filename().generic_string();
    return to_string(seed) + "_" + fileName;
}