#include<stdio.h>
#include<conio.h>
//This program checks if the number is a palindrome or not
void main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    int rev=0;
    int dup=num;
    while(dup!=0)
    {
        int dig=dup%10;
        rev=(rev*10)+dig;
        dup=dup/10;
    }
    
    if(rev==num)
    {
        printf("The entered number %d is a palindrome number",num);
    }
    else
    {
        printf("The entered number %d is not a palindrome number",num);
    }
}