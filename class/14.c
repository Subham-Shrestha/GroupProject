//wap to take input of a numbers and print its multiplication table
#include<stdio.h>
int main()
{
    int num1, i;
    printf("Enter a number:");
     scanf("%d",&num1);
    for(i=1; i<=10; i++)
    {
        printf("%d * %d=%d\n", num1,i,num1*i);
    }
    return 0;
}