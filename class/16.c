//wap to input a number and find its factorial
#include<stdio.h>
int main()
{
    int n;
    int fact=1,i;
    printf("Enter a number:");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    printf("%d", fact);
    return 0;
}