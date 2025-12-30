//wap to count how many times code gets gets executed using while loop

#include<stdio.h>
int main()
{
    int i=1, count=0;
    while(i<5)
    {
        count++;
        i++;
    }
    printf("Code gets executed %d times", count);
    return 0;
}