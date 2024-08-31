#include <stdio.h>

int main()
{
    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0};

    printf("%d bytes\n", sizeof(prices));
    // Each double uses up 8 bytes, so prices[] uses up 6*8 = 48 bytes together

    for (int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++)
    // As different elements in "prices" are the same data type, the size of each of them is the same
    // To calculate how many times it has to loop: use "sizeof(prices) / sizeof(prices[0])", if we just use "sizeof(prices)" which is 48, it will loop 48 times
    {
        printf("$%.2lf\n", prices[i]);
    }

    return 0;
}
