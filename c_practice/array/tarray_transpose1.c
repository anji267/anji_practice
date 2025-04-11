#include<stdio.h>
int main()
{
        int m,n;
        printf("enter the size of array : ");
        scanf("%d%d",&m,&n);
        int a[m][n];
	int b[n][m];
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
                        b[j][i]=a[j][i];
			printf("%d ",b[j][i]);
                }
                printf("\n");
        }
}
