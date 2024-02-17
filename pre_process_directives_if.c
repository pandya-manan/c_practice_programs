#include<stdio.h>
#define SQUARE 10
#define LIMIT 20
int main()
{
    #ifdef LIMIT
        printf("LIMIT is defined\n");
    #elif defined(SQUARE)
        printf("Square is defined\n");
    #else
        #error "Neither LIMIT nor SQUARE is defined"
    #endif

    #ifndef SQUARE
        printf("Square is not defined\n");
    #else
        printf("Square is defined");
    #endif
    return 0;
}