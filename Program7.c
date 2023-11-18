#include<stdio.h>
#include<conio.h>
//This program checks if the year is a leap year or not using if else 
void main()
{
    int year;
    printf("Enter the year which needs to be checked if it is a leap year or not\n");
    scanf("%d",&year);
    if(year%400==0)
    {
        printf("The year is a leap year %d",year);
    }
    else if(year%100==0)
    {
        printf("The year is NOT a leap year %d",year);
    }
    else if (year%4==0)
    {
        printf("The year is a leap year %d",year);
    }
    else
    {
        printf("The year is NOT a leap year %d",year);
    }
}