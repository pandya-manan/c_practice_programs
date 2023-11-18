#include<stdio.h>
#include<conio.h>
//This program lists out all the prime numbers between two intervals
int primeNumbersBetweenIntervals(int num)
{
    int i;
    for(i=2;i<=num/2;i++)
    {
        if(num%i!=0)
            continue;
        else
            return 1;

    }
    return 0;
}
void main()
{
    int lower,higher,result=0;
    printf("Enter the lower interval \n");
    scanf("%d",&lower);
    printf("Enter the higher interval \n");
    scanf("%d",&higher);
    for(int j=lower;j<=higher;j++)
    {
        result=primeNumbersBetweenIntervals(j);
        if(result==0)
        printf("%d\n",j);
    }
}