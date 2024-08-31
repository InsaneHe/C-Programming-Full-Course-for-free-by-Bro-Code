#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

// Declare some global variables
char board[3][3]; // Our game board
const char PLAYER = 'X'; // Set myself to be 'X'
const char COMPUTER = 'O'; // Set computer to be 'O'

void resetBoard(); // The first function, the "Board" will be a 2D character array
void printBoard(); // The second function
int checkFreeSpaces(); // The third function, returns 0 when the game is over, there is no spaces to move
void playerMove(); // The fourth function
void computerMove(); // The fifth function
char checkWinner(); // The sixth function
void printWinner(char); // The seventh function

int main()
{
    char winner = ' '; // Sets the winner to be empty as there is no winner for now
    char response;

    do
    {
        winner = ' ';
        response = ' ';
        resetBoard(); // Reset our board

        while(winner == ' ' && checkFreeSpaces() != 0)
        {
            printBoard(); // Print the board

            playerMove(); // Player move
            winner = checkWinner(); // Check if there is a winner
            if(winner != ' ' || checkFreeSpaces() == 0) // All places are occupied and no winner
            {
                break;
            }

            computerMove(); // Computer move
            winner = checkWinner(); // Check if there is a winner
            if(winner != ' ' || checkFreeSpaces() == 0) // All places are occupied and no winner
            {
                break;
            }
        }

        printBoard();
        printWinner(winner);

        printf("\nWould you like to play again? (Y/N): ");
        scanf("%c");
        scanf("%c", &response);
        response = toupper(response);
    } while (response == 'Y');
    
    printf("Thanks for playing!");

    return 0;
}

// resetBoard function
void resetBoard()
{
    for(int i = 0; i < 3; i++) // The outer for loop is for the row
    {
        for(int j = 0; j < 3; j++) // The inner for loop is for the column
        {
            board[i][j] = ' '; // Set the board to be empty
        }
    }
}

// printBoard function
void printBoard()
{
    printf(" %c | %c | %c ", board[0][0], board[0][1], board[0][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[1][0], board[1][1], board[1][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}

// checkFreeSpaces function
int checkFreeSpaces()
{
    int freeSpaces = 9;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(board[i][j] != ' ')
            {
                freeSpaces--;
                // Every time we found there is a non-free space, freeSpaces will decrease by 1
            }
        }
    }
    return freeSpaces;
}

// playerMove function
void playerMove()
{
    int x; // Row number
    int y; // Column number

    do
    {
        printf("Enter row #(1-3): "); // Ask the player to enter which row he wants to move to
        scanf("%d", &x);
        x--; // Remember that in C, the number starts from 0, so we need to decrease the number by 1

        printf("Enter column #(1-3): "); // Ask the player to enter which column he wants to move to
        scanf("%d", &y);
        y--; // Remember that in C, the number starts from 0, so we need to decrease the number by 1

        if(board[x][y] != ' ') // Check if the coordinates the user gives is occupied or not
        {
            printf("Invalid move!\n");
        }
        else
        {
            board[x][y] = PLAYER;
            break;
        }
    } while(board[x][y] != ' ');
}

// computerMove function
void computerMove()
{
    // Creates a seed based on current time
    srand(time(0));
    int x;
    int y;

    // Checks if we have any free spaces available
    if(checkFreeSpaces() > 0)
    {
        do
        {
        // Generates two random numbers between 0 and 2
            x = rand() % 3;
            y = rand() % 3;
        } while(board[x][y] != ' ');

        board[x][y] = COMPUTER;
    }
    else
    {
        printWinner(' '); // There is no winner
    }
}

// checkWinner function
char checkWinner()
{
    // Check rows
    for(int i = 0; i < 3; i++)
    {
        if(board[i][0] == board[i][1] && board[i][0] == board[i][2])
        // If they are all consistent, we have a winner
        {
            return board[i][0];
        }
    }

    // Check columns
    for(int i = 0; i < 3; i++)
    {
        if(board[0][i] == board[1][i] && board[0][i] == board[2][i])
        // If they are all consistent, we have a winner
        {
            return board[0][i];
        }
    }


    // Check diagonals
    if(board[0][0] == board[1][1] && board[0][0] == board[2][2])
    // If they are all consistent, we have a winner
    {
        return board[0][0];
    }

    if(board[0][2] == board[1][1] && board[0][2] == board[2][0])
    // If they are all consistent, we have a winner
    {
        return board[0][2];
    }

    return ' '; // If all conditions above are not fulfilled, then there is no winner now
}

void printWinner(char winner)
{
    if(winner == PLAYER)
    {
        printf("YOU WIN!");
    }
    else if(winner == COMPUTER)
    {
        printf("YOU LOSE!");
    }
    else
    {
        printf("IT'S A TIE!");
    }
}

