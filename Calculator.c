#include<stdio.h>
#include<conio.h>
//Simple Calculator Program
void main()
{
    int choice;
    int a,b;
    while(1)
    {
        printf("Enter the choice from the following options\n");
        printf("1.Addition\n");
        printf("2.Subtraction\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");
        printf("5.Exit\n");
        scanf("%d",&choice);
        if(choice==5)
        exit(0);
        switch(choice)
        {
            case 1: printf("Enter the first number\n");
                    scanf("%d",&a);
                    printf("Enter the second number\n");
                    scanf("%d",&b);
                    printf("The sum is %d\n",(a+b));
                    break;
            case 2: printf("Enter the first number\n");
                    scanf("%d",&a);
                    printf("Enter the second number\n");
                    scanf("%d",&b);
                    printf("The difference is %d\n",(a-b));
                    break;
            case 3: printf("Enter the first number\n");
                    scanf("%d",&a);
                    printf("Enter the second number\n");
                    scanf("%d",&b);
                    printf("The product is %d\n",(a*b));
                    break;
            case 4: printf("Enter the first number\n");
                    scanf("%d",&a);
                    printf("Enter the second number\n");
                    scanf("%d",&b);
                    printf("The quotient is %d\n",(a/b));
                    break;
            default: printf("Enter the right choice");
                    break;
        }



    }
}