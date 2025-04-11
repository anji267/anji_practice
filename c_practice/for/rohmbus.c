#include<stdio.h>
int main()
{
	int rows,i=0,j=0,k=0;
	printf("enter the rows: \n");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=rows-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(i=rows;i>=1;i--)
	{
		 for(j=1;j<=rows-i;j++)
                {
                        printf(" ");
                }
                for(k=1;k<=i;k++)
                {
                        printf("* ");
                }
                printf("\n");
        }
}

