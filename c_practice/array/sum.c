#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the size of array: ");
	scanf("%d",&n);
	int a[n],b[n],c[n];
	printf("enter the values of array a: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the values of array b: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
	{
		c[i]=a[i] + b[i];
	}
	printf("the sum of arrays at %d is : %d \n",i,c[i]);
	}
}


