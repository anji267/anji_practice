#include <stdio.h>
#include<string.h>
struct school {
    char name[100];
    int roll_number;
    float marks;
};
/*struct office
{
    char name[100];
    int roll_number;
    float marks;
    
};*/

int main() 
{
    int n,i=0;
    printf("enter the size of structure : \n");
    scanf("%d",&n);
    struct school student[n];
    struct school office[n];
    //struct office record[n];
    for(i=0;i<n;i++)
    {   printf("enter the details of %d student: \n",i+1);
        printf("name of student :  \n");
        scanf("%s",student[i].name);
    printf("roll number of student: \n");
        scanf("%d",&student[i].roll_number);
    printf("marks of student: \n");
        scanf("%f",&student[i].marks);
    }
    printf("the final details of students are : \n");
    for(int i=0;i<n;i++)
    {
    printf("the name of student %d is : %s and roll number is : %d and marks are : %.2f \n",i+1,student[i].name,student[i].roll_number,student[i].marks);
    }
     /*for(int i = 0; i < n; i++) 
     {
        strcpy(record[i].name, student[i].name);
        record[i].roll_number = student[i].roll_number;
        record[i].marks = student[i].marks;
    }*/
    printf("\n");
    for(int i=0;i<n;i++)
    {
    office[i]=student[i];
    }
    printf("the copied structure is : \n");
    for(int i = 0; i < n; i++) {
        printf("Employee %d:\n", i+1);
        printf("Name: %s\n",office[i].name);
        printf("ID: %d\n", office[i].roll_number);
        printf("Score: %.2f\n\n", office[i].marks);
    }
    
    return 0;
}
