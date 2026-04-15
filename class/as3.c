//wap to take input and count the number of digits in a given number.

#include<stdio.h>
int main()
{
    int num, count=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if(num==0)
    {
        count=1;
    }
    else
    {
        while(num!=0)
        {
            num/=10;
            count++;
        }
    }
    
    printf("The number of digits is: %d\n", count);
    return 0;
}   