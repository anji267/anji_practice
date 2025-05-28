#include<stdio.h>
int sum(int a,int b)
{
    int add=a+b;
    return add;
}
int main()
{
    register int a;
    register int b=10;
    printf("the value is : %d",sum(a,b));
    return 0;
}
