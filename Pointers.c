#include <stdio.h>

// We can use the pointer as an argument to pass it to a function
void printAge(int *pAge)
{
    printf("You are %d years old\n", *pAge);
}

/*void printAge(int age)
{
    printf("You are %d years old\n", age);
}*/

int main()
{
    // pointer = a "variable-like" reference that holds a memory address to another variable, array, etc.
    // Some tasks are performed more easily with pointers
    // "*" = indirection operator(the value at an address)

    int age = 21;
    // int *pAge = &age; // This is a pointer, be sure that the data type of the pointer should be the same as the variable we are pointing to
    int *pAge = NULL; // Good practice to assign NULL if declaring a pointer
    pAge = &age;

    /*printf("address of age: %p\n", &age); // "&" here means the address of a variable
    printf("value of pAge: %p\n", pAge); // Be advised, the value of a pointer is an address

    printf("value of age: %d\n", age);
    printf("value at stored address: %d\n", *pAge); // "*" here means the value stored at an address

    printf("size of age: %d bytes\n", sizeof(age));
    printf("size of pAge: %p bytes\n", sizeof(pAge));*/

    // printAge(age);
    printAge(pAge);

    return 0;
}