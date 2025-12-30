//wap to take input and marks of student of 5 subject and calculate the total marks

#include<stdio.h>
int main()
{
    int i;
    int marks[5], total_marks=0;
    for(i=0; i<=4; i++)
    {
        printf("Enter marks of %d student: ", i+1);
        scanf("%d", &marks[i]);
    }
    for(i=0; i<=5; i++)
    {
     total_marks = total_marks + marks[i];
    }
    printf("total marks of student is: %d", total_marks);
    return 0;

}