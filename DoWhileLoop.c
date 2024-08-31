#include <stdio.h>

// We want to develop a program that will accept all the number entered by user and add them together until the user enters a number less or equal to 0

int main()
{
    // while loop = checks a condition, then executes a block of code if condition is true
    // do while loop = always executes a block of code once, then checks a condition, if true, continue another loop

    int number = 0;
    int sum = 0;

    /*while(number > 0)
    {
        printf("Enter a number above 0: ");
        scanf("%d", &number);
        if(number > 0)
        {
            sum += number;
        }
    }*/

   // change the last section into a do while loop
    do{
    printf("Enter a number above 0: ");
    scanf("%d", &number);
    if(number > 0)
        {
        sum += number;
        }
    }while(number > 0); // If the condition is false, the last number will not be added

    printf("sum: %d", sum);

    return 0;
}