#include<stdio.h>
#include<conio.h>
//This Program displays the alphabets in upper case and lower case based on the ASCII Values
void main()
{
    int A=65;
    for (int i=A;i<91;i++)
    {
       char alpha=(char)i;
       printf("%c \t",alpha);
    }

    int B=97;
    for(int j=B;j<=122;j++)
    {
        char alpha=(char)j;
        printf("%c \t",alpha);
    }
}