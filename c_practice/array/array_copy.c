#include<stdio.h>
int main()
{
	int n;
	printf("enter the size of array: ");
	scanf("%d",&n);
	int a[n],b[n];
	printf("enter the values in array: \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		b[n]=a[n];
	}
	for(int i=0;i<n;i++)
	{
		printf("second array is : %d \n",a[i]);
	}

	/*
	printf("first array is : %d \n",a[i]);
	}
	for(int i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	 printf("second  array is :");
        for(int i=0;i<n;i++)
        {
                printf("%d",a[i]);
        }
}
*/
}
