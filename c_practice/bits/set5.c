#include<stdio.h>
int main()
{
        int n,a,b;
	printf("enter the valus : \n");
	scanf("%d%d%d",&n,&a,&b);
        n|=(1<<a)||(1<b);                                   //here a,b is position 
        printf("%d \n",n);
}

