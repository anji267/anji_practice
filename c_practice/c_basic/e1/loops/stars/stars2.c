#include <stdio.h>
int main()
{
    int a= 5;
    for (int i = 1; i <= a; i++) //rows
    {
	    for (int j = 0; j < a - i; j++)// spaces

	    {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

