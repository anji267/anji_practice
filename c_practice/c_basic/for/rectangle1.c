#include<stdio.h>
int main()
{
        int rows,i,j;
        printf("enter the rows: \n");
        scanf("%d",&rows);
        for(i=3;i<=rows;i++)
        {
                for(j=1;j<=rows;j++)
                {
                        printf("* ");
                }
                printf("\n");
        }
}
