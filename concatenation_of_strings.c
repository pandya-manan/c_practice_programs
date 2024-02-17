#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    printf("Enter your name\n");
    scanf("%s",&name);
    char lastName[10];
    printf("Enter your last name\n");
    scanf("%s",&lastName);
    
    strcat(name,lastName);
    printf("Full Name is %s",name);
    return 0;
}