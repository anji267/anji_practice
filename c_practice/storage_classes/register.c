#include<stdio.h>
int main()
{
        register int a;
        register int b=10;
        printf("the values are :%d\t%d\n",a,b); // a is garbage value
        return 0;
}
