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
    
    for( int i=0;i<n;i++)
    {
        if(a[i]%2==0)
            count++;
            else
            count1++;
    }
    printf("there are %d even numbers in the array \n",count);
        printf("there are %d odd numbers in the array \n",count1);
}

