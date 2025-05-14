#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int n,i=0;
    printf("enter the size of string : ");
    scanf("%d",&n);
    getchar();
    char str1[n];
    char str2[n];
    printf("enter the string : \n");
    fgets(str1,sizeof(str1),stdin);
    str1[strcspn(str1,"\n")]='\0';
    while(str1[i]!='\0')
    {
        str2[i]=str1[i];
        i++;
    }
    str1[i]='\0';
    printf("the copy of string is : %s",str2);
    return 0;
}
