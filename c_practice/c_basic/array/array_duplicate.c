#include<stdio.h>
int main()
{
	int n,count=0;
	printf("enter the size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("enter the values in array: ");
	for(int h=0;h<n;h++)
	{
		scanf("%d",&a[h]);
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[j]==a[i])
			{
		 		count=count+1;
				a[j]=-1;
			}
		}
	}
	printf("the total duplicates are: %d",count);
}



