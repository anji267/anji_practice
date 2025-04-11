#include<stdio.h>
int main()
{
	int m,n;
	printf("enter the size of array: \n");
	scanf("%d%d",&m,&n);
	int a[m][n];
	printf("enter the values in array: \n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("the values in array are : %d \n",a[i][j]);
		}
	}
}

