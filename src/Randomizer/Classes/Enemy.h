#ifndef ENEMYCLASS_H // To make sure you don't declare the function more than once by including the header multiple times.
#define ENEMYCLASS_H

class Enemy
{
public:
    int ID[2];
    int Speed[2];
    int Speed2[2];
    int SpecialGFX[2];
    int Special[2];
    int Orientation[2];
    Enemy(int ID_L, int ID_H, int Speed_L = 0, int Speed_H = 0, int Speed2_L = 0, int Speed2_H = 0, int SpecialGFX_L = 0, int SpecialGFX_H = 0, int Special_L = 0, int Special_H = 0x20, int Orientation_L = 0, int Orientation_H = 0);
    Enemy() {}
};

#endif