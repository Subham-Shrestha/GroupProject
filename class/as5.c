//wap to take input value of N and print all prime number between 1 to N.

#include<stdio.h>
int main()  
{  
    int N, i, j, isPrime;  
    printf("Enter the value of N: ");  
    scanf("%d", &N);  
    
    printf("Prime numbers between 1 and %d are:\n", N);  
    for(i = 2; i <= N; i++)  
    {  
        isPrime = 1;  
        for(j = 2; j <= i / 2; j++)  
        {  
            if(i % j == 0)  
            {  
                isPrime = 0;  
                break;  
            }  
        }  
        if(isPrime)  
        {  
            printf("%d ", i);  
        }  
    }  
    
    printf("\n");  
    return 0;  
}