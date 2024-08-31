#include <stdio.h>
#include <string.h>

typedef char user[25]; // Defines the character array of 25 bytes as "user"(a nickname)

/*
typedef struct
{
    char name[25];
    char password[12];
    int id;
} User;
Here we put the nickname "User" at the end of the "}"
*/

int main()
{
    // typedef = reserved keyword that gives an existing datatype a "nickname"
    // char user1[25] = "He";
    user user1 = "He";
    // After using "typedef" to define the character array of 25 bytes as "user"
    
    /*
    User user1 = {"He", "password123", 123456789};

    Here "User" is the nickname of the struct: "User"

    User user2 = {"Zhengjie", "password321", 987654321};

    printf("%s\n", user1.name);
    printf("%s\n", user1.password);
    printf("%d\n", user1.id);
    printf("\n")

    printf("%s\n", user2.name);
    printf("%s\n", user2.password);
    printf("%d\n", user2.id);
    printf("\n")
    */

    return 0;
}