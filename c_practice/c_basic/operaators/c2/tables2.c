#include<stdio.h>
int main()
{
        for( int a=1;a<=5;a++)
        {
		printf("multiplication of table %d is: ",a);
                for(int b=1;b<=10;b++)
                {
                        printf("%d * %d = %d \n",a,b,a*b);
                }
                printf("\n");
        }
}
