#include<stdio.h>
#include<conio.h>
//This program checks if the number is an odd or even number
void main()
{
    static int a;
    printf("Enter the number\n");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("The number is an even number %d",a);
    }
    else 
    {
        printf("The number is an odd number %d",a);
    }
}