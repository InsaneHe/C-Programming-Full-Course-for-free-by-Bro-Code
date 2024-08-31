#include <stdio.h>

int main(){

    char name[25]; // We set up a character array called "name" and it accepts 25 characters at most
    int age; // Declare a integer variable "age"

    printf("\nWhat is your name?"); // Asks the user to put in his or her name
    // scanf("%s",&name); 
    // We can see that "[]" does not need to follow "name", but this line cannot accept your full name if it includes whitespace
    
    // If what your user put in will include a whitespace, we need to change the function of getting user's input
    fgets(name, 25, stdin); // Here in "fgets()", we need to put the name of the variable, an input size and "stdin" which means standard input(but we do not need the address of operator)
    /* However, fgets() can change a new line after it was used, the result will be like this:  Hello He zh
                                                                                                , how are you?*/
    name[strlen(name)-1] = '\0';
    // Solution: Firstly, write "#include <string.h>", secondly, write the last line to eliminate the new line character
    printf("How old are you?"); // Here "printf()" is used to show the user the content so that the user will know what they should do
    scanf("%d",&age); // "scanf()" is used to accept what the user enters
    // Here the "&" is the address of the operator
    
    printf("\nHello %s, how are you?", name);
    printf("\nYou are %d years old", age);

    return 0;
}