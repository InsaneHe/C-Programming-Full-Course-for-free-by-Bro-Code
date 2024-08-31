#include <stdio.h>

int main()
{
    // continue = skips rest of code & forces the next iteration of the loop
    // break = exits a loop/switch

    for (int i = 1; i <= 20; i++) // We want to skip i = 13
    {
        if (i == 13)
        {
            continue;
            // break; // Once we reach 13, we will exit the loop which means the series we print will be 1~12
        }
        printf("%d\n", i);
    }

    return 0;
}