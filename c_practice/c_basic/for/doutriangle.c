#include<stdio.h>
int main()
{
        int rows;
        printf("enter the value of rows: ");
        scanf("%d",&rows);
        for(int i=rows;i>0;i--)
        {
                for(int j=0;j<rows-i;j++)
                {
                        printf(" ");
                }
                for(int k=0;k<i;k++)
                {
                        printf("* ");
		}
	    	for(int j=0;j<rows-i;j++)
                {
                        printf("  ");
                }
                for(int k=0;k<i;k++)
                {
                        printf("* ");
                }
		printf("\n");
	}
}

