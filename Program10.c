#include<stdio.h>
#include<conio.h>
//This program finds out all the factors for a natural number
void main()
{
    int num;
    printf("Enter the number for which the factors need to be found\n");
    scanf("%d",&num);
    if(num<=0)
    {
        printf("Please enter the valid number");
        exit(0);
    }
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            printf("%d is a factor of %d\n",i,num);
        }
    }
}