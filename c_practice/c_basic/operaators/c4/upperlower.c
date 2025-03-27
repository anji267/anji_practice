#include<stdio.h>
int main()
{
	char letter;
	printf("enter the letter : \n");
	scanf("%c",&letter);
	if(letter>='A' && letter<='Z')
	{
		printf("the letter is upper case : %c \n",letter);
	}
	else if(letter>='a' && letter<='z')
	{
	printf("the letter is lower case : %c  \n ",letter);
	}
}


