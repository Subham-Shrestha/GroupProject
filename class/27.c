//wap to take a number and print its reverse value

#include<stdio.h>
int main()
{
    int num=123,remainder, reverse_num=0;
    while(num!=0)
    {
        remainder=num%10;
        reverse_num=reverse_num*10+remainder;
        num=num/10;
    }
    printf("Reverse num is %d",reverse_num);
}
