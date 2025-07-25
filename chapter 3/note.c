//+-------+-----+-----+--------+
//| Char  | Dec | Hex |  Bin   |
//+-------+-----+-----+--------+
//| NUL   |  0  | 00  | 00000000
//| SOH   |  1  | 01  | 00000001
//| STX   |  2  | 02  | 00000010
//| ETX   |  3  | 03  | 00000011
//| EOT   |  4  | 04  | 00000100
//| ENQ   |  5  | 05  | 00000101
//| ACK   |  6  | 06  | 00000110
//BEL   |  7  | 07  | 00000111
//| BS    |  8  | 08  | 00001000
//| TAB   |  9  | 09  | 00001001
//| LF    | 10  | 0A  | 00001010
//| VT    | 11  | 0B  | 00001011
//| FF    | 12  | 0C  | 00001100
//| CR    | 13  | 0D  | 00001101
//| SO    | 14  | 0E  | 00001110
//| SI    | 15  | 0F  | 00001111
//| DLE   | 16  | 10  | 00010000
//| DC1   | 17  | 11  | 00010001
//| DC2   | 18  | 12  | 00010010
//| DC3   | 19  | 13  | 00010011
//| DC4   | 20  | 14  | 00010100
//| NAK   | 21  | 15  | 00010101
//| SYN   | 22  | 16  | 00010110
//| ETB   | 23  | 17  | 00010111
//| CAN   | 24  | 18  | 00011000
//| EM    | 25  | 19  | 00011001
//| SUB   | 26  | 1A  | 00011010
//| ESC   | 27  | 1B  | 00011011
//| FS    | 28  | 1C  | 00011100
//| GS    | 29  | 1D  | 00011101
//| RS    | 30  | 1E  | 00011110
//| US    | 31  | 1F  | 00011111
//| SPACE | 32  | 20  | 00100000
//| !     | 33  | 21  | 00100001
//| "     | 34  | 22  | 00100010
//| #     | 35  | 23  | 00100011
//| $     | 36  | 24  | 00100100
//| %     | 37  | 25  | 00100101
//| &     | 38  | 26  | 00100110
//| '     | 39  | 27  | 00100111
//| (     | 40  | 28  | 00101000
//| )     | 41  | 29  | 00101001
//| *     | 42  | 2A  | 00101010
//| +     | 43  | 2B  | 00101011
//| ,     | 44  | 2C  | 00101100
//| -     | 45  | 2D  | 00101101
//| .     | 46  | 2E  | 00101110
//| /     | 47  | 2F  | 00101111
//| 0     | 48  | 30  | 00110000
//| 1     | 49  | 31  | 00110001
//| 2     | 50  | 32  | 00110010
//| 3     | 51  | 33  | 00110011
//| 4     | 52  | 34  | 00110100
//| 5     | 53  | 35  | 00110101
//| 6     | 54  | 36  | 00110110
//| 7     | 55  | 37  | 00110111
//| 8     | 56  | 38  | 00111000
//| 9     | 57  | 39  | 00111001
//| :     | 58  | 3A  | 00111010
//| ;     | 59  | 3B  | 00111011
//| <     | 60  | 3C  | 00111100
//| =     | 61  | 3D  | 00111101
//| >     | 62  | 3E  | 00111110
//| ?     | 63  | 3F  | 00111111
//| @     | 64  | 40  | 01000000
//| A     | 65  | 41  | 01000001
//| B     | 66  | 42  | 01000010
//| C     | 67  | 43  | 01000011
//| D     | 68  | 44  | 01000100
//| E     | 69  | 45  | 01000101
//| F     | 70  | 46  | 01000110
//| G     | 71  | 47  | 01000111
//| H     | 72  | 48  | 01001000
//| I     | 73  | 49  | 01001001
//| J     | 74  | 4A  | 01001010
//| K     | 75  | 4B  | 01001011
//| L     | 76  | 4C  | 01001100
//| M     | 77  | 4D  | 01001101
//| N     | 78  | 4E  | 01001110
//| O     | 79  | 4F  | 01001111
//| P     | 80  | 50  | 01010000
//| Q     | 81  | 51  | 01010001
//| R     | 82  | 52  | 01010010
//| S     | 83  | 53  | 01010011
//| T     | 84  | 54  | 01010100
//| U     | 85  | 55  | 01010101
//| V     | 86  | 56  | 01010110
//| W     | 87  | 57  | 01010111
//| X     | 88  | 58  | 01011000
//| Y     | 89  | 59  | 01011001
//| Z     | 90  | 5A  | 01011010
//| [     | 91  | 5B  | 01011011
//| \     | 92  | 5C  | 01011100
//|// ]     | 93  | 5D  | 01011101
//| ^     | 94  | 5E  | 01011110
//| _     | 95  | 5F  | 01011111
//| `     | 96  | 60  | 01100000
//| a     | 97  | 61  | 01100001
//| b     | 98  | 62  | 01100010
//| c     | 99  | 63  | 01100011
///| d     |100  | 64  | 01100100
//| e     |101  | 65  | 01100100
//| f     |102  | 66  | 01100110
//| g     |103  | 67  | 01100111
//| h     |104  | 68  | 01101000
//| i     |105  | 69  | 01101001
//| j     |106  | 6A  | 01101010
//| k     |107  | 6B  | 01101011/
//| l     |108  | 6C  | 01101100
//| m     |109  | 6D  | 01101101
//| n     |110  | 6E  | 01101110//
//| o     |111  | 6F  | 01101111
//| p     |112  | 70  | 01110000
//| q     |113  | 71  | 01110001
//|/ r     |114  | 72  | 01110010
//| s     |115  | 73  | 01110011
//| t     |116  | 74  | 01110100
//| u     |117  | 75  | 01110101
//| v     |118  | 76  | 01110110
//| w     |119  | 77  | 01110111
//|// x     |120  | 78  | 01111000
//| y     |121  | 79  | 01111001
//| z     |122  | 7A  | 01111010
//| {     |123  | 7B  | 01111011
//| |     |124  | 7C  | 01111100
//| }     |125  | 7D  | 01111101
//| ~     |126  | 7E  | 01111110
//| DEL   |127  | 7F  | 01111111
//+-------+-----+-----+--------+
