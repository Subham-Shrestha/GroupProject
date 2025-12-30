//wap to print even numbers and find their total sum of 1-10

#include<stdio.h>
int main()
{
    int i,sum=0;
    for(i=0; i<=10; i+=2)
    {
        sum=sum+i;
    }
    printf("The sum is %d\n",sum);
     return 0;
}