#include <stdio.h>

int main()
{
    FILE *pF = fopen("text.txt", "w"); // This is a file pointer, "fopen()" is an open function
    FILE *pF = fopen("D:\\C Projects\\C Programming Full Course for free by Bro Code\\text.txt", "w"); // Using the absolute path, and we use "\\" to make sure "\" won't be misunderstood
    // "w" for "write"; "r" for "read"; "a" for "append"(that is to say, we can continuously add things behind what we had written in the file)
    
    fprintf(pF, "Spongebob Squarepants"); // "fprintf()" is a print function and the content printed will be in the file
    // If we change the content of last line to "Patrick Star", the original content will be overwritten
    
    fclose(pF); // Close the file

    // Checks if our file does exist
    if(remove("test.txt") == 0) // If we remove this file successfully, it will be 0
    {
        printf("That file is deleted successfully");
    }
    else
    {
        printf("That file was not deleted!");
    }

    return 0;
}