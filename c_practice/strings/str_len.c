#include<stdio.h>
#include<string.h>
int main()
{
	int count=0;
	char name[100];
	printf("enter the name : \n");
	fgets(name,sizeof(name),stdin);
	count=strlen(name);
	printf("the length of string is : %d \n",count);
}
