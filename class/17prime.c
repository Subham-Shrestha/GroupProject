//wap to input a number and check if it is prime number or not

#include <stdio.h>

int main()
{
    int num,i, isPrime=1;

    printf("Enter a number:");
    scanf("%d", &num);

    for (i = 2; i <=num; i++)
    {
        if(num%i==0)
        {
            isPrime=0;
            break;
        }
    
        if( isPrime==0)
        {
            printf("It is not a prime number");
        }
        else 
        {
            printf("it is a prime number");
        }
        return 0;
 }
}


   