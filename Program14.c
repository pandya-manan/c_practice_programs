#include<stdio.h>
//This program accepts elements from the user for 2D Array and then prints out in that format
void main()
{
    int rows,columns;
    printf("Enter the number of rows\n");
    scanf("%d",&rows);
    printf("Entre the number of columns\n");
    scanf("%d",&columns);
    int num[rows][columns];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            printf("Enter the value for num[%d][%d]",i,j);
            scanf("%d",&num[i][j]);
        }
    }
    printf("Printing the elements of the array \n");
    for(int i=0;i<rows;i++)
    {
        
        for(int j=0;j<columns;j++)
        {
            printf("%d\t",num[i][j]);
        }
        printf("\n");
    }
}