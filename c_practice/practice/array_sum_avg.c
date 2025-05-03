#include <stdio.h>

int main() 
{
    int n,sum=0;
    float avg=0;
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
        sum = a[i]+sum;
    }
    avg = sum / n;
    printf("the sum is : %d\n",sum);
    printf("the avg is : %.2f\n",avg);
}
