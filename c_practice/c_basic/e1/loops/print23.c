#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the values : \n");
		scanf("%d%d",&a,&b);
	for(int n=1;n<=20;n++)
	{
		printf("%d *%d = %d ",a,n,a*n);
		printf(" \t %d * %d =%d \n",b,n,b*n);
	}
}

