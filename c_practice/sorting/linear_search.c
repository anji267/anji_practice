#include<stdio.h>
int main()
{
	int n,a,b=0,i;
	printf("enter the size of array : \n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements of array : \n");
	for( i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the number we want to search :\n");
	scanf("%d",&a);
	for(i=0;i<n;i++){
		if(a==arr[i])
		{
			b=1;
		        printf("The element is present at position %d and its value is %d",i,a);
			break;
		}
	}
	if(b==0)
	{
		printf("The element is not present");
	}
}
	

