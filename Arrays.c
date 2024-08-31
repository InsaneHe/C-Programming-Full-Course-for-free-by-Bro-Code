#include <stdio.h>

int main()
{
    // array = a data structure that can store many values of the same data type

    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0}; 
    // double prices[] = {5.0};
    // We can turn this variable "prices" into an array by adding "[]" after "prices" and adding "{}" around the value(s)

    // Print one of these numbers
    printf("$%.2lf", prices[0]); // We need to add an index in the "[]"

    /*
    2nd way of setting an array:
    double prices[5]; // This means that we want to create an array with 5 elements
    prices[0] = 5.0; // This means we want the first element of the array to be 5.0
    
    3rd way of setting an array:
    double prices[10] = {5.0, 10.0, 15.0, 25.0, 20.0}; // This means we want to create an array with 10 elements and we immediately set first 5 elements
    */

    return 0;
}