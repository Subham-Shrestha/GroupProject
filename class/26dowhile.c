//wap to count how many times code gets gets executed using  do while loop

#include<stdio.h>
int main()
{
    int i=1,count=0;
    do{
        count++;
        i++;
    }
    while(i<5);
    
    printf("Code get executed %d times", count);
    
    return 0;
}