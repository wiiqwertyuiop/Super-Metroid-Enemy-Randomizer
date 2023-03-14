#ifndef ENEMYTABLE_H // To make sure you don't declare the function more than once by including the header multiple times.
#define ENEMYTABLE_H

#include "./Classes/Enemy.h"

Enemy EnemyTable[] = {
    Enemy(0xBF, 0xCE, 0x03, 0x00, 0x20, 0x00),                               // BOYON	Boyon
    Enemy(0xFF, 0xCE),                                                       // STOKE	Mini-Crocomire
    Enemy(0x3F, 0xCF),                                                       // KAME	Tatori
    Enemy(0x7F, 0xCF, 0x01, 0x00, 0x00, 0x00),                               // n/a	Young Tatori
    Enemy(0xBF, 0xCF, 0x02, 0x00, 0x01, 0x00),                               // PUYO	Puyo
    Enemy(0xFF, 0xCF, 0x00, 0x00, 0x01, 0x03),                               // SABOTEN	Cacatac
    Enemy(0x3F, 0xD0, 0x00, 0x01, 0x08, 0x01),                               // TOGE	Owtch
    Enemy(0xFF, 0xD0),                                                       // MERO	Mellow
    Enemy(0x3F, 0xD1),                                                       // MELLA	Mella
    Enemy(0x7F, 0xD1),                                                       // MEMU	Memu
    Enemy(0xBF, 0xD1, 0xF0, 0x00, 0x03, 0x00),                               // MULTI	Multiviola
    Enemy(0xFF, 0xD1),                                                       // POLYP	Polyp
    Enemy(0x3F, 0xD2),                                                       // RINKA	Rinka
    Enemy(0x7F, 0xD2),                                                       // RIO	Rio
    Enemy(0xBF, 0xD2),                                                       // SQUEEWPT	Squeept
    Enemy(0xFF, 0xD2),                                                       // GERUDA	Geruta
    Enemy(0x3F, 0xD3),                                                       // HOLTZ	Holtz
    Enemy(0x7F, 0xD3),                                                       // OUM	Oum
    Enemy(0xBF, 0xD3, 0x04, 0x02, 0x00, 0x00),                               // HIRU	Chute
    Enemy(0xFF, 0xD3, 0x60, 0x05, 0xC0, 0x05),                               // RIPPER2	Gripper
    Enemy(0x3F, 0xD4, 0x40, 0x00, 0x00, 0x00),                               // RIPPER2	Ripper II
    Enemy(0x7F, 0xD4, 0x10, 0x00, 0x01, 0x00),                               // RIPPER	Ripper
    Enemy(0xBF, 0xD4),                                                       // DRAGON	Dragon
    Enemy(0xFF, 0xD5),                                                       // SHUTTER2	Kamer
    Enemy(0x3F, 0xD6),                                                       // WAVER	Waver
    Enemy(0x7F, 0xD6),                                                       // METALEE	Metaree
    Enemy(0xBF, 0xD6, 0x03, 0x00, 0x10, 0x02),                               // HOTARY	Fireflea
    Enemy(0xFF, 0xD6, 0x10, 0x01, 0x10, 0x02),                               // FISH	Skultera
    Enemy(0x7F, 0xD7),                                                       // KANI	Sciser
    Enemy(0xBF, 0xD7),                                                       // OUMU	Zero
    Enemy(0xFF, 0xD7, 0x00, 0x00, 0x10, 0x10),                               // KAMER	Tripper
    Enemy(0x3F, 0xD8, 0x00, 0x00, 0x00, 0x28),                               // KAMER	Kamer
    Enemy(0x7F, 0xD8),                                                       // SBUG	Bug
    Enemy(0xFF, 0xD8),                                                       // METMOD	Mochtroid
    Enemy(0x3F, 0xD9),                                                       // SSIDE	Sidehopper
    Enemy(0x7F, 0xD9),                                                       // SDEATH	Desgeega
    Enemy(0xBF, 0xD9),                                                       // SIDE	Big Sidehopper
    Enemy(0xFF, 0xD9),                                                       // SIDE	Big Sidehopper
    Enemy(0x3F, 0xDA),                                                       // DESSGEEGA	Big Desgeega
    Enemy(0x7F, 0xDA),                                                       // ZOA	Zoa
    Enemy(0xBF, 0xDA, 0x02, 0x00, 0x06, 0x00),                               // VIOLA	Viola
    Enemy(0x3F, 0xDB, 0x4A, 0xBB, 0x10, 0x00, 0x00, 0x00, 0x00, 0x20, 0x01), // BANG	Bang
    Enemy(0x7F, 0xDB),                                                       // SKREE	Skree
    Enemy(0xBF, 0xDB, 0x07, 0x00, 0x00, 0x00),                               // YARD	Yard
    Enemy(0xFF, 0xDB),                                                       // REFLEC	Reflec
    Enemy(0x3F, 0xDC),                                                       // HZOOMER	“Samus” Geemer
    Enemy(0x7F, 0xDC),                                                       // ZEELA	Zeela
    Enemy(0xBF, 0xDC, 0x00, 0x00, 0x04, 0x00),                               // NOVA	Norfair Geemer
    Enemy(0xFF, 0xDC),                                                       // ZOOMER	Geemer
    Enemy(0x3F, 0xDD),                                                       // MZOOMER	Grey Geemer
    Enemy(0x7F, 0xDD),                                                       // METROID	Metroid
    Enemy(0xBF, 0xDF, 0x00, 0x02, 0x50, 0xA0),                               // RSTONE	Boulder
    Enemy(0xFF, 0xDF, 0x40, 0x00, 0x70, 0x80),                               // KZAN	Kzan
    Enemy(0x7F, 0xE0),                                                       // HIBASHI	Hibashi
    Enemy(0xBF, 0xE0, 0x10, 0x40, 0x01, 0x20),                               // PUROMI	Puromi
    Enemy(0xFF, 0xE0),                                                       // SCLAYD	Mini-Kraid
    Enemy(0x3F, 0xE6, 0x00, 0x00, 0x08, 0xF8),                               // EBI	Evir
    Enemy(0xBF, 0xE6),                                                       // EYE	Eye
    Enemy(0xFF, 0xE6, 0x00, 0x00, 0x07, 0x50),                               // FUNE	Fune
    Enemy(0x3F, 0xE7, 0x01, 0x10, 0x05, 0x50),                               // NAMI	Namihe
    Enemy(0x7F, 0xE7),                                                       // GAI	Coven
    Enemy(0xBF, 0xE7, 0x70, 0x00, 0x01, 0x00),                               // HAND	Yapping Maw
    Enemy(0xFF, 0xE7, 0x0A, 0x00, 0x00, 0x00),                               // KAGO	Kago
    Enemy(0x3F, 0xE8, 0x00, 0x00, 0x60, 0x3A),                               // LAVAMAN	Magdollite
    Enemy(0x7F, 0xE8),                                                       // NOMI	Beetom
    // Enemy(0xBF, 0xE8, 0x01, 0x00, 0x70, 0x00), // PUU	Powamp
    Enemy(0xFF, 0xE8),                         // ROBO	Work Robot
    Enemy(0x3F, 0xE9),                         // ROBO2	Work Robot
    Enemy(0x7F, 0xE9, 0x0A, 0x00, 0x00, 0x00), // PIPE	Bull
    Enemy(0xBF, 0xE9),                         // NDRA	Alcoon
    Enemy(0xFF, 0xE9, 0x00, 0x00, 0x08, 0x00), // ATOMIC	Atomic
    Enemy(0x3F, 0xEA),                         // SPA	Sparks
    Enemy(0x7F, 0xEA),                         // KOMA	Koma
    Enemy(0xBF, 0xEA),                         // HACHI1	Green Kihunter
    Enemy(0x3F, 0xEB),                         // HACHI2	Greenish Kihunter
    Enemy(0xBF, 0xEB),                         // HACHI3	Red Kihunter
    // Enemy(0x7F, 0xF0),                         // DORI	Shaktool
    Enemy(0x93, 0xF1),                         // ZEB	Zeb
    Enemy(0xD3, 0xF1, 0x02, 0x00, 0x00, 0x00), // ZEBBO	Zebbo
    // Enemy(0x13, 0xF2),                         // GAMET	Gamet
    Enemy(0x53, 0xF2),                               // GEEGA	Geega
    Enemy(0x53, 0xF3, 0x00, 0x80, 0x18, 0x00, 0x04), // BATTA1	Grey Zebesian
    Enemy(0x93, 0xF3, 0x00, 0x80, 0x18, 0x00, 0x04), // BATTA1Br	Green Zebesian
    Enemy(0xD3, 0xF3, 0x00, 0x80, 0x18, 0x00, 0x04), // BATTA1No	Red Zebesian
    Enemy(0x13, 0xF4, 0x00, 0x80, 0x18, 0x00, 0x04), // BATTA1Na	Gold Zebesian
    Enemy(0x53, 0xF4, 0x00, 0x80, 0x18, 0x00, 0x04), // BATTA1Ma	Pink Zebesian
    Enemy(0x93, 0xF4, 0x00, 0x80, 0x18, 0x00, 0x04), // BATTA1Tu	Black Zebesian
    Enemy(0xD3, 0xF4, 0x00, 0x80, 0x18, 0x00, 0x04), // BATTA2	Grey Zebesian
    Enemy(0x13, 0xF5, 0x00, 0x80, 0x18, 0x00, 0x04), // BATTA2Br	Green Zebesian
    Enemy(0x53, 0xF5, 0x00, 0x80, 0x18, 0x00, 0x04), // BATTA2No	Red Zebesian
    Enemy(0x93, 0xF5, 0x00, 0x80, 0x18, 0x00, 0x04), // BATTA2Na	Gold Zebesian
    Enemy(0xD3, 0xF5, 0x00, 0x80, 0x18, 0x00, 0x04), // BATTA2Ma	Pink Zebesian
    Enemy(0x13, 0xF6, 0x00, 0x80, 0x18, 0x00, 0x04), // BATTA2Tu	Black Zebesian
    Enemy(0x53, 0xF6, 0x00, 0x80, 0x18, 0x00, 0x04), // BATTA3	Grey Zebesian
    Enemy(0x93, 0xF6, 0x00, 0x80, 0x18, 0x00, 0x04), // BATTA3Br	Green Zebesian
    Enemy(0xD3, 0xF6, 0x00, 0x80, 0x18, 0x00, 0x04), // BATTA3No	Red Zebesian
    Enemy(0x13, 0xF7, 0x00, 0x80, 0x18, 0x00, 0x04), // BATTA3Na	Gold Zebesian
    Enemy(0x53, 0xF7, 0x00, 0x80, 0x18, 0x00, 0x04), // BATTA3Ma	Pink Zebesian
    Enemy(0x93, 0xF7, 0x00, 0x80, 0x18, 0x00, 0x04), // BATTA3Tu	Black Zebesian
};

#endif