#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter the values of a,b,c,d :\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a<b)
	{
		if(a<c)
		{
			if(a<d)
			{
				printf("the smallest is a %d \n",a);
			}
		}
	}
	else if(b<c)
	{
		if(b<d)
		{
			if(b<a)
			{
				printf("the smallest is b %d \n",b);
			}
		}
	}
	else if(c<a)
	{
		if(c<d)
		{
			if(c<b)
			{
				printf("the smallest is c %d \n",c);
			}
		}
	}
	else
	{
		printf("the smallest is d %d \n",d);
	}
}
