#include<stdio.h>
int main()
{
	int n;
	printf("enter the size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("enter the values of array: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int sum=0;
	for(int k=0;k<n;k++)
	{
		sum=sum+a[k];
	}
	printf("the sum of elements in array are : %d \n ",sum);
}
