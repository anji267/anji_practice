#include<stdio.h>
int main()
{
	int a,b,c,gcd;
	printf("enter the values : \n");
	scanf("%d%d",&a,&b);
	while(b !=0)
	{
		c = a%b;   // 33 % 12 = 9
		a=b; // a=12
		b=c; // b=9
	
	}
	printf("the gcd of two numbers is : %d \n",a);
}


