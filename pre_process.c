#include<stdio.h>
#define LIMIT 10
#define func(num) (num*num)
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    if(num<LIMIT)
    {
       printf("Well within limit\n"); 
    }
    
    else
    {
       printf("Above Limit, you will be fined!!\n"); 
    }
    
    int result=func(num);
    printf("%d",result);
    return 0;

}