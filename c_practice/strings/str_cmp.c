#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
        int n;
        printf("enter the size of string : \n");
        scanf("%d",&n);
        getchar();
        char str1[n];
        char str2[n];
        printf("enter the first string(name) : \n");
        fgets(str1,sizeof(str1),stdin);
        str1[strcspn(str1,"\n")]='\0';
        printf("enter the second string(name) : \n");
        fgets(str2,sizeof(str2),stdin);
        str2[strcspn(str2,"\n")]='\0';
        int result = strcmp(str1,str2);
        if(result==0)
        {
                printf("the strings are equal \n");
        }
        else if(result !=0)
        {
                printf("the strings are not same \n");
        }

                return 0;
}
