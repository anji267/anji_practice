#include <stdio.h>

int main() 
{
    int n,count=0,count1=0;
    printf("enter the size of array : \n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=n-1;i>=0;i--)
    {
        printf("%d\t",a[i]);
    }
}
