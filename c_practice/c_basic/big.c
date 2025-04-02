#include<stdio.h>
int main()
{
        int a,b,c;
        printf("enter the values of a,b, :\n");
        scanf("%d%d",&a,&b);
	c=(a<b)?a:b;
	printf("the smallest is %d  \n",c);
	return 0;
}
