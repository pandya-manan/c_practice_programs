#include<stdio.h>
#include<conio.h>
//This program calculates the sum of the terms entered. 
void main()
{
    int n;
    static int sum=0;
    printf("Enter the number of terms whose sum needs to be calculated\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("The sum of the %d terms is %d",n,sum);

}