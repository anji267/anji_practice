#include<stdio.h>
//#pragma pack(1) this is used when we dont want to waste memeory but cpu cycles will be wasted
struct abc
{
	int a;
	char b;
	float c;
}var;
int main ()
{
	struct abc var;
	printf("the size of var is : %lu \n",sizeof(var));
}


