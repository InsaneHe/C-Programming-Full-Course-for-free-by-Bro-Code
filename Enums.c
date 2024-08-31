#include <stdio.h>

// Suppose we are working with days of the week
enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};
// Enums are treated as integers instead of strings

int main()
{
    // enum = abbreviation of "enumerate", a user defined type of named integer identifiers helps to make a program more readable

    enum Day today = Sun;

    printf("%d", today); // We can see "today" is treated as an integer

    if(today == 1 || today == 7) // Or "if(today == Sun || today == Mon)"
    {
        printf("\nIt's the weekend! Party time!");
    }
    else
    {
        printf("\nI have to work today :(");
    }

    return 0;
}