#include <stdio.h>

int main()
{
    FILE *pF = fopen("D:\\C Projects\\C Programming Full Course for free by Bro Code\\poem.txt", "r");
    
    // Creates a buffer which acts like a container, an array of characters to hold one line of our text document, one line at a time
    char buffer[255];

    // Reads all lines in our file

    if(pF == NULL) // Checks if that file really exists
    {
        printf("Unable to open file!\n");
    }
    else
    {
        while(fgets(buffer, 255, pF) != NULL) // Reads a single line of our file
        {// "buffer" is what we are inserting a line of text into a maximum input size, and we set it to be 255 to match our buffer and then a pointer to the file that we are opening
            printf("%s\n", buffer); // Reads whatever at the top of the file
        }
    }


    fclose(pF);

    return 0;
}

