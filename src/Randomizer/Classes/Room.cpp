#include "Room.h"

Room::Room(int headerDataBeg, int headerDataEnd, int spriteDataBeg, int spriteDataEnd)
{
    headerData[0] = headerDataBeg;
    headerData[1] = headerDataEnd;
    spriteData[0] = spriteDataBeg;
    spriteData[1] = spriteDataEnd;
}

int Room::getHeaderDataBeg()
{
    return headerData[0];
}
int Room::getHeaderDataEnd()
{
    return headerData[1];
}

int Room::getSpriteDataBeg()
{
    return spriteData[0];
}

int Room::getSpriteDataEnd()
{
    return spriteData[1];
}
