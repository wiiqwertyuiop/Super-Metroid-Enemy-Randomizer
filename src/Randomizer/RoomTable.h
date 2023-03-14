#ifndef ROOMTABLE_H // To make sure you don't declare the function more than once by including the header multiple times.
#define ROOMTABLE_H

#include "./Classes/Room.h"

Room RoomTable[] = {
    // B4 | A1
    // Room(0x1A0000, 0x1A0008, 0x108000, 0x108001), // Pop	TO/MA	7DD58/7DA60 [Tourian Boss][Standard]
    Room(0x1A0009, 0x1A001E, 0x108002, 0x1080D4), // Pop	CR	794FD [Standard]
    Room(0x1A001F, 0x1A0030, 0x1080D5, 0x108107), // Pop	CR	793AA [Standard]
    Room(0x1A0031, 0x1A0042, 0x108108, 0x10819A), // Pop	CR	7990D [Standard]
    Room(0x1A0043, 0x1A0054, 0x10819B, 0x1081FD), // Pop	CR	79A44 [Events 1]
    Room(0x1A0055, 0x1A0066, 0x1081FE, 0x108260), // Pop	CR	79A44 [Standard]
    Room(0x1A0067, 0x1A007C, 0x108261, 0x108363), // Pop	CR	792FD [Awake]
    Room(0x1A007D, 0x1A008E, 0x108364, 0x108426), // Pop	CR	79879 [Standard]
    Room(0x1A008F, 0x1A00A0, 0x108427, 0x108479), // Pop	CR	7975C [Awake]
    Room(0x1A00A1, 0x1A00B2, 0x10847A, 0x1084EC), // Pop	CR	792B3 [Standard]
    // Room(0x1A00B3, 0x1A00C0, 0x1084ED, 0x1084FF), // Pop	CR	79804 [Standard/Bosses]
    Room(0x1A00C1, 0x1A00D2, 0x108500, 0x108572), // Pop	CR	799BD [Standard]
    // Room(0x1A00D3, 0x1A00DC, 0x108573, 0x108585), // Pop	CR	79938 [Standard]
    Room(0x1A00DD, 0x1A00EA, 0x108586, 0x1085A8), // Pop	CR	79A90 [Standard]
    Room(0x1A00EB, 0x1A0110, 0x1085A9, 0x1085B1), // Pop	CR	79994 [Standard]
    Room(0x1A0111, 0x1A0128, 0x1085B2, 0x1085D7), // Pop	CR	796BA [Escape]
    Room(0x1A0129, 0x1A0132, 0x1085D8, 0x1085DA), // Pop	CR	793D5 [Standard]
    Room(0x1A0133, 0x1A0140, 0x1085DB, 0x1085DC), // Pop	CR	795A8 [Standard]
    Room(0x1A0141, 0x1A014E, 0x1085DE, 0x1085E0), // Pop	CR	795FF [Standard]
    Room(0x1A014F, 0x1A0160, 0x1085E1, 0x108683), // Pop	CR	796BA [Standard]
    Room(0x1A0161, 0x1A0184, 0x108684, 0x1086F9), // Pop	CR	793FE [Standard]
    Room(0x1A0185, 0x1A0192, 0x1086FA, 0x10883C), // Pop	CR	792FD [Standard]
    // Room(0x1A0193, 0x1A01A4, 0x10883D, 0x10886F), // Pop	CR	791F8 [Standard]
    Room(0x1A01A5, 0x1A01C0, 0x108870, 0x1088B5), // Pop	CR	799F9 [Standard]
    Room(0x1A01C1, 0x1A01D2, 0x1088B6, 0x1088C8), // Pop	CR	7968F [Standard]
    Room(0x1A01D3, 0x1A01E0, 0x1088C9, 0x10897B), // Pop	CR	796BA [Awake]
    Room(0x1A01E1, 0x1A01F2, 0x10897C, 0x1089DE), // Pop	CR	79461 [Standard]
    // Room(0x1A01F3, 0x1A01FC, 0x1089DF, 0x1089F1), // Pop	CR	7962A [Standard]
    Room(0x1A01FD, 0x1A020E, 0x1089F2, 0x108A14), // Pop	CR	7965B [Standard]
    Room(0x1A020F, 0x1A0220, 0x108A15, 0x108AB7), // Pop	CR	7975C [Standard]
    Room(0x1A0221, 0x1A0232, 0x108AB8, 0x108B3A), // Pop	CR	7957D [Standard]
    Room(0x1A0233, 0x1A023C, 0x108B3B, 0x108B3D), // Pop	CR	795D4 [Standard]
    Room(0x1A023D, 0x1A024A, 0x108B3E, 0x108B60), // Pop	CR	79552 [Standard]
    // Room(0x1A024B, 0x1A0254, 0x108B61, 0x108B73), // Pop	CR	797B5 [Standard]
    // Room(0x1A0255, 0x1A025E, 0x108B74, 0x108B86), // Pop	CR	794CC [Standard]
    Room(0x1A025F, 0x1A0270, 0x108B87, 0x108BC9), // Pop	CR	798E2 [Standard]
    Room(0x1A0271, 0x1A0282, 0x108BCA, 0x108C0C), // Pop	CR	79969 [Standard]
    Room(0x1A0283, 0x1A0294, 0x108C0D, 0x108D9F), // Pop	CR	791F8 [Escape]
    Room(0x1A0295, 0x1A02A2, 0x108DA0, 0x108ED2), // Pop	CR	792FD [Escape]
    Room(0x1A02A3, 0x1A02B4, 0x108ED3, 0x108F15), // Pop	CR	79804 [Escape]
    Room(0x1A02B5, 0x1A02BE, 0x108F16, 0x108F18), // Pop	CR	79879 [Escape]
    Room(0x1A02BF, 0x1A02D4, 0x108F19, 0x108F7B), // Pop	CR	7948C [Standard]
    Room(0x1A02D5, 0x1A02E6, 0x108F7C, 0x108FBE), // Pop	BR	79B9D [Standard]
    Room(0x1A02E7, 0x1A02F0, 0x108FBF, 0x108FC1), // Pop	BR	79C35 [Standard]
    Room(0x1A02F1, 0x1A02FA, 0x108FC2, 0x108FC4), // Pop	BR	79C89 [Standard]
    Room(0x1A02FB, 0x1A0308, 0x108FC5, 0x109027), // Pop	BR	79D9C [Standard]
    Room(0x1A0309, 0x1A0312, 0x109028, 0x10902A), // Pop	BR	7A051 [Standard]
    Room(0x1A0313, 0x1A0320, 0x10902B, 0x10902D), // Pop	BR	7A07B [Standard]
    Room(0x1A0321, 0x1A0332, 0x10902E, 0x109080), // Pop	BR	7A0A4 [Standard]
    Room(0x1A0333, 0x1A0345, 0x109081, 0x1090C3), // Pop	CR	7A66A [Standard]
    Room(0x1A0345, 0x1A034E, 0x1090C4, 0x1090C6), // Pop	BR	7A15B [Standard]
    Room(0x1A034F, 0x1A0360, 0x1090C7, 0x109119), // Pop	BR	7A37C [Standard]
    Room(0x1A0361, 0x1A0376, 0x10911A, 0x10918C), // Pop	BR	7A0D2 [Standard]
    Room(0x1A0377, 0x1A0388, 0x10918D, 0x1091FF), // Pop	BR	79F11 [Events 1]
    Room(0x1A0389, 0x1A03A2, 0x109200, 0x1092A2), // Pop	BR	79F64 [Events 1]
    Room(0x1A03A3, 0x1A03B4, 0x1092A3, 0x109325), // Pop	BR	79FBA [Standard]
    Room(0x1A03B5, 0x1A03C6, 0x109326, 0x1093A8), // Pop	BR	79E9F [Standard]
    Room(0x1A03C7, 0x1A03D0, 0x1093A9, 0x1093AB), // Pop	BR	7A70B [Standard]
    Room(0x1A03D1, 0x1A03E2, 0x1093AC, 0x10941E), // Pop	BR	79E9F [Standard]
    Room(0x1A03E3, 0x1A03F0, 0x10941F, 0x109451), // Pop	BR	7A471 [Standard]
    Room(0x1A03F1, 0x1A0407, 0x109452, 0x109505), // Pop	BR	7A253 [Standard]
    Room(0x1A0407, 0x1A0414, 0x109505, 0x109537), // Pop	BR	7A1AD [Standard]
    Room(0x1A0415, 0x1A041E, 0x109538, 0x10953A), // Pop	BR	7A1D8 [Standard]
    Room(0x1A041F, 0x1A0428, 0x10953B, 0x10953D), // Pop	BR	7A184 [Standard]
    Room(0x1A0429, 0x1A043E, 0x10953E, 0x1095E0), // Pop	BR	79D19 [Standard]
    Room(0x1A043F, 0x1A0448, 0x1095E1, 0x1095E3), // Pop	BR	7A22A [Standard]
    Room(0x1A0449, 0x1A045A, 0x1095E4, 0x109616), // Pop	BR	7A408 [Standard]
    Room(0x1A045B, 0x1A0464, 0x109617, 0x109619), // Pop	BR	7A201 [Standard]
    Room(0x1A0465, 0x1A046E, 0x10961A, 0x10961C), // Pop	BR	7A447 [Standard]
    Room(0x1A046F, 0x1A0484, 0x10961D, 0x10965F), // Pop	BR	79E11 [Standard]
    Room(0x1A0485, 0x1A048E, 0x109660, 0x109662), // Pop	BR	7A618 [Standard]
    Room(0x1A048F, 0x1A0498, 0x109663, 0x109665), // Pop	BR	7A641 [Standard]
    Room(0x1A0499, 0x1A04A2, 0x109666, 0x109668), // Pop	BR	7A6E2 [Standard]
    Room(0x1A04A3, 0x1A04B6, 0x109669, 0x10966E), // Pop	BR	7A734 [Standard]
    Room(0x1A04B7, 0x1A04C8, 0x10966F, 0x1096E1), // Pop	BR	79F64 [Standard]
    Room(0x1A04C9, 0x1A04D6, 0x1096E2, 0x109734), // Pop	BR	79C5E [Standard]
    Room(0x1A04D7, 0x1A04E4, 0x109735, 0x109777), // Pop	BR	79FE5 [Standard]
    Room(0x1A04E5, 0x1A04F6, 0x109778, 0x1097FA), // Pop	BR	7A011 [Standard]
    Room(0x1A04F7, 0x1A050C, 0x1097FB, 0x10988D), // Pop	BR	7A130 [Standard]
    Room(0x1A050D, 0x1A0528, 0x10988E, 0x1098E3), // Pop	BR	7A4B1 [Standard]
    Room(0x1A0529, 0x1A0532, 0x1098E4, 0x1098F6), // Pop	BR	7A6A1 [Standard]
    Room(0x1A0533, 0x1A0540, 0x1098F7, 0x109979), // Pop	BR	7A4DA [Standard]
    Room(0x1A0541, 0x1A0556, 0x10997A, 0x109A2C), // Pop	BR	79AD9 [Standard]
    Room(0x1A0557, 0x1A0564, 0x109A2D, 0x109A3F), // Pop	BR	79B5B [Standard]
    Room(0x1A0565, 0x1A057E, 0x109A40, 0x109B12), // Pop	BR	79BC8 [Standard]
    Room(0x1A057F, 0x1A0594, 0x109B13, 0x109BC5), // Pop	BR	7A293 [Standard]
    Room(0x1A0595, 0x1A05A6, 0x109BC6, 0x109CB8), // Pop	BR	79F11 [Standard]
    Room(0x1A05A7, 0x1A05B8, 0x109CB9, 0x109D5B), // Pop	BR	79E52 [Standard]
    Room(0x1A05B9, 0x1A05D2, 0x109D5C, 0x109E2E), // Pop	BR	79CB3 [Standard]
    Room(0x1A05D3, 0x1A05E4, 0x109E2F, 0x109EB1), // Pop	BR	7A2F7 [Standard]
    Room(0x1A05E5, 0x1A05EE, 0x109EB2, 0x109EB4), // Pop	BR	7A107 [Standard]
    // Room(0x1A05EF, 0x1A05FC, 0x109EB5, 0x109F37), // Pop	BR	7A59F [Standard/Bosses]
    Room(0x1A05FD, 0x1A0606, 0x109F38, 0x109F3A), // Pop	BR	79C07 [Standard]
    Room(0x1A0607, 0x1A0614, 0x109F3B, 0x109F5D), // Pop	BR	7A2CE [Standard]
    Room(0x1A0615, 0x1A061E, 0x109F5E, 0x109F60), // Pop	CR	7A5ED [Standard]
    Room(0x1A061F, 0x1A062C, 0x109F61, 0x109FA3), // Pop	BR	7A3AE [Standard]
    Room(0x1A062D, 0x1A063E, 0x109FA4, 0x10A056), // Pop	BR	7A56B [Standard]
    Room(0x1A063F, 0x1A063E, 0x10A057, 0x10A0B9), // Pop	BR	7A322 [Standard]
    Room(0x1A0651, 0x1A0662, 0x10A0BA, 0x10A0FA), // Pop	BR	7A521 [Standard]
    // Room(0x1A0663, 0x1A0670, 0x10A0FD, 0x10A0FC), // Pop	BR	79DC7 [Standard/Bosses]
    Room(0x1A0671, 0x1A0682, 0x10A110, 0x10A132), // Pop	BR	7A3DD [Standard]
    Room(0x1A0683, 0x1A0694, 0x10A133, 0x10A1D5), // Pop	NO	7AB64 [Standard]
    Room(0x1A0695, 0x1A06A2, 0x10A1D6, 0x10A218), // Pop	NO	7AB07 [Standard]
    Room(0x1A06A3, 0x1A06B0, 0x10A219, 0x10A23B), // Pop	NO	7B62B [Standard]
    Room(0x1A06B1, 0x1A06C6, 0x10A23C, 0x10A2DE), // Pop	NO	7B1E5 [Standard]
    Room(0x1A06C7, 0x1A06D4, 0x10A2DF, 0x10A331), // Pop	NO	7B051 [Standard]
    Room(0x1A06D5, 0x1A06EE, 0x10A332, 0x10A3F3), // Pop	NO	7A815 [Standard]
    Room(0x1A06EF, 0x1A06FC, 0x10A3F5, 0x10A427), // Pop	NO	7AFFB [Standard]
    Room(0x1A06FD, 0x1A070E, 0x10A428, 0x10A48A), // Pop	NO	7B585 [Standard]
    Room(0x1A070F, 0x1A071C, 0x10A48B, 0x10A4ED), // Pop	NO	7B2DA [Standard]
    Room(0x1A071D, 0x1A0726, 0x10A4EE, 0x10A4F0), // Pop	NO	7ADDE [Standard]
    Room(0x1A0727, 0x1A073C, 0x10A4F1, 0x10A543), // Pop	NO	7B3A5 [Standard]
    Room(0x1A073D, 0x1A0746, 0x10A544, 0x10A556), // Pop	NO	7AF3F [Standard]
    Room(0x1A0747, 0x1A0750, 0x10A557, 0x10A559), // Pop	NO	7B741 [Standard]
    Room(0x1A0751, 0x1A075A, 0x10A55A, 0x10A55C), // Pop	NO	7B026 [Standard]
    Room(0x1A075B, 0x1A0764, 0x10A55D, 0x10A55F), // Pop	NO	7B0B4 [Standard]
    Room(0x1A0765, 0x1A0776, 0x10A560, 0x10A622), // Pop	NO	7B40A [Standard]
    Room(0x1A0777, 0x1A0780, 0x10A623, 0x10A625), // Pop	NO	7B305 [Standard]
    // Room(0x1A0781, 0x1A079C, 0x10A626, 0x10A638), // Pop	NO	7B32E [Standard/Bosses]
    Room(0x1A07B1, 0x1A07BA, 0x10A639, 0x10A63B), // Pop	NO	7AADE [Standard]
    Room(0x1A079D, 0x1A07A6, 0x10A63C, 0x10A63E), // Pop	NO	7A890 [Standard]
    Room(0x1A07A7, 0x1A07B0, 0x10A63F, 0x10A641), // Pop	NO	7A9E5 [Standard]
    Room(0x1A07BB, 0x1A07C8, 0x10A645, 0x10A6A7), // Pop	NO	7B106 [Standard]
    Room(0x1A07C9, 0x1A07DE, 0x10A6A8, 0x10A7BA), // Pop	NO	7AFA3 [Standard]
    Room(0x1A07DF, 0x1A07F4, 0x10A7BB, 0x10A82D), // Pop	NO	7AA82 [Standard]
    Room(0x1A07F5, 0x1A080A, 0x10A82E, 0x10A8E0), // Pop	NO	7B4AD [Standard]
    Room(0x1A080B, 0x1A0824, 0x10A8E1, 0x10A963), // Pop	NO	7ADAD [Standard]
    Room(0x1A0825, 0x1A0832, 0x10A964, 0x10A966), // Pop	NO	7AC2B [Standard]
    Room(0x1A0833, 0x1A0844, 0x10A967, 0x10A9D9), // Pop	NO	7B139 [Standard]
    Room(0x1A0845, 0x1A085E, 0x10A9DA, 0x10AA8C), // Pop	NO	7A923 [Standard]
    Room(0x1A085F, 0x1A0870, 0x10AA8D, 0x10AB7F), // Pop	NO	7B482 [Standard]
    Room(0x1A0871, 0x1A0886, 0x10AB80, 0x10AC52), // Pop	NO	7B6EE [Standard]
    Room(0x1A0887, 0x1A0898, 0x10AC53, 0x10AD05), // Pop	NO	7AEB4 [Standard]
    Room(0x1A0899, 0x1A08A2, 0x10AD06, 0x10AD08), // Pop	NO	7B3E1 [Standard]
    Room(0x1A08A3, 0x1A08B0, 0x10AD09, 0x10AD6B), // Pop	NO	7AF14 [Standard]
    Room(0x1A08B1, 0x1A08BE, 0x10AD6C, 0x10AD8E), // Pop	NO	7B457 [Standard]
    Room(0x1A08BF, 0x1A08D0, 0x10AD8F, 0x10AE51), // Pop	NO	7AA0E [Standard]
    Room(0x1A08D1, 0x1A08DE, 0x10AE52, 0x10AEA4), // Pop	NO	7B510 [Standard]
    Room(0x1A08DF, 0x1A08E8, 0x10AEA5, 0x10AEA7), // Pop	NO	7B55A [Standard]
    Room(0x1A08E9, 0x1A08F2, 0x10AEA8, 0x10AEAA), // Pop	NO	7AEDF [Standard]
    Room(0x1A08F3, 0x1A08FC, 0x10AEAB, 0x10AEAD), // Pop	NO	7B698 [Standard]
    Room(0x1A08FD, 0x1A0906, 0x10AEAE, 0x10AEB0), // Pop	NO	7B6C1 [Standard]
    Room(0x1A0907, 0x1A091C, 0x10AEB1, 0x10AEF3), // Pop	NO	7AC83 [Standard]
    Room(0x1A091D, 0x1A092A, 0x10AEF4, 0x10AF86), // Pop	NO	7B4E5 [Standard]
    Room(0x1A092B, 0x1A093C, 0x10AF87, 0x10AFE9), // Pop	NO	7A7B3 [Standard]
    Room(0x1A093D, 0x1A0952, 0x10AFEA, 0x10B11C), // Pop	NO	7B236 [Standard]
    Room(0x1A0953, 0x1A0968, 0x10B11D, 0x10B1EF), // Pop	NO	7AB8F [Standard]
    Room(0x1A0969, 0x1A0972, 0x10B1F0, 0x10B1F2), // Pop	NO	7B167 [Standard]
    Room(0x1A0973, 0x1A097C, 0x10B1F3, 0x10B1F5), // Pop	NO	7B192 [Standard]
    Room(0x1A097D, 0x1A098A, 0x10B1F6, 0x10B258), // Pop	NO	7A8F8 [Standard]
    Room(0x1A098B, 0x1A09A4, 0x10B259, 0x10B32B), // Pop	NO	7B5D5 [Standard]
    Room(0x1A09A5, 0x1A09B6, 0x10B32C, 0x10B3BE), // Pop	NO	7AFCE [Standard]
    Room(0x1A09B7, 0x1A09C0, 0x10B3BF, 0x10B3C1), // Pop	NO	7AC00 [Standard]
    Room(0x1A09C1, 0x1A09CA, 0x10B3C2, 0x10B3C4), // Pop	NO	7B0DD [Standard]
    Room(0x1A09CB, 0x1A09D8, 0x10B3C5, 0x10B3D7), // Pop	NO	7AA41 [Standard]
    Room(0x1A09D9, 0x1A09F2, 0x10B3D8, 0x10B45C), // Pop	NO	7ACB3 [Standard]
    Room(0x1A09F3, 0x1A0A00, 0x10B45B, 0x10B48D), // Pop	NO	7A75D [Standard]
    Room(0x1A0A01, 0x1A0A12, 0x10B48E, 0x10B4D0), // Pop	NO	7A865 [Standard]
    Room(0x1A0A13, 0x1A0A24, 0x10B4D1, 0x10B543), // Pop	NO	7AB3B [Standard]
    Room(0x1A0A25, 0x1A0A36, 0x10B544, 0x10B5E6), // Pop	NO	7A788 [Standard]
    Room(0x1A0A37, 0x1A0A48, 0x10B5E7, 0x10B679), // Pop	NO	7AC5A [Standard]
    Room(0x1A0A49, 0x1A0A5A, 0x10B67A, 0x10B6AC), // Pop	NO	7ABD2 [Standard]
    Room(0x1A0A5B, 0x1A0A6C, 0x10B6AD, 0x10B71F), // Pop	NO	7A8B9 [Standard]
    // Room(0x1A0A6D, 0x1A0A7A, 0x10B720, 0x10B732), // Pop	NO	7B283 [Standard/Bosses]
    Room(0x1A0A7B, 0x1A0A8C, 0x10B733, 0x10B765), // Pop	NO	7AE07 [Standard]
    Room(0x1A0A8D, 0x1A0A96, 0x10B766, 0x10B768), // Pop	NO	7AD1B [Standard]
    Room(0x1A0A97, 0x1A0AA8, 0x10B769, 0x10B81B), // Pop	NO	7B37A [Standard]
    Room(0x1A0AA9, 0x1A0ABA, 0x10B81C, 0x10B88E), // Pop	NO	7AD5E [Standard]
    Room(0x1A0ABB, 0x1A0ACC, 0x10B88F, 0x10B911), // Pop	NO	7ACF0 [Standard]
    Room(0x1A0ACD, 0x1A0ADE, 0x10B912, 0x10B994), // Pop	NO	7B07A [Standard]
    Room(0x1A0ADF, 0x1A0AEC, 0x10B995, 0x10B9D7), // Pop	NO	7AE74 [Standard]
    Room(0x1A0AED, 0x1A0AFA, 0x10B9D8, 0x10BA4A), // Pop	NO	7A7DE [Standard]
    Room(0x1A0AFB, 0x1A0B10, 0x10BA4B, 0x10BB0D), // Pop	NO	7B656 [Standard]
    // Room(0x1A0B11, 0x1A0B1E, 0x10BB0E, 0x10BB30), // Pop	NO	7A98D [Standard/Bosses]
    Room(0x1A0B1F, 0x1A0B28, 0x10BB31, 0x10BB33), // Pop	NO	7B1BB [Standard]
    Room(0x1A0B29, 0x1A0B3A, 0x10BB34, 0x10BBD6), // Pop	NO	7AE32 [Standard]
    Room(0x1A0B3B, 0x1A0B4C, 0x10BBD7, 0x10BC39), // Pop	NO	7AF72 [Standard]
    Room(0x1A0B4D, 0x1A0B5A, 0x10BC3A, 0x10BC3C), // Pop	WS	7CD5C [Bosses]
    Room(0x1A0B5B, 0x1A0B6C, 0x10BC4D, 0x10BC9F), // Pop	WS	7CC27 [Bosses]
    Room(0x1A0B6D, 0x1A0B86, 0x10BCA0, 0x10BE92), // Pop	WS	7CAF6 [Standard]
    Room(0x1A0B87, 0x1A0B98, 0x10BE93, 0x10BFE5), // Pop	WS	7C98E [Standard]
    Room(0x1A0B99, 0x1A0BAE, 0x10BFE6, 0x10C138), // Pop	WS	7CA52 [Bosses]
    Room(0x1A0BAF, 0x1A0BC4, 0x10C139, 0x10C19B), // Pop	WS	7CC6F [Bosses]
    Room(0x1A0BC5, 0x1A0BCE, 0x10C19C, 0x10C19E), // Pop	WS	7CCCB [Bosses]
    Room(0x1A0BCF, 0x1A0BD8, 0x10C19F, 0x10C1A1), // Pop	WS	7CDA8 [Standard]
    Room(0x1A0BD9, 0x1A0BE2, 0x10C1A2, 0x10C1A4), // Pop	WS	7CB8B [Standard]
    Room(0x1A0BE3, 0x1A0BEC, 0x10C1A5, 0x10C1A7), // Pop	WS	7CD5C [Standard]
    Room(0x1A0BED, 0x1A0BF6, 0x10C1A8, 0x10C1AA), // Pop	WS	7CA08 [Bosses]
    Room(0x1A0BF7, 0x1A0BF6, 0x10C1AB, 0x10C1AD), // Pop	WS	7CBD5 [Standard]
    Room(0x1A0C01, 0x1A0C00, 0x10C1AE, 0x10C1E0), // Pop	WS	7C98E [Bosses]
    Room(0x1A0C13, 0x1A0C12, 0x10C1E1, 0x10C1E3), // Pop	WS	7CAAE [Standard]
    // Room(0x1A0C1D, 0x1A0C1C, 0x10C1E4, 0x10C1E6), // Pop	WS	7CD13 [Bosses]
    Room(0x1A0C27, 0x1A0C30, 0x10C1E7, 0x10C1E9), // Pop	WS	7CC27 [Standard]
    Room(0x1A0C31, 0x1A0C3A, 0x10C1EA, 0x10C1EC), // Pop	WS	7CE40 [Standard]
    Room(0x1A0C3B, 0x1A0C50, 0x10C1ED, 0x10C27F), // Pop	WS	7CCCB [Standard]
    Room(0x1A0C51, 0x1A0C5A, 0x10C280, 0x10C282), // Pop	WS	7CE40 [Bosses]
    Room(0x1A0C5B, 0x1A0C6C, 0x10C283, 0x10C3E5), // Pop	WS	7CC6F [Standard]
    Room(0x1A0C6D, 0x1A0C7A, 0x10C3E6, 0x10C5E8), // Pop	WS	7CA08 [Standard]
    Room(0x1A0C7B, 0x1A0C90, 0x10C5E9, 0x10C69B), // Pop	WS	7CAAE [Bosses]
    Room(0x1A0C91, 0x1A0C9A, 0x10C69C, 0x10C69E), // Pop	WS	7CE8A [Bosses]
    Room(0x1A0C9B, 0x1A0CA8, 0x10C69F, 0x10C6F1), // Pop	WS	7CDA8 [Bosses]
    Room(0x1A0CA9, 0x1A0CBE, 0x10C6F2, 0x10C8C4), // Pop	WS	7CA52 [Standard]
    Room(0x1A0CBF, 0x1A0CD8, 0x10C8C5, 0x10CA77), // Pop	WS	7CDF1 [Standard]
    Room(0x1A0CD9, 0x1A0CEB, 0x10CA78, 0x10CB3A), // Pop	WS	7CE8A [Standard]
    Room(0x1A0CEB, 0x1A0CF8, 0x10CB3B, 0x10CBAD), // Pop	WS	7CBD5 [Bosses]
    Room(0x1A0CF9, 0x1A0D06, 0x10CBAE, 0x10CC50), // Pop	WS	7CB8B [Bosses]
    Room(0x1A0D07, 0x1A0D1C, 0x10CC51, 0x10CCD3), // Pop	WS	7CDF1 [Bosses]
    Room(0x1A0D1D, 0x1A0D2A, 0x10CCD4, 0x10CD16), // Pop	WS	7CD13 [Standard]
    Room(0x1A0D2B, 0x1A0D40, 0x10CD17, 0x10CE69), // Pop	WS	7CAF6 [Bosses]
    Room(0x1A0D41, 0x1A0D52, 0x10CE6A, 0x10CF2C), // Pop	MA	7D0B9 [Standard]
    Room(0x1A0D53, 0x1A0D64, 0x10CF2D, 0x10CF8F), // Pop	MA	7D913 [Standard]
    Room(0x1A0D65, 0x1A0D77, 0x10CF90, 0x10CFC2), // Pop	MA	7D13B [Standard]
    Room(0x1A0D77, 0x1A0D84, 0x10CFC3, 0x10D005), // Pop	MA	7D1A3 [Standard]
    Room(0x1A0D85, 0x1A0D96, 0x10D006, 0x10D088), // Pop	MA	7D30B [Standard]
    Room(0x1A0D97, 0x1A0DA4, 0x10D089, 0x10D10B), // Pop	MA	7D72A [Standard]
    Room(0x1A0DA5, 0x1A0DAE, 0x10D10C, 0x10D10E), // Pop	MA	7D765 [Standard]
    Room(0x1A0DAF, 0x1A0DB8, 0x10D10F, 0x10D111), // Pop	MA	7D78F [Standard/Bosses]
    Room(0x1A0DB9, 0x1A0DCE, 0x10D112, 0x10D1B4), // Pop	MA	7D7E4 [Standard]
    Room(0x1A0DCF, 0x1A0DD8, 0x10D1B5, 0x10B1B7), // Pop	MA	7D81A [Standard]
    Room(0x1A0DD9, 0x1A0DE2, 0x10D1B8, 0x10B1BA), // Pop	MA	7D845 [Standard]
    Room(0x1A0DE3, 0x1A0DF0, 0x10D1BB, 0x10D1ED), // Pop	MA	7D86E [Standard]
    Room(0x1A0DF1, 0x1A0DFE, 0x10D1EE, 0x10D280), // Pop	MA	7D898 [Standard]
    Room(0x1A0DFF, 0x1A0E0F, 0x10D281, 0x10D313), // Pop	MA	7D8C5 [Standard/Events 1]
    Room(0x1A0E10, 0x1A0E1D, 0x10D314, 0x10B356), // Pop	MA	7DA60 [Standard]
    Room(0x1A0E1E, 0x1A0E2B, 0x10D357, 0x10D3A9), // Pop	MA	7D5A7 [Standard]
    Room(0x1A0E2C, 0x1A0E41, 0x10D3AA, 0x10D3EC), // Pop	MA	7D104 [Standard]
    Room(0x1A0E42, 0x1A0E53, 0x10D3ED, 0x10D44F), // Pop	MA	7D2AA [Standard]
    Room(0x1A0E54, 0x1A0E5D, 0x10D450, 0x10D452), // Pop	MA	7D9AA [Standard]
    Room(0x1A0E5E, 0x1A0E73, 0x10D453, 0x10D525), // Pop	MA	7D646 [Standard]
    Room(0x1A0E74, 0x1A0E7D, 0x10D526, 0x10D528), // Pop	MA	7CED2 [Standard]
    Room(0x1A0E7E, 0x1A0E8B, 0x10D529, 0x10D53B), // Pop	MA	7CEFB [Standard/Events 1]
    Room(0x1A0E8C, 0x1A0E95, 0x10D53C, 0x10D53E), // Pop	MA	7CF54 [Standard]
    Room(0x1A0E96, 0x1A0EA7, 0x10D53F, 0x10D5E1), // Pop	MA	7CF80 [Standard]
    Room(0x1A0EA8, 0x1A0EB5, 0x10D5E2, 0x10D634), // Pop	MA	7D055 [Standard]
    Room(0x1A0EB6, 0x1A0EC3, 0x10D635, 0x10D697), // Pop	MA	7D08A [Standard]
    Room(0x1A0EC4, 0x1A0ED5, 0x10D698, 0x10D75A), // Pop	MA	7D16D [Standard]
    Room(0x1A0ED6, 0x1A0EEB, 0x10D75B, 0x10D7ED), // Pop	MA	7D1DD [Standard]
    Room(0x1A0EEC, 0x1A0EF9, 0x10D7EE, 0x10D800), // Pop	MA	7D252 [Standard]
    Room(0x1A0EFA, 0x1A0F0B, 0x10D801, 0x10D863), // Pop	MA	7D27E [Standard]
    Room(0x1A0F0C, 0x1A0F22, 0x10D864, 0x10D956), // Pop	MA	7D2D9 [Standard]
    Room(0x1A0F22, 0x1A0F37, 0x10D957, 0x10DA09), // Pop	MA	7D340 [Standard]
    Room(0x1A0F38, 0x1A0F51, 0x10DA0A, 0x10DA3C), // Pop	MA	7D408 [Standard]
    Room(0x1A0F52, 0x1A0F5F, 0x10DA3D, 0x10DACF), // Pop	MA	7D461 [Standard]
    Room(0x1A0F60, 0x1A0F69, 0x10DAD0, 0x10DAD2), // Pop	MA	7D48E [Standard]
    Room(0x1A0F6A, 0x1A0F77, 0x10DAD3, 0x10DB65), // Pop	MA	7D4C2 [Standard]
    Room(0x1A0F78, 0x1A0F85, 0x10DB66, 0x10DC3B), // Pop	MA	7D54D [Standard]
    Room(0x1A0F94, 0x1A0FA1, 0x10DC3C, 0x10DC6E), // Pop	MA	7D5EC [Standard]
    Room(0x1A0FA2, 0x1A0FB7, 0x10DC6F, 0x10DCE1), // Pop	MA	7D617 [Standard]
    Room(0x1A0FB8, 0x1A0FC9, 0x10DCE2, 0x10DD34), // Pop	MA	7D69A [Standard]
    Room(0x1A0FCA, 0x1A0FD3, 0x10DD35, 0x10DD37), // Pop	MA	7D6D0 [Standard]
    Room(0x1A0FD4, 0x1A0FD3, 0x10DD38, 0x10DD9A), // Pop	MA	7D6FD [Standard]
    Room(0x1A0FE6, 0x1A0FE5, 0x10DD9B, 0x10DE0D), // Pop	MA	7D387 [Standard]
    Room(0x1A0FFC, 0x1A0FFB, 0x10DE0E, 0x10DE10), // Pop	MA	7D3DF [Standard]
    Room(0x1A1006, 0x1A100F, 0x10DE11, 0x10DE13), // Pop	MA	7D9D4 [Standard]
    Room(0x1A1010, 0x1A1019, 0x10DE14, 0x10DE16), // Pop	MA	7D3B6 [Standard]
    Room(0x1A101A, 0x1A1027, 0x10DE17, 0x10DE59), // Pop	MA	7D21C [Standard]
    // Room(0x1A1028, 0x1A1039, 0x10DE5A, 0x10DE5C), // Pop	MA	7D95E [Standard/Bosses]
    Room(0x1A103A, 0x1A104B, 0x10DE6D, 0x10DF62), // Pop	MA	7CFC9 [Standard]
    Room(0x1A105E, 0x1A106B, 0x10DF63, 0x10DF95), // Pop	MA	7D51E [Standard]
    Room(0x1A106C, 0x1A1079, 0x10DF96, 0x10DFD8), // Pop	MA	7D4EF [Standard]
    Room(0x1A107A, 0x1A108B, 0x10DFD9, 0x10E01B), // Pop	MA	7D9FE [Standard]
    Room(0x1A108C, 0x1A109D, 0x10E01C, 0x10E07E), // Pop	MA	7DA2B [Standard]
    Room(0x1A109E, 0x1A10AF, 0x10E07F, 0x10E101), // Pop	MA	7D017 [Standard]
    Room(0x1A10B0, 0x1A10C1, 0x10E102, 0x10E1D4), // Pop	TO	7DEDE [Standard]
    Room(0x1A10C2, 0x1A10CB, 0x10E1D5, 0x10E1D7), // Pop	TO	7DE23 [Standard]
    Room(0x1A10CC, 0x1A10DD, 0x10E1D8, 0x10E25A), // Pop	TO	7DAE1 [Standard]
    Room(0x1A10DE, 0x1A10EB, 0x10E25B, 0x10E26D), // Pop	TO	7DC65 [Standard/Events 1]
    Room(0x1A10EC, 0x1A1101, 0x10E26E, 0x10E320), // Pop	TO	7DCB1 [Standard/Events 1]
    Room(0x1A1102, 0x1A1117, 0x10E321, 0x10E387), // Pop	TO	7DD58 [Standard/Events 1]
    Room(0x1A1122, 0x1A112F, 0x10E387, 0x10E3A9), // Pop	TO	7DC19 [Standard/Events 1]
    Room(0x1A1130, 0x1A113D, 0x10E3AA, 0x10E42C), // Pop	TO	7DE4D [Standard]
    Room(0x1A113E, 0x1A1147, 0x10E42D, 0x10E43F), // Pop	TO	7DAAE [Standard]
    Room(0x1A1148, 0x1A1159, 0x10E440, 0x10E4A2), // Pop	TO	7DB31 [Standard]
    Room(0x1A115A, 0x1A116B, 0x10E4A3, 0x10E515), // Pop	TO	7DBCD [Standard]
    Room(0x1A116C, 0x1A1179, 0x10E516, 0x10E558), // Pop	TO	7DAE1 [Events 1]
    Room(0x1A117A, 0x1A1187, 0x10E559, 0x10E59B), // Pop	TO	7DB31 [Events 1]
    Room(0x1A1188, 0x1A1195, 0x10E59C, 0x10E5BE), // Pop	TO	7DE7A [Standard]
    Room(0x1A1196, 0x1A11A3, 0x10E5BF, 0x10E651), // Pop	TO	7DB7D [Events 1]
    Room(0x1A11A4, 0x1A11B1, 0x10E652, 0x10E694), // Pop	TO	7DBCD [Events 1]
    Room(0x1A11B2, 0x1A11C3, 0x10E695, 0x10E70A), // Pop	TO	7DEA7 [Standard]
    Room(0x1A11CE, 0x1A11ED, 0x10E70B, 0x10E790), // Pop	TO	7DD2E [Standard]
    Room(0x1A11EE, 0x1A11F7, 0x10E791, 0x10E793), // Pop	TO	7DF1B [Standard]
    Room(0x1A11F8, 0x1A1209, 0x10E794, 0x10E856), // Pop	TO	7DB7D [Standard]
    Room(0x1A120A, 0x1A1217, 0x10E857, 0x10E889), // Pop	TO	7DDF3 [Standard]
    // Room(0x1A1218, 0x1A1225, 0x10E88A, 0x10E8AC), // Pop	CE	7DF45 [Standard]
    // Room(0x1A1226, 0x1A1233, 0x10E8AD, 0x10E8CF), // Pop	CE	7DF8D [Standard]
    // Room(0x1A1234, 0x1A1241, 0x10E8D0, 0x10E8F2), // Pop	CE	7DFD7 [Standard]
    // Room(0x1A1242, 0x1A124F, 0x10E8F3, 0x10E915), // Pop	CE	7E021 [Standard]
    // Room(0x1A1250, 0x1A125D, 0x10E916, 0x10E938), // Pop	CE	7E06B [Standard]
    // Room(0x1A125E, 0x1A126F, 0x10E939, 0x10E95B), // Pop	CE	7E0B5 [Standard]
    // Room(0x1A1270, 0x1A127D, 0x10E95C, 0x10EA2E), // Pop	CE	7DF45 [Bosses]
    // Room(0x1A127E, 0x1A128B, 0x10EA2F, 0x10EB01), // Pop	CE	7DF8D [Bosses]
    // Room(0x1A128C, 0x1A1299, 0x10EB02, 0x10EB74), // Pop	CE	7DFD7 [Bosses]
    // Room(0x1A129A, 0x1A12A7, 0x10EB75, 0x10EB97), // Pop	CE	7E021 [Bosses]
    // Room(0x1A12A8, 0x1A12B5, 0x10EB98, 0x10EBBA), // Pop	CE	7E06B [Bosses]
    // Room(0x1A12B6, 0x1A12C2, 0x10EBBB, 0x10EBCD), // Pop	CE	7E0B5 [Bosses]
    // Room(0x1A12C3, 0x1A12C5, 0x10EBCE, 0x10EBD0), // Pop	DB	7E82C [Standard]
};

#endif