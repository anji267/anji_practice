#include<stdio.h>
int main()
{
	int m,n;
	printf("enter the values of m,n: \n");
	scanf("%d%d",&m,&n);
	n&=(1<<m);
	printf("the reset bit value is :%d \n",n);
	return 0;
}

