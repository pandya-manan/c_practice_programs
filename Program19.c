#include<stdio.h>
#include<conio.h>
#include<string.h>
//This program demonstrates the usage of strcat function
void main()
{
    char word1[10];
    char word2[10];
    printf("Enter the first word\n");
    scanf("%s",&word1);
    printf("Enter the second word\n");
    scanf("%s",&word2);
    printf(strcat(word1,word2));

}