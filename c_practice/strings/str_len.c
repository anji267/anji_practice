#include<stdio.h>
#include<string.h>
int main()
{
        int n;
        printf("enter the size of string : \n");
        scanf("%d",&n);
        getchar();
        char str[n];
        printf("enter the string : \n");
        fgets(str,sizeof(str),stdin);
        printf("the entered string is : \n");
        fputs(str,stdout);
        str[strcspn(str, "\n")] = '\0';
        int len=strlen(str);
        printf("the length of string is :%d \n",len);
        return 0;
}
