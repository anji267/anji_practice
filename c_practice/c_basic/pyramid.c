#include<stdio.h>
int main()
{
	int a,b,c;
	for(a=1;a<=5;a++){
		for(b=4;b>=a;b--)
			printf(" ");
	         for(c=1;c<=a;c++)
			 printf("* ");
               	printf("\n");}
}
