//wap to take input of 5 student marks and print them all


#include <stdio.h>
int main()
{
    int i;
    int marks[5];
    for (i=0; i<=5; i++)
    {
        printf("enter marks of %d student:", i+1);
        scanf("%d\n", &marks[i]);
    }
    return 0;


}