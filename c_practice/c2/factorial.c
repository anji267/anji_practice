#include<stdio.h>
int main()
{
	int n;
	unsigned long long factorial=1;
	printf("enter the value : \n");
	scanf("%d",&n);
	if(n>0)
	{
		for(int i=1;i<=n;i++)
		{
			factorial=factorial * i;
		}
		printf("the factorial of number is : %llu \n",factorial);
	}
}

