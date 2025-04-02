#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the values of a,b,c  \n");
	scanf("%d%d%d",&a,&b,&c);
	if((a<b)&&(a<c))
	{
		printf("the smallest is a %d \n",a);
	}
	else if((b<c)&&(b<a))
	{
		printf("the smallest is b %d \n",b);
	}
	else
	{
		printf("the smallest is c %d \n",c);
	}
	return 0;
}
