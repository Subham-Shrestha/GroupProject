//wap to take a number and print its reverse value by do while loop

#include<stdio.h>
int main()
{
    int num=123,remainder, reverse_num=0;

    do
    {
        remainder=num%10;
        reverse_num=reverse_num*10+remainder;
        num=num/10;
    }
    while(num!=0);
    printf("Reverse num is %d",reverse_num);

    return 0;
}