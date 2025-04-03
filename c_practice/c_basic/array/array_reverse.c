#include<stdio.h>
int main()
{
        int a[10];
        printf("enter the values of array: ");
        for(int i=0;i<10;i++)
        {
                scanf("%d",&a[i]);
        }
        for(int j=0;j<9;j++)
	{
		printf("the original values are : %d \n ",a[j]);
	}
	printf("\n");
	for(int i=9;i>=0;i--)
	{
		printf("the reverse array are : %d \n",a[i]);
	}
}

