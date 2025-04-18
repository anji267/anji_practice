#include<stdio.h>
int main()
{
    int i,n;
   static int j;
    printf("enter the size: \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=1;j<=n;j++)
    {
        printf("%d ",((i*5)+j));
    }
    printf("\n");
    }
}
