#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of rows : \n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            printf(" ");
        }
        for(int k=0;k<n;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
