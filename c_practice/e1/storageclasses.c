#include<stdio.h>
int a=10;
void add()
{
	static int b;
	int c=0,d=0;
	b=b+10;
	c=c+b+10;
	d=c+10;
	printf("the value is :%d \n",d);
	printf("the final value is : %d \n",d);
}
int main()
{
	int e=1,f=2,g;
	g=e+f+a;
	printf("the value of g is : %d \n",g);
	add();
	add();
}

