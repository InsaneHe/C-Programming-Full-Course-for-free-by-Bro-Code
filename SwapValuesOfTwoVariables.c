#include <stdio.h>
#include <string.h>

// Swapping variables is actually very common within sorting algorithms

int main()
{
    char x = 'X';
    char y = 'Y';
    char temp; // Introduces the third variable

    temp = x;
    x = y;
    y = temp;
    /*
    Method 2:
    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);
    However, suppose there is "strcpy(x, y)" but the length of y is less than the one of x, x will be empty
    Unless, you make "x[n]" and "y[n]" have the same "n"
    */


    printf("x = %c\n", x);
    printf("y = %c\n", y);

    return 0;
}