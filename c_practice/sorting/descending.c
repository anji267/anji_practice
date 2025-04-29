#include<stdio.h>
int main()
{
	int i,j,n,temp;
	printf("enter the size of array : \n");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements of array : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]>a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("the descending order of array is : \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}

