#include <stdio.h>

int main()
{
    // 2D array = an array, where each element is an entire array
    // useful if you need a matrix, grid, or table of data
    /*int numbers[2][3] = {
                         {1, 2, 3}, 
                         {4, 5, 6}
                        };
    // The 1st set of "[]"(number of rows) will be added a number illustrating the maximum number of arrays in the 2-dimensional array
    // The 2nd set of "[]"(number of columns) will be added a number illustrating the maximum number of elements in each array of the 2-dimensional array*/

    int numbers[2][3]; // Sets a 2D array
    int rows = sizeof(numbers) / sizeof(numbers[0]); // Uses the size of whole array to be divided by the number of columns of a row
    int columns = sizeof(numbers[0]) / sizeof(numbers[0][0]); // Uses the size of whole array to be divided by the number of rows of a column

    printf("rows: %d\n", rows);
    printf("columns: %d\n", columns);
    
    numbers[0][0] = 1; // We set the first element to be 1(whose index is: 0, 0)
    numbers[0][1] = 2;
    numbers[0][2] = 3;
    numbers[1][0] = 4;
    numbers[1][1] = 5;
    numbers[1][2] = 6;
    // Attention!: The index of the 2D array[x][y] means that this array has x rows(0~x-1) and y columns(0~y-1)

    // Show every element of the 2D array
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}
