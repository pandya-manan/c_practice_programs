#include<stdio.h>
#include<conio.h>
//This program finds out the factorial of the number given.
int prod=1;
void main()
{
    int num;
    printf("Enter the number whose factorial needs to be found\n");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        prod=prod*i;
    }
    printf("The factorial calculated for the number entered %d is %d",num,prod);
}