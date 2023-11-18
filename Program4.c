#include<stdio.h>
#include<conio.h>
//This program finds out the largest number among the 3 numbers using only if statement
void main()
{
    int a,b,c;
    printf("Enter the first number\n");
    scanf("%d",&a);
    printf("Enter the second number\n");
    scanf("%d",&b);
    printf("Enter the third number\n");
    scanf("%d",&c);
    if(a>=b && a>=c)
    {
        printf("The largest number is %d",a);
    }
    else if (b>=a && b>=c)
    {
        printf("The largest number is %d",b);
    }
    else 
    {
        printf("The largest number is %d",c);
    }
}