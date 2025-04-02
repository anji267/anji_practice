#include<stdio.h>
int main()
{
	int a;
	for(a=1;a<=100;a++)
	{
		if(a%3==0)
		{
			printf("%d  ",a);
			{
				if(a%10==0)
					printf("\n");
			}
		
		}
	}

}

