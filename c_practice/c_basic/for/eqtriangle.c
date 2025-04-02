#include<stdio.h>
int main()
{
        int rows,i=0,j=0,k=0;
        printf("enter the number of rows : \n");
        scanf("%d",&rows);
        for(i=1;i<=rows;i++)
        {
                for(j=1;j<=rows-i;j++)
                {
                       printf(" ");
                }
                for(k=1;k<=i;k++)
                {
                        printf("* ");
                }
                printf("\n");
        }
}
