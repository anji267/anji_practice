#include<stdio.h>
int main()
{
        int n;
        printf("enter the year: \n");
        scanf("%d",&n);
        for(int year=1;year<=n;year++)
        {
                if((year%4==0)||(year%100==0))
                {
                        printf("the years are: %d \n",year);
                }
        }
        printf("\n");
}
