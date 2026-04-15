#include<stdio.h>
int main()
{
    int marks[2][3];
    marks[0][0]=90;
    marks[0][1]=81;
    marks[0][2]=92;
    marks[1][0]=85;
    marks[1][1]=91;
    marks[1][2]=89;
    printf("%d", marks[1][2]);
    return 0;
}