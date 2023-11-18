#include<stdio.h>
#include<conio.h>
#include<string.h>
//This program checks if the entered character is a vowel or not. 
void main()
{
    static char a;
    printf("Enter the character\n");
    scanf("%c",&a);
   
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
    {
        printf("The entered character is a vowel %c",a);
    }
    else 
    {
        printf("The entered character is a consonant %c",a);
    }

}