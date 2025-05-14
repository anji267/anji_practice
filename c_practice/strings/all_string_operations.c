#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
        int n,len1=0,len2=0;
        char temp;
        printf("enter the size of  string : \n");
        scanf("%d",&n);
        getchar();
        char str1[n];
        char str2[n];
        char str3[n*2];
        printf("enter the first string(name): \n");
        fgets(str1,sizeof(str1),stdin);
        str1[strcspn(str1, "\n")] = '\0';
        printf("enter the second string(name): \n");
        fgets(str2,sizeof(str2),stdin);
        str2[strcspn(str2, "\n")] = '\0';
        int q=0,w=0;
        while(str1[q]!='\0')
        {
            len1++;
            q++;
        }
        while(str2[w]!='\0')
        {
            len2++;
            w++;
        }
        str1[q]='\0';
        str2[w]='\0';
        printf("the length of string1 is : %d\n",len1);
        printf("the length of string2 is : %d\n",len2);
        int u=0;
        int found=0;
        for(u=0;str1[u]!='\0' && str2[u]!='\0';u++)
        {
                if(str1[u]!=str2[u])
                 {
                        found=1;
                        break;
                }
        }
        if(found==0)
                printf("both strings are same \n");
                else
                        printf("both strings are not same \n");
        int i=0,j=0;
        while(str1[i]!='\0')
        {
            str3[i]=str1[i];
            i++;
        }
        str3[i++]=' ';
        while(str2[j]!='\0')
        {
            str3[i]=str2[j];
            i++;
            j++;
        }
        str3[i]='\0';
        printf("the mixed string  is : %s\n",str3);
        int len = strlen(str3);
        for( i=0;i<len/2;i++)
        {
            temp=str3[i];
            str3[i]=str3[len-1-i];
            str3[len-1-i]=temp;
        }
        printf("the reversed string is : %s\n",str3);
        return 0;
}

            

