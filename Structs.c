#include <stdio.h>
#include <string.h>

struct Player
// Every player has a name and a score
{
    char name[12];
    int score;
};

int main()
{
    // struct = collection of related members ("variables")
    // They can be of different data types
    // Listed under one name in a block of memory
    // Very similar to classes in other languages (but no methods)

    struct Player player1; // "player1" is like "instance" in Python
    struct Player player2; // "player2" is like "instance" in Python

    strcpy(player1.name, "He"); // "." here is a member axis operator
    player1.score = 4;

    strcpy(player2.name, "Zhengjie");
    player2.score = 5;

    printf("%s\n", player1.name);
    printf("%d\n", player1.score);

    printf("%s\n", player2.name);
    printf("%d\n", player2.score);

    return 0;
}