#include <stdio.h>
#include <string.h>

int main()
{
    char cars[][10] = {"Mustang", "Corvette", "Camaro"};

    // cars[0] = "Tesla" // We cannot straightly set the first element("Mustang") to be a string
    strcpy(cars[0], "Tesla");

    // Displays an array of strings
    for(int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++)
    {
        printf("%s\n", cars[i]);
    }

    return 0;
}
