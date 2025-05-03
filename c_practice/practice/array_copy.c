#include <stdio.h>

int main() 
{
    int n;
    printf("enter the size of array : \n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b[n];
    for(int i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    printf("the elements of first array is : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("the elements of second  array is : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",b[i]);
    }
    
}
    
