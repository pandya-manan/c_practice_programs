#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//This program finds out all the factors of a natural number
void main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    if(num<0)
    {
        printf("The entered number %d is not a natural number check again",num);
        exit(1);
    }
    
    printf("The factors of the number %d are: ",num);
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        printf("%d ",i);
    }
}