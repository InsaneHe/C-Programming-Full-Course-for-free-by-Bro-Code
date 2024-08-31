#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Pseudo random numbers = a set of values or elements that are statistically random (Don't use these for any sort of cryptographic security)
    srand(time(0)); // "s" for "seed", "rand" for random. And we use current time as the seed
    
    int number1 = (rand() % 6) + 1; // rand() will give you a number between 0 and 32767
    // Here we use "%" to indicate the maximum number we would like to generate
    // Now it will give us a number between 0+1 and 5+1, that is between 1 and 6
    int number2 = (rand() % 6) + 1;
    int number3 = (rand() % 6) + 1;

    printf("%d\n", number1);
    printf("%d\n", number2);
    printf("%d\n", number3);

    return 0;
}