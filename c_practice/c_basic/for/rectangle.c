#include<stdio.h>
int main()
{
        int rows,i,j;
        printf("enter the rows: \n");
        scanf("%d",&rows);
        for(i=1;i<=rows;i++)
        {
                for(j=3;j<=rows;j++)
                {
                        printf("* ");
                }
                printf("\n");
        }
}
