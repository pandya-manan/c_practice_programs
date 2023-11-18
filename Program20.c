#include<stdio.h>
#include<conio.h>
#include<string.h>
//This program checks if the entered word is a palindrome or not
void main()
{
    int num;
    printf("Enter the number of characters\n");
    scanf("%d",&num);
    char word[num];
    char reverse[num];
    int i,j;
    printf("Please enter the word\n");
    scanf("%s",&word);
    for(i=num-1,j=0;i>=0,j<num;i--,j++)
    {
       reverse[j]=word[i];
    }
    printf("%s %s\n",reverse,word);
    if(strcmp(reverse,word)==0)
    {
        printf("The entered word %s is a palindrome");
    }
    else
    {
        printf("The entered word %s is not a palindrome");
    }
}