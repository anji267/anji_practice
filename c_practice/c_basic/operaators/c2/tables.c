#include<stdio.h>
int main()
{
	for( int a=1;a<=20;a++)
	{
		for(int b=1;b<=5;b++)
		{
			printf("%d * %d = %d \t",b,a,a*b);
		}
		printf("\n");
	}
}

