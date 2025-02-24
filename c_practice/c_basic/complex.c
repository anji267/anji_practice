#include<stdio.h>
#include<complex.h>
int main()
{
	complex int  a= 3 + 4 * I;
	complex int  b= 7 + 5 * I;
	complex int  z= 0;
	z=a+b;
	printf("a=%d + %dI \n",(int)creal(a),(int)cimag(a));
	printf("b=%d + %dI \n",(int)creal(b),(int)cimag(b));
	printf("the sum of two numbers is :z= %d+ %dI \n",(int)creal(z),(int)cimag(z));
	return 0;
}
