#include<stdio.h>
int main()
{
        int n,a,b;
        printf("enter the valus : \n");
        scanf("%d%d%d",&n,&a,&b);
        n|=(5<<a)||(3<b);                                   //here a,b is position
        printf("%d \n",n);
}
