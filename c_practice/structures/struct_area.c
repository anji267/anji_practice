#include<stdio.h>
#include<math.h>
#include <stdlib.h>  // Required for abs()
struct point
{
	int x;
	int y;
};
struct rectangle
{
	struct point upper_left;
	struct point lower_right;
};
int area(struct rectangle r)
{
	int length,breadth;
	length = r.lower_right.x - r.upper_left.x;
	breadth = r.upper_left.y - r.lower_right.y;
	return length*breadth;
}
int main()
{
	struct rectangle r;
	printf("enter the upper_left cordinates : \n");
	scanf("%d %d",&r.upper_left.x,&r.upper_left.y);
	printf("enter the lower_right coordinates : \n");
	scanf("%d %d",&r.lower_right.x,&r.lower_right.y);
	printf("the area of rectangle is : %dcmsq \n",abs(area(r))); //abs=unsined value in int
}

