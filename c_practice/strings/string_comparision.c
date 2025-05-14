#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
        int n,found=0,i=0;
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
        while(str1[i]!='\0'&&str2[i]!='\0')
        {
                if(str1[i]!=str2[i])
                {
                        found=1;
                        break;
                }
                i++;
        }
        if(found==0 && str1[i]=='\0' && str2[i]=='\0')
                printf("the entered strings are same \n");
        else
                printf("the entered strings are not same \n");
}
