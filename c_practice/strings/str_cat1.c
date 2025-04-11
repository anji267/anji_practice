#include<stdio.h>
#include<string.h>
int main()
{
	int len1,len2;
	char s1[20]="Anji";
	char s2[20]="Adhikari";
	len1=strlen(s1);
	len2=strlen(s2);
	for(int i=0;i<len2;i++)
	{
		s1[len1 + i]=s2[i];          //we can change s1 and s2 here 
	}
	printf("%s \n",s1);
}


