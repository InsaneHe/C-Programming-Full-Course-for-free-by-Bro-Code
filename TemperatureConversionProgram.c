#include <stdio.h>
#include <ctype.h> // ctype.h is used for character functions

int main(){

    char unit;
    float temp;

    printf("\nIs the temperature in (F) or (C)?");
    scanf("%c",&unit);

    unit = toupper(unit); // This is used as a "to uppercase" function to make "c" or "f" become "C" or "F"

    if(unit == 'C'){
        printf("\nEnter the temp in Celsius: ");
        scanf("%f",&temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nThe temp in Fahrenheit is: %.1f", temp);
    }
    else if(unit == 'F'){
        printf("\nEnter the temp in Fahrenheit: ");
        scanf("%f",&temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\nThe temp in Celsius is: %.1f", temp);
    }
    else{
        printf("\n %c is not a unit of measurement", unit);
    }
}