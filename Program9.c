#include<stdio.h>
#include<conio.h>
//This program generates a multiplication table for the number and number of terms given
void main()
{
    int num,range;
    printf("Enter the number whose multiplication table needs to be generated\n");
    scanf("%d",&num);
    printf("Enter the range upto which the multiplication table needs to be generated\n");
    scanf("%d",&range);
    
    printf("The Multiplication Table is as follows for the number %d upto % terms",num,range);
    for(int i=0;i<=range;i++)
    {
        printf("%d * %d = %d\n",num,i,(num*i));
    }


}