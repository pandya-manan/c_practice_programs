#include<stdio.h>
#include<conio.h>
//This program finds out the length of the string
void main()
{
    char word[1000];
    printf("Enter the word\n");
    scanf("%s",&word);
    int i=0,length=0;
    while(word[i]!='\0')
    {
        length+=1;
        i=i+1;

    }
    printf("The length of the word %s is %d",word,length);

}