#include <stdio.h>

int main() 
{
    int n,b,c=0;
    printf("enter the size of array : \n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number you want to search : \n");
    scanf("%d",&b);
    for(int i=0;i<n;i++)
    {
        if(b==a[i])
        {
        printf("the element is there in the array ");
                c=1;

        //break;
        }
    }
    if(c==0)
    {
        printf("the elemet is not found");
    }
}
    
