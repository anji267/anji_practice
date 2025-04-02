#include<stdio.h>
int main()
{
        int rows,columns;
        for(rows=1;rows<=5;rows++)
                for(columns=1;columns<=10;columns++)
                {
                        if((columns=6-rows)&&(columns<=4+rows))

                                printf(" * ");
	         
                        else
                                printf("  ");
		 }
		    
        printf("\n");

}
