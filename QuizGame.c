#include <stdio.h>
#include <ctype.h>

int main()
{
    char questions[][100] = {   "1. What year did the C language debut?: ", 
                                "2. Who is credited with creating C?: ", 
                                "3. What is the predecessor of C?: "};

    char options[][100] = { "A. 1969", "B. 1972", "C. 1975", "D. 1999", 
                            "A. Dennis Ritchie", "B. Nikola Tesla", "C. John Carmack", "D. Doc Brown", 
                            "A. Objective C", "B. B", "C. C++", "D. C#"};
    
    char answers[3] = {'B', 'A', 'B'};
    int numbOfQuestions = sizeof(questions) / sizeof(questions[0]);

    char guess; // Records the answer we guess
    int score; // Records the score we get

    printf("QUIZ GAME\n");

    for(int i = 0; i < numbOfQuestions; i++)
    {
        printf("\n%s\n", questions[i]);

        for(int j = (i * 4); j < (i * 4) + 4; j++)
        // Each element in options array is 4 bytes long
        {
            printf("%s\n", options[j]);
        }

        printf("guess: "); // Ask the user to enter his guess after each question
        scanf("%c", &guess);
        scanf("%c"); // Clears "\n" from input buffer of last line: "scanf("%c", &guess);"
    
        guess = toupper(guess); // Converts the guess to uppercase

        if(guess == answers[i])
        {
            printf("CORRECT!\n");
            score++;
        }
        else
        {
            printf("WRONG!\n");
        }
    }

    printf("FINAL SCORE: %d/%d\n", score, numbOfQuestions);

    return 0;
}
