#include<stdio.h>
int main()
{
	int rows,columns;
	for(rows=1;rows<=5;rows++)
		for(columns=1;columns<=10;columns++)
		{
			if(columns=rows+4)
			
				printf(" * ");
			else
				printf("  ");
		}
	printf("\n");
}

		
