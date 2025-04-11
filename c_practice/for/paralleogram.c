#include<stdio.h>
int main()
{
	int rows;
	printf("enter the value of rows: \n");
	scanf("%d",&rows);
        for(int i=0;i<rows;i++)//rows
	{
		for(int j=0;j<i;j++)
		{
			printf(" ");
		}
		for(int k=0;k<rows;k++)
		{
			printf("* ");
		}
		{
		printf("\n");
		}

	}
}


