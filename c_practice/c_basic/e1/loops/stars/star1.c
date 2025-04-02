#include<stdio.h>
int main()
{
	int a,b,c;
	for(a=1;a<=5;a++) //for rows
	{
		for(b=0;b<0;b++)
		{
				printf(" ");
		}
		for(c=0;c<=a;c++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}



