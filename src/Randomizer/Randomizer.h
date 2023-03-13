#ifndef RANDOMIZER_H // To make sure you don't declare the function more than once by including the header multiple times.
#define RANDOMIZER_H

#include <random>
#include <vector>
using namespace std;

void readAsROM(vector<unsigned char>);
vector<unsigned char> randomizeROM();

#endif