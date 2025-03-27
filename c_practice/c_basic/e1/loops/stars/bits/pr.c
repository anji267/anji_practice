#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of decimal : \n");
    scanf("%d",&n);
    if(n==0)
    {
        printf("0");
    }
    if(n>0)
    {
        n=n/2;
        printf("%d ",n % 2);
    }
    return 0;
}

