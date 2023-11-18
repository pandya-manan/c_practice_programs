#include<stdio.h>
#include<conio.h>
//This program checks if the entered number is prime number
int primeNumberCheck(int num)
{
    int i;
    for(i=2;i<=num/2;i++)
    {
        if(num % i != 0)
            continue;
        else
            return 1;
    }
    return 0;
}
void main()
{
    int num;
    int result=0;
    printf("Enter a number to check if it is a prime number or not\n");
    scanf("%d",&num);
    result=primeNumberCheck(num);
    if(result==1)
    {
        printf("The entered number is not a prime number %d",num);
    }
    else 
    {
        printf("The entered number is a prime number %d",num);
    }
}
