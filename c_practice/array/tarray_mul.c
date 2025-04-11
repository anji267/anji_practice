#include<stdio.h>
int main()
{
        int m,n,x,y,i,j;
        printf("enter the size of first matrix : \n");
        scanf("%d%d",&m,&n);
	printf("enter the size of second  matrix : \n");
        scanf("%d%d",&x,&y);
        int a[m][n];
        int b[x][y];
        int c[m][y];
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
        for( i=0;i<x;i++)
        {
                for( j=0;j<y;j++)
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
        for( i=0;i<x;i++)
        {
                for( j=0;j<y;j++)
                {
                        printf("%d \t",b[i][j]);
                }
                printf("\n");
        }
	for(i=0;i<m;i++)
	{
		for(j=0;j<y;j++)
		{
			c[i][j]=0;
		}
	}

        printf("the multipilication  of elements in both matrix is : \n");
	n=x;
	if(n==x)
	{	
	for(i=0;i<m;i++)
	{
		for(j=0;j<y;j++)
		{

			c[i][j]=0;
			for(int k=0;k<n;k++)
			{
				c[i][j]+=  a[i][k] * b[k][j];
			}
		}
		
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%d \t",c[i][j]);
		}
		printf("\n");
	}

}
}



