#include <stdio.h>

int main()
{
    // for loop = repeats a section of code a limited amount of times

    for(int i = 1; i <= 10; i++) 
    // Here "i" is the index and we declare it as 1 at the beginning, and then we set the condition that "i" must be less than or equal to 10, and then we increment "i" by 1 after each iteration
    {
        printf("%d\n", i); // Here we print the value of "i" and then increment it by 1
    }


    return 0;
}