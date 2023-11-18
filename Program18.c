#include <stdio.h>
#include <string.h>
//This program demonstrates array of structures and dynamically accepts user inputs.
struct Student
{
    int rollNo;
    char name[10];
    char city[10];
    int marks;
    int class;
};

void printStudents(struct Student s[], int num)
{
    int i;

    printf("Roll No\tName\tCity\t\tMarks\tClass\n");
    for (i = 0; i < num; i++)
    {
        printf("%d\t%s\t%s\t%d\t%d\n", s[i].rollNo, s[i].name, s[i].city, s[i].marks, s[i].class);
    }
}

int main()
{
    int num;
    printf("Enter the number of students\n");
    scanf("%d", &num);

    struct Student s[num];

    printf("Please enter the details for the %d students\n", num);
    for (int i = 0; i < num; i++)
    {
        printf("Enter the roll for s[%d]\n", i);
        scanf("%d", &s[i].rollNo);

        printf("Enter the name for s[%d]\n", i);
        scanf("%s", s[i].name);

        printf("Enter the city for s[%d]\n", i);
        scanf("%s", s[i].city);

        printf("Enter the marks for s[%d]\n", i);
        scanf("%d", &s[i].marks);

        printf("Enter the class for s[%d]\n", i);
        scanf("%d", &s[i].class);
    }

    printStudents(s, num);

    return 0;
}
