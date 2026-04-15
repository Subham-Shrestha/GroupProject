//wap to take the input value of N and find the sum of all even numbers between 1 and N.

#include<stdio.h>
int main()
{
    int N, i, sum=0;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    
    for(i=1; i<=N; i++)
    {
        if(i%2==0)
        {
            sum=i+sum;
        }
    }
    
    printf("The sum of all even numbers between 1 and %d is: %d\n", N, sum);
    return 0;
}
