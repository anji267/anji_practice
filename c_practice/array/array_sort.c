#include<stdio.h>
int main()
{
	int n,temp;
	printf("enter the size of array: \n");
	scanf("%d",&n);
	int a[n];
	printf("enter the values of array : \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("the sorted array is : \n");
	for(int i=0;i<n;i++)
	{
		printf("%d \t",a[i]);
	}
}

