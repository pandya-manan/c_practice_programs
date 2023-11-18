#include<stdio.h>
#include<conio.h>
//This program finds out the average of all the elements in the array
void main()
{
    int num;
    printf("Enter the number of elements\n");
    scanf("%d",&num);
    int array[num];
    int sum=0;
    for(int i=0;i<num;i++)
    {
        printf("Enter the element for array[%d]",i);
        scanf("%d",&array[i]);
        sum=sum+array[i];
    }
    float avg=(float)sum/num;
    printf("The average of all the elements in the array is %f",avg);
}