#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MIN = 1; // This is the minimum number that we will generate when we generate a random number
    const int MAX = 100; // This is the maximum number that we will generate when we generate a random number
    int guess;
    int guesses;
    int answer;

    srand(time(0)); // Uses the current time as a seed

    answer = (rand() % MAX) + MIN; // Generates a random number between MIN and MAX

    do{
        printf("Enter a guess: ");
        scanf("%d", &guess);
        if(guess > answer)
        {
            printf("Too high!\n");
        }
        else if(guess < answer)
        {
            printf("Too low!\n");
        }
        else{
            printf("CORRECT!\n");
        }
        guesses++;
    }while(guess != answer);

    printf("answer: %d\n", answer);
    printf("guesses: %d\n", guesses);

    return 0;
}
