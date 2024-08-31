#include <stdio.h>

int main()
{
    // nested loop = a loop inside of another loop

    int rows;
    int columns;
    char symbol;

    printf("\nEnter # of rows: ");
    scanf("%d", &rows);

    printf("\nEnter # of columns: ");
    scanf("%d", &columns); 
    // This sentence got actually a new line character at its end: "\n" which is automatically taken by "symbol"

    scanf("%c"); 
    // This is a way of solving the last problem by accepting "\n" produced at the end of the last line, which enables scanf("%c", &symbol); to not accept "\n"

    printf("Enter a symbol to use: ");
    scanf("%c", &symbol);

    for (int i = 1; i <= rows; i++) // To iterate once for every row we have
    {
        for (int j = 1; j <= columns; j++) // To iterate once for every column we have
            {
                printf("%c", symbol); // Once within a row, we print every column of the symbol
                // printf("%d", j); // Once within a row, we iterate every column of the row
            }
        printf("\n"); // When all the columns of a row is finished, create a null line
    }

    return 0;
}