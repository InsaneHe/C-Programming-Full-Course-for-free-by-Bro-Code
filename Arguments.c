#include <stdio.h>

void birthday(char x[], int y)
    // "char x[]" and "int y" are arguments
{
    printf("\nHappy birthday dear %s!", x);
    printf("\nYou are %d years old!", y);
}

int main()
{
    char name[] = "He";
    int age = 21;
    // These two are parameters and they will be passed to the birthday function

    birthday(name, age);

    return 0;
}