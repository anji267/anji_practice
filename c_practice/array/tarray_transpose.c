#include<stdio.h>
int main()
{
	int m,n;
	printf("enter the size of array : ");
	scanf("%d%d",&m,&n);
	int a[m][n];
	printf("enter the values in array : ");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("the transpose of matrix is : ");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
}

