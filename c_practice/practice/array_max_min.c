#include <stdio.h>

int main() 
{
    int n,min,max;
    printf("enter the size of array : \n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for( int i=0;i<n;i++)
    {
        min=a[0];
    max=a[0];
    {
        if(a[i]<min)
        min=a[i];
    }
    {
        if(a[i]>max)
        max=a[i];
    }
    }
    printf("the max is : %d\n",max);
    printf("the min is : %d \n",min);
}
