#include<stdio.h>
#define LIMIT 10
int main()
{
    printf("Initially defined limit is %d\n",LIMIT);
    #undef LIMIT
    #define LIMIT 15
    printf("Newly defined limit is %d\n",LIMIT);
    return 0;
}