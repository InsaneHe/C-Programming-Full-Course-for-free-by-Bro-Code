#include <stdio.h>
#include <string.h>

// Create a struct of student which includes their names and GPA
struct Student
{
    char name[12];
    float gpa;
};

int main()
{
    struct Student student1 = {"SpongeBob", 3.0};
    struct Student student2 = {"Patrick", 2.5};
    struct Student student3 = {"Sandy", 4.0};
    struct Student student4 = {"Squidward", 2.0};

    // Create an array of Structs called students
    struct Student students[] = {student1, student2, student3, student4};

    // Display every student's name
    for(int i = 0; i < sizeof(students)/sizeof(students[0]); i++)
    {
        printf("%-12s\t", students[i].name);
        printf("%.2f\n", students[i].gpa);
    }
    
    return 0;
}
