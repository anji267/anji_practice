#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,precision;
	printf("enter the values : \n");
	scanf("%f%f%f",&a,&b,&precision);
	if(fabs(a-b)<precision)
	{
		printf("the numbers are within precision: %.3f  \n",precision);
	}
	else
	{
		printf("the numbers are not within the precision :  %.3f \n",precision);
	}
}

