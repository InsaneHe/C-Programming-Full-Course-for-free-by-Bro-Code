#include <stdio.h>

int main(){

    // switch = A more efficient alternative to using many "else if" statements
    // allows a value to be tested for equality against many cases

    char grade;

    printf("\nEnter a letter grade:");
    scanf("%c",&grade);
    
/*  if(grade == 'A'){
        printf("Perfect!\n");
    }
    else if(grade == 'B'){
        printf("You did good!\n");
    }
    else if(grade == 'C'){
        printf("You did okay\n");
    }
    else if(grade == 'D'){
        printf("At least it's not an F\n");
    }
    else if(grade == 'F'){
        printf("YOU FAILED\n");
}*/

    switch(grade){
        case 'A': // If grade is 'A', then execute this line
            printf("Perfect!\n");
            break; 
            // "break" is used to break out of the switch and exit, 
            // if it does not exist here, then if you enter 'A', it will print all the statements together
        case 'B': // If grade is 'B', then execute this line
            printf("You did good!\n");
            break;
        case 'C': // If grade is 'C', then execute this line
            printf("You did okay!\n");
            break;
        case 'D': // If grade is 'D', then execute this line
            printf("At least it's not an F!\n");
            break;
        case 'F': // If grade is 'F', then execute this line
            printf("YOU FAILED!\n");
            break;
        default: // If none of the above cases matches, then this line will be executed
            printf("Please enter only valid grades!\n");
    }

    return 0;
}