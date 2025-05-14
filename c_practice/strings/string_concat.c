#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
        int n,i=0,j=0;
        printf("enter the size of  string : \n");
        scanf("%d",&n);
        getchar();
        char str1[n];
        char str2[n];
        printf("enter the source string(name): \n");
        fgets(str1,sizeof(str1),stdin);
        str1[strcspn(str1, "\n")] = '\0';
        printf("enter the destination string(name): \n");
        fgets(str2,sizeof(str2),stdin);
        str2[strcspn(str2, "\n")] = '\0';
        int len1=strlen(str1);
        int len2=strlen(str2);
         while(str1[i]!='\0')
        {
                i++;
        }
        str1[i++]=' ';
        while(str2[j]!='\0')
        {
                str1[i++]=str2[j++];
        }
        str1[i]='\0';
        printf("the final string is : %s\n",str1);
        /*
        if(len1 + 1 + len2 < n)
        {
        {
            str1[len1]=' ';
        for(i=0;i<len2;i++)
        {
            str1[len1+1+i]=str2[i];
        }
        str1[len1 + 1 + i]='\0';
        }
        printf("the final string is : %s\n",str1);
        }
        else
        {
            printf("there is not enough space \n");
        }*/
        return 0;
}
