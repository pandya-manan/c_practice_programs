#include<stdio.h>
#include<conio.h>
//This program finds out both the largest and smallest elements in the array
void main()
{
    int num;
    printf("Enter the number of elements\n");
    scanf("%d",&num);
    int array[num];
    for(int i=0;i<num;i++)
    {
        printf("Enter the element for array[%d]",i);
        scanf("%d",&array[i]);
    }
    int max=array[0];
    for(int i=0;i<num;i++)
    {
        if(array[i]>max)
        max=array[i];
    }
    int min=array[0];
    for(int i=0;i<num;i++)
    {
        if(array[i]<min)
        min=array[i];
    }
    printf("The largest and smallest elements are %d %d",max,min);

}