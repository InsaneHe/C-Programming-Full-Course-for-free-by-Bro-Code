#include <stdio.h>

void hello(char name[], int age); // function prototype

int main()
{
    // function prototype = a function declaration without a body, before main()
    // Many C compilers do not check for parameter matching, missing arguments will result in unexpected behavior
    // Ensures that calls to a function are made with the correct arguments by flagging an error if arguments are missing
    char name[] = "He";
    int age = 21;

    hello(name, age); // We might just write one argument into "()" instead of two: hello(name);
    // But we got a function prototype, so it will be called with a warning to remind us of missing one argument

    return 0;
}

void hello(char name[], int age)
{
    printf("\nHello %s", name);
    printf("\nYou are %d years old", age);
}