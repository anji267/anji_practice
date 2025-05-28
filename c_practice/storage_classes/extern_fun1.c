#include<stdio.h>
int factorial(int n)
{
	int i=0;
	int fact=1;
	for(int i=n;i>0;i--)
	{
		fact*=i;
	}
	return fact;
}



