#include<stdio.h>
int main()
{
	int m,n,i,j,sum=0;
	printf("enter the size of array ");
	scanf("%d%d",&m,&n);
	int a[m][n];
	printf("enter the values in array : \n  ");
	for( i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("the sum of rows in array are : \n ");
	for( i=0;i<m;i++)
	{
		sum=0;
		for( j=0;j<n;j++)
		{
			sum=sum+a[i][j];
		}
		printf(" sum of %d row = %d \n",i,sum);
	}
	printf("\n");
	printf("the sum of columns are :\n ");
	for( j=0;j<n;j++)
	{
		sum=0;
		for( i=0;i<m;i++)
		{
			sum=sum + a[i][j];
		}
		 printf("sum of %d = %d \n",j,sum);
	}

		
}

