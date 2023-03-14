#ifndef ROOMCLASS_H // To make sure you don't declare the function more than once by including the header multiple times.
#define ROOMCLASS_H

class Room
{
    int headerData[2];
    int spriteData[2];

public:
    Room(int headerDataBeg, int headerDataEnd, int spriteDataBeg, int spriteDataEnd);
    int getHeaderDataBeg();
    int getHeaderDataEnd();
    int getSpriteDataBeg();
    int getSpriteDataEnd();
};

#endif