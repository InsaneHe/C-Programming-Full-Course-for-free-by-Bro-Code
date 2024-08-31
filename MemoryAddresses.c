#include <stdio.h>

int main()
{
    // memory = an array of bytes within RAM(street)
    // memory block = a single unit(byte) within memory, used to hold some value(person)
    // memory address = the address of where a memory block is located(house address)

    char a = 'X'; // When we declaring a variable, we are allocating memory for that variable
    char b = 'Y'; // Each of these variables uses up one memory block
    char c = 'Z';

    // Find a size of each of these characters
    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n", sizeof(c));

    // Display the address
    printf("%p\n", &a); // 000000000061FE1F (in hexadecimal values: 0~9+A~F)
    printf("%p\n", &b); // 000000000061FE1E
    printf("%p\n", &c); // 000000000061FE1D
    // We can see that these variables use up continuous memory blocks, go down by 1

    short d = 'X'; // Each of these variables uses up two memory block
    int e = 1;
    double f = 2.0;
    char g[1];

    // Find a size of each of these characters
    printf("%d bytes\n", sizeof(d));
    printf("%d bytes\n", sizeof(e));
    printf("%d bytes\n", sizeof(f));
    printf("%d bytes\n", sizeof(g));

    // Display the address
    printf("%p\n", &d);
    printf("%p\n", &e);
    printf("%p\n", &f);
    printf("%p\n", &g);
    // We can see that "short" variables use up continuous memory blocks, but go down by 2

    // integers use up 4 bytes; doubles use up 8 bytes, "array[n]" uses up n byte
    return 0;
}