#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int a[n],b[n],c[2*n];
    printf("enter the values of array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
	    scanf("%d",&b[i]);
    }

    
