#include<stdio.h>
int ascii_int(char str[])
{
	int i=0,sign=1,num=0;
	if(str[i]=='+')
	{
		sign = 1;
		i++;
	}
	else if(str[i]=='-')
	{
		sign = -1;
		i++;
	}
	while(str[i]>='0'&& str[i]<='9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return num*sign;
}
int main()
{
	char str[100];
	printf("Enter the string : \n");
	scanf("%s",str);
	int number = ascii_int(str);
	printf("the integer values in the string are : %d \n",number);
}

	
