#include<stdio.h>
int main()
{
	int n,i,j,index,temp;
	printf("enter  the size of array : \n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements of array : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		index=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[index])
			{
				index = j;
			}
		}
			temp=0;
		temp=arr[index];
		arr[index]=arr[i];
		arr[i]=temp;
		}
	
	printf("the elements in ascending order are : \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}



