#include<stdio.h>
#include<conio.h>
//This program finds out the maximum element in the array
void main()
{
    int num;
    printf("Enter the number of elements\n");
    scanf("%d",&num);
    int array[num];
    for(int i=0;i<num;i++)
    {
        printf("Enter the element array[%d]",i);
        scanf("%d",&array[i]);
    }
    int max=array[0];
    for(int i=0;i<num;i++)
    {
        if(array[i]>max)
        max=array[i];
    }
    printf("The maximum in the array is %d",max);
}