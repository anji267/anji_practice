#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the value of a: \n");
    scanf("%d%d",&a,&b);
    b^=(1<<a);
    printf("the toggle bit is : %d  \n",b);
    return 0;
}
