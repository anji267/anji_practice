#include<stdio.h>
#include<string.h>
int main()
{
	int count=0,i=0;
	char A[30]="anji";
	//printf("enter the string : \n");
	//fgets(A,sizeof(A),stdin);
	while(A[i]!='\0')
	{
		count++;
		i++;
	}
	printf("the length of string is : %d \n",count);
}


