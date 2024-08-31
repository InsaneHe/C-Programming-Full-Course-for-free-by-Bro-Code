#include <stdio.h>

int main()
{
    // Bitwise operators = The bitwise operator performs Boolean algebra operations on the bits corresponding to the two arguments and eventually produces a result
    /*
    & = AND
    | = OR
    ^ = XOR
    << = left shift
    >> = right shift
    */
    int x = 6; // 6 = 00000110
    int y = 12; // 12 = 00001100
    int z = 0; // 0 = 00000000

    z = x & y;
    printf("AND = %d\n", z); // 4 = 00000100, as only when two bits are both 1 can the corresponding number of the result be 1

    z = x | y;
    printf("OR = %d\n", z); // 14 = 00000100, as only when two bits are both 0 can the corresponding number of the result be 0

    z = x ^ y;
    printf("XOR = %d\n", z); // 10 = 00001010, as only when two bits are the same can the corresponding number of the result be 0
    
    z = x << 1;
    printf("SHIFT LEFT = %d\n", z); // 12 = 00001100, as a left-shift operation on the bits of a number means that each bit of the number is shifted one bit to the left accordingly, with the last bit complemented by 0

    z = x >> 1;
    printf("SHIFT RIGHT = %d\n", z); // 3 = 00000011, as a right-shift operation on the bits of a number means that each bit of the number is shifted one bit to the right accordingly, with the first bit complemented by 0


    return 0;
}