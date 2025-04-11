#include <stdio.h>
int main()
{
	const float PI=3.14;
        float area,radius;
        printf("enter the radius : \n");
        scanf("%f",&radius);
        area = (PI * (radius*radius));
        printf("the area of circle is : %.2f \n",area);
}
