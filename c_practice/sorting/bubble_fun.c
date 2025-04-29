#include<stdio.h>
int  sorting(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
				temp = a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
}
int main()
{
	int n,i,sort;
	printf("enter the size of array : \n");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements of array : \n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
         sorting(a,n);
	printf("the sorting of array is : \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}



