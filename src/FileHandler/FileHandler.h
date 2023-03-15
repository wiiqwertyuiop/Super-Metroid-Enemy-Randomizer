#ifndef FILEHANDLER_H // To make sure you don't declare the function more than once by including the header multiple times.
#define FILEHANDLER_H

#include <string>
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

vector<unsigned char> openFile(string);
void writeFile(vector<unsigned char>, string);

#endif