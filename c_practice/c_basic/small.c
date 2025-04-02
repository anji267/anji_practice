#include<stdio.h>
int main()
{
	int m,n;
	printf("enter the numbers m,n : \n");
	scanf("%d%d",&m,&n);
	if(m<n)
		printf("the smallest is  %d \n",m);
	else
		printf("the smallest is  %d \n",n);
	return 0;
}
