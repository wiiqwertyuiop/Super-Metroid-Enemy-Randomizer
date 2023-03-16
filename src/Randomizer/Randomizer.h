#ifndef RANDOMIZER_H // To make sure you don't declare the function more than once by including the header multiple times.
#define RANDOMIZER_H

#include <random>
#include <vector>
#include <map>
#include <array>
using namespace std;

namespace Randomizer
{
    void randomize();
    void initalize(vector<unsigned char>);
    vector<unsigned char> getROM();
    int getSeed();
    void setSeed(unsigned int);
}

#endif