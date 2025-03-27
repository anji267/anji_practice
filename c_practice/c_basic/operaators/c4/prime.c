#include<stdio.h>
//#include<math.h>
int main()
{
	int num,i;
	printf("enter the number:\n");
	scanf("%d",&num);
	int limit=num/2;
	for( i=2;i<=limit;i++)
	{
		if(num%i==0){
			printf("%d is not prime number\n",num);
			break;
		}
		
	}
	if(i>limit)
		printf("%d is prime number\n",num);

	return 0;
}

