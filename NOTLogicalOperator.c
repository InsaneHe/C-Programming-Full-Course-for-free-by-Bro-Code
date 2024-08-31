#include <stdio.h>
#include <stdbool.h>

int main(){

    // logical operators = !(NOT) reserves the state of a condition

    bool sunny = true;

    if(!sunny){
        printf("\nIt's cloudy outside!");
    }
    else{
        printf("\nIt's sunny outside!");
    }

    return 0;
}