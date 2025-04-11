#include<stdio.h>
int main()
{
        int m,n,sum=0;
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
	printf("the sum of elements in array are: \n");
        for(int i=0;i<m;i++)
        {
                for(int j=0;j<n;j++)
                {
			sum = sum + a[i][j];
			//printf("%d \n",sum);
                }
		printf("%d \n",sum);
	
        }
	//printf("%d \n",sum);
	
}

