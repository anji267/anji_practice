#include<stdio.h>
int main()
{
	int m,n,i,j;
	printf("enter the size of matrix : \n");
	scanf("%d%d",&m,&n);
	int a[m][n];
	int b[m][n];
	int c[m][n];
	printf("\n");
	printf("enter the elements of first matrix : \n");
	for( i=0;i<m;i++)
	{
		for( j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	printf("enter the elements of second matrix : \n");
	for( i=0;i<m;i++)
	{
		for( j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n");
	printf("the elements of first matrix is : \n");
	for( i=0;i<m;i++)
        {
                for( j=0;j<n;j++)
                {
                        printf("%d \t",a[i][j]);
                }
		printf("\n");
        }
	printf("\n");
	printf("the elements of second  matrix is : \n");
        for( i=0;i<m;i++)
        {
                for( j=0;j<n;j++)
                {
                        printf("%d \t",b[i][j]);
                }
		printf("\n");
        }
	printf("the sum of elements in both matrix is : \n");
	//c[i][j]=0;
	for( i=0;i<m;i++)
	{
		for( j=0;j<n;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}



