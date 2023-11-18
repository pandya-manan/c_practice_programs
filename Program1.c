#include<stdio.h>
#include<conio.h>
//This program checks if the number is positive, negative or zero.
void main()
{
    static int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    if(a<0)
    {
        printf("The number is negative %d",a);
    }
    else if (a>0)
    {
        printf("The number is positive %d",a);
        
    }
    else 
    {
        printf("The number is zero %d",a);
    }
}