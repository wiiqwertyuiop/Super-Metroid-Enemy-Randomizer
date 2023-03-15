#include "Enemy.h"

Enemy::Enemy(int ID_L, int ID_H, int Speed_L, int Speed_H, int Speed2_L, int Speed2_H, int SpecialGFX_L, int SpecialGFX_H, int Special_L, int Special_H, int Orientation_L, int Orientation_H)
{
    ID[0] = ID_L;
    ID[1] = ID_H;
    Orientation[0] = Orientation_L;
    Orientation[1] = Orientation_H;
    Special[0] = Special_L;
    Special[1] = Special_H;
    SpecialGFX[0] = SpecialGFX_L;
    SpecialGFX[1] = SpecialGFX_H;
    Speed[0] = Speed_L;
    Speed[1] = Speed_H;
    Speed2[0] = Speed2_L;
    Speed2[1] = Speed2_H;
}
