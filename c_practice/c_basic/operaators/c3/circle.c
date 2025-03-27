#include <stdio.h>
#define PI 3.14
int main()
{
	float area,radius;
	printf("enter the radius : \n");
	scanf("%f",&radius);
	area = (PI * (radius*radius));
	printf("the area of circle is : %.2f \n",area);
}

