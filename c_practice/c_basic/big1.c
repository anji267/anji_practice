
#include<stdio.h>
int main()
{
        int a,b,c,z;
        printf("enter the values of a,b,c :\n");
        scanf("%d%d%d",&a,&b,&c);
	z=(a<b)?(a<c)?a:c:(b<c)?b:c;
	printf("the smallest is %d \n",z);
	return 0;
}

