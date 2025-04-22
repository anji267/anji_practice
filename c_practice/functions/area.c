#include<stdio.h>
int rectanglearea(int length,int breadth)
{
        int area;
        area = length * breadth;
        return area;
}
int main()
{
        int length,breadth;
        printf("enter the length and breadth of rectangle:\n");
        scanf("%d%d",&length,&breadth);
        int area = rectanglearea(length,breadth);
        printf("the area of rectangle is : %d\n",area);
        return 0;
}
