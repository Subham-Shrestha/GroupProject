//wap to take input and check whether a number is a prime number.
#include<stdio.h>
int main()  
{  
    int num, i, isPrime = 1;  
    printf("Enter a positive integer: ");  
    scanf("%d", &num);  
     if (num<=1)  
    {  
        isPrime=0;  
    }  
    else  
    {  
        for (i=2; i<=num/2; i++)  
        {  
            if (num%i==0)  
            {  
                isPrime=0;  
                break;  
            }  
        }  
    }  
     if (isPrime)  
        printf("It is a prime number", num);  
    else  
        printf("It is not a prime number", num);  
    
    return 0;  
}